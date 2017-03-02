var SerialPort = require("serialport");

var cmdReceiveBuffer = new Buffer('');      //指令串，包含EF01FFFFFFFF07
var packageLength = 0;                      //接受包长度，不包含长度位，但包含校验和

var ACK_CMD = new Buffer('EF01FFFFFFFF0100071300000000001B', 'hex');
var GET_LIST_CMDS = [
    new Buffer('EF01FFFFFFFF0100041F000024', 'hex'),
    new Buffer('EF01FFFFFFFF0100041F010025', 'hex'),
    new Buffer('EF01FFFFFFFF0100041F020026', 'hex'),
    new Buffer('EF01FFFFFFFF0100041F030027', 'hex')
]
var SEND_CMDS_INPUT = [
    new Buffer('EF01FFFFFFFF010003010005',   'hex'),              //0:录入指纹图像到imageBuffer
    new Buffer('EF01FFFFFFFF01000402010008', 'hex'),              //1:从指纹图像生成特征码到cb1
    new Buffer('EF01FFFFFFFF01000402020009', 'hex'),              //2:从指纹图像生成特征码到cb2
    new Buffer('EF01FFFFFFFF010003050009',   'hex'),              //3:合并指纹
    new Buffer('EF01FFFFFFFF0100030601FFFF9',   'hex'),              //4:存储模板
];

console.log('start');

var port = new SerialPort(
    "COM3",
    {
        baudRate: 9600,
        parser: SerialPort.parsers.byteLength(1),
        autoOpen: false,
    }
);

port.on('error', err => { console.log('SerialPort ERROR: ' + err); });

port.open(err => {
    if (err) {
        console.log('failed to open COM3' + err);
    } else {
        console.log('open');
        var sendGetFingureCmdTimer;

        port.on('data', function (data) {
            let dataBuffer = new Buffer(data, 'hex');

            console.log('data received: =========' + dataBuffer.toString('hex'));

            cmdReceiveBuffer = Buffer.concat([cmdReceiveBuffer, dataBuffer]);

            if (cmdReceiveBuffer.length == 9) {
                //提取包长度信息, packageLength = buffer[8,9]
                packageLength = (cmdReceiveBuffer[7] << 8) + cmdReceiveBuffer[8];
                console.log('packageLength: ' + packageLength);
            } else if (cmdReceiveBuffer.length == 9 + packageLength) {
                //结束一轮消息接受，清空buffer，解析命令
                console.log('cmd end.cmd is: ' + cmdReceiveBuffer.toString('hex'));
                let checkSum = cmdReceiveBuffer[8 + packageLength]
                let cfmCode = cmdReceiveBuffer[9];
                let params = [];
                for (kk = 0; kk < (packageLength - 3) / 2; kk++) {
                    params.push((cmdReceiveBuffer[10 + kk * 2] << 8) + cmdReceiveBuffer[11 + kk * 2]);
                }

                console.log('checkSum is:' + checkSum);
                console.log('cfmCode  is:' + cfmCode);
                console.log('params are:' + params.toString());

                let tempSum = 0;
                for (kk = 6; kk < cmdReceiveBuffer.length - 2; kk++) {
                    tempSum += cmdReceiveBuffer[kk];
                }
                if (tempSum == checkSum) {
                    //校验正确，解析指令，清空
                    if (cfmCode == 2) {
                        //没有指纹
                        console.log('no fingure');
                    } else if (cfmCode == 0) {
                        //正确采集
                        console.warn('Get Fingure Success!');
                        //停止循环，关闭端口
                        clearInterval(sendGetFingureCmdTimer);
                        port.close();
                    }
                }
                //清空指令buffer
                cmdReceiveBuffer = new Buffer('');
            }
        });

        var cmdSendBuffer = new Buffer('EF01FFFFFFFF0100041F030027', 'hex');
        console.log('send cmd.');
        port.write(cmdSendBuffer);
        // sendGetFingureCmdTimer = setInterval(() => {
        //     console.log('send cmd');
        //     port.write(cmdSendBuffer);
        // }, 500);
    }
});