const readline = require('readline');
var SerialPort = require("serialport");
var Q = require('q');
var EventEmitter = require('events').EventEmitter;

var fingureEmitter = new EventEmitter();            //指纹接受消息弹射器

var MessageOpenError = 'open port error : ';        //串口打开失败的提示

var PackageHeaderBuffer = new Buffer('EF01FFFFFFFF01', 'hex');      //UART发送包包头

var cmdReceiveBuffer = new Buffer('');      //指令串，包含EF01FFFFFFFF07
var packageLength = 0;                      //接受包长度，不包含长度位，但包含校验和
var waiteCount = 100;                       //录入指纹时的失败控制次数
var inputFingureTimmer;

var port = new SerialPort(
    "COM3",
    {
        baudRate: 9600,
        parser: SerialPort.parsers.byteLength(1),
        autoOpen: false,
    }
);

port.on('error', err => console.log(err));

port.on('data', data => {
    let dataBuffer = new Buffer(data, 'hex');

    //console.log('data received: =========' + dataBuffer.toString('hex'));

    cmdReceiveBuffer = Buffer.concat([cmdReceiveBuffer, dataBuffer]);

    if (cmdReceiveBuffer.length == 9) {
        //提取包长度信息, packageLength = buffer[8,9]
        packageLength = (cmdReceiveBuffer[7] << 8) + cmdReceiveBuffer[8];
        //console.log('packageLength: ' + packageLength);
    } else if (cmdReceiveBuffer.length == 9 + packageLength) {
        //结束一轮消息接受，清空buffer，解析命令
        //console.log('cmd end.cmd is: ' + cmdReceiveBuffer.toString('hex'));
        let checkSum = cmdReceiveBuffer[8 + packageLength]
        let cfmCode = cmdReceiveBuffer[9];
        let params = [];
        for (kk = 0; kk < (packageLength - 3) / 2; kk++) {
            params.push((cmdReceiveBuffer[10 + kk * 2] << 8) + cmdReceiveBuffer[11 + kk * 2]);
        }

        //console.log('checkSum is:' + checkSum);
        //console.log('cfmCode  is:' + cfmCode);
        //console.log('params are:' + params.toString());

        let tempSum = 0;
        for (kk = 6; kk < cmdReceiveBuffer.length - 2; kk++) {
            tempSum += cmdReceiveBuffer[kk];
        }
        if (tempSum == checkSum) {
            //校验正确，发射消息响应
            fingureEmitter.emit('dataReceived', cfmCode, params);
        }
        //清空指令buffer
        cmdReceiveBuffer = new Buffer('');
    }
});

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

//菜单0：与指纹模块握手
function ackFingure() {
    sendCmd('13', '00000000').then(data => {
        if (data.cfmCode == 0)
            console.log('握手成功');
        else
            console.log('握手失败');
        rl.prompt();
    }).catch(err => { console.log('握手失败') });
}


//菜单1：录入指纹
function inputFingure() {
    waiteCount = 100;
    console.log('开始采集第一次指纹，请将手指放到采集器');
    inputFingureTimmer = setInterval(() => {
        if (waiteCount == 0) {
            clearInterval(inputFingureTimmer);
            console.log('长时间没有采集到指纹，已终止采集');
            return;
        }
        sendCmd('01').then(data => {
            if (data.cfmCode == 0) {
                clearInterval(inputFingureTimmer);
                console.log('指纹采集成功');
                console.log('准备生成特征码到cb1');
                return sendCmd('02', '01');
            }else if (data.cfmCode == 2) {
                //console.log('没有指纹，等待录入：' + waiteCount);
                waiteCount--;
            }else{
                console.log('录入失败, 等待继续录入：' + waiteCount);
                waiteCount--;
            }
        }).then(data => {
            if (data.cfmCode == 0) {
                console.log('生成特征码到cb1成功');
                console.log('开始采集第二次指纹，请将手指放到采集器');
                waiteCount = 100;
                inputFingureTimmer = setInterval(() => {
                    if (waiteCount == 0) {
                        clearInterval(inputFingureTimmer);
                        console.log('长时间没有采集到指纹，已终止采集');
                        return;
                    }
                    sendCmd('01').then(data => {
                        if (data.cfmCode == 0) {
                            clearInterval(inputFingureTimmer);
                            console.log('指纹采集成功');
                            console.log('准备生成特征码到cb2');
                            return sendCmd('02', '02');
                        }else if (data.cfmCode == 2) {
                            //console.log('没有指纹，等待录入：' + waiteCount);
                            waiteCount--;
                        }else{
                            console.log('录入失败, 等待继续录入：' + waiteCount);
                            waiteCount--;
                        }
                    }).then(data => {
                        if (data.cfmCode == 0) {
                            console.log('生成特征码到cb2成功');
                            console.log('准备合并特征码');
                            return sendCmd('05');
                        } else {
                            console.log('生成特征码到cb2失败');
                        }
                    }).then(data => {
                        if (data.cfmCode == 0) {
                            console.log('合并成功');
                            console.log('准备将合并后的特征码保存到指纹库10位置');
                            return sendCmd('06', '020010');
                        } else if (data.cfmCode == 10) {
                            console.log('合并失败，两个指纹不是同一手指');
                        }
                    }).then(data => {
                        if (data.cfmCode == 0) {
                            console.log('保存成功，流程结束！');
                        } else {
                            console.log('保存失败！code：' + data.cfmCode);
                        }
                    });
                }, 1000);
            }
            else {
                console.log('生成特征码到cb1失败');
            }
        });
    }, 1000);
}

//菜单2：检索指纹
function searchFingure(){
    console.log('开始采集指纹，请将手指放到采集器');
    waiteCount = 100;
    inputFingureTimmer = setInterval(() => {
        if(waiteCount <= 0){
            clearInterval(inputFingureTimmer);
            console.log('长时间没有采集到指纹，已终止采集');
            return;
        }
        sendCmd('01')
            .then(data => {
                if(data.cfmCode == 0){
                    clearInterval(inputFingureTimmer);
                    console.log('指纹采集成功');
                    console.log('准备生成特征码到cb1');
                    return sendCmd('02', '01');              
                }else{
                    //console.log('没有指纹，等待录入：' + waiteCount);
                    waiteCount--;
                }
            }).then(data => {
                if(data.cfmCode == 0){
                    console.log('生成特征码到cb1成功，准备匹配指纹库');
                    return sendCmd('04', '01000003E8');
                }else{
                    console.log('生成特征码到cb1失败');
                }
            }).then(data => {
                if(data.cfmCode == 0){
                    console.log('比对成功，指纹ID：' + data.params[0] + ' 匹配度：' + data.params[1] + '。流程结束！');
                }else if(data.cfmCode == 9){
                    console.log('没有匹配指纹，流程结束！');
                }else{
                    console.log('其他错误，code: ' + data.cfmCode);
                }
            });
    }, 1000);
}

//菜单3：获取指纹库有效个数
function getFingureDBCount(){
    console.log('正在获取指纹库有效指纹个数');
    sendCmd('1d').then(data => {
        if(data.cfmCode == 0){
            console.log('指纹库个数提取成功：' + data.params[0]);
        }else{
            console.log('指纹库个数提取失败。');
        }
    });
}

//菜单4：获取指纹库
function getFingureDBList(){
    console.log('正在获取指纹库有效指纹位置列表');
    sendCmd('1F', '00').then(data => {
        if(data.cfmCode == 0){
            console.log('page0列表读取完毕：');
            data.params.forEach(value => console.log(value));
        }else{
            console.log('page0列表读取失败：' + data.cfmCode);
        }
    }).catch(err => console.trace(err));
}

// close事件监听
rl.on("line", answer => {
    switch (answer) {
        case '0':
            ackFingure();
            break;
        case '1':
            inputFingure();
            break;
        case '2':
            searchFingure();
            break;
        case '3':
            getFingureDBCount();
            break;
        case '4':
            getFingureDBList();
            break;
        case '5':
            closePort();
            while (!port.isOpen())
                process.exit(0);
        default:
            showMenu();
    }
});

//内部发送串口通信函数
function sendCmdFn(cmd, params) {
    let cmdBuffer = new Buffer(cmd, 'hex');
    let paramsBuffer = null;
    if (params && params != '')
        paramsBuffer = new Buffer(params, 'hex');
    let length = (paramsBuffer ? paramsBuffer.length : 0) + 3;           //计算长度，指令1byte + 参数nbyte + 校验和2byte
    let checkSum = cmdBuffer[0] + (paramsBuffer ? paramsBuffer.reduce((x, y) => x + y) : 0) + 1 + length;    //求校验和，使用了数组的高阶函数reduce

    let l1 = length >> 8;
    let lengthBuffer = Buffer.from([l1, length]);
    let c1 = checkSum >> 8;
    let checkSumBuffer = Buffer.from([c1, checkSum]);

    let resultBuffer = paramsBuffer ? Buffer.concat([PackageHeaderBuffer, lengthBuffer, cmdBuffer, paramsBuffer, checkSumBuffer]) : Buffer.concat([PackageHeaderBuffer, lengthBuffer, cmdBuffer, checkSumBuffer]);

    //console.log('send: ' + resultBuffer.toString('hex'));
    port.write(resultBuffer);
}

//对外公开的发送串口指令函数
function sendCmd(cmd, params) {
    var deferred = Q.defer();
    if (port.isOpen()) {
        sendCmdFn(cmd, params);
    } else {
        port.open(err => {
            if (err)
                deferred.reject(err);
            else
                sendCmdFn(cmd, params);
        })
    }
    fingureEmitter.once('dataReceived', (cfmCode, params) => {
        //console.log(cfmCode + "\nParams's length:" + params.length);
        deferred.resolve({ 'cfmCode': cfmCode, 'params': params });
    });
    return deferred.promise;
}

function closePort() {
    if (port.isOpen())
        port.close();
}

function showMenu() {
    console.log(
        `What do you want to do?
    0.与指纹模块握手验证.
    1.录入指纹.
    2.验证指纹.
    3.获得数据库特征个数
    4.获得数据库特征列表
    5.退出\n`);
    rl.prompt();
}

showMenu();