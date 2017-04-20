import QtQuick 2.7
import QtQuick.Controls 2.0

import com.newflypig.Finger 1.0 //来自于C++类finger.h和finger.cpp

ApplicationWindow {
    id:root
    visible: true
    width: 800
    height: 600
    title: qsTr("赛洋面板指纹模块辅助工具")

    property int intPower: 1
    property bool connected: false

    Row {
        spacing: 0
        width: 800
        height: parent.height

        //左部列表 ListView的MVC模型
        Rectangle {
            width: 300; height: parent.height; color: "#4A5459"
            ListView {
                anchors.fill: parent
                model: FingerListModel{id:fingerListModel}  //MVC中的Model层，来自于FingerListModel.qml
                delegate: Rectangle{                        //Rectangle是MVC中的View层描述。其中的MouseArea以及Menu等描述，可理解为Control层
                    id: fingerListDelegate
                    width: parent.width; height: 60
                    color: "#4A5459"
                    Row{
                        leftPadding: 5
                        topPadding: 5
                        spacing: 20
                        Image {
                            width: 40
                            height: 40
                            source: "images/finger2.png"
                        }
                        Text{
                            width: 90
                            anchors.verticalCenter: parent.verticalCenter
                            text: name
                            color: "white"
                            font.pixelSize: 20
                            font.family: "微软雅黑"
                        }
                        Text{color: "white";anchors.verticalCenter: parent.verticalCenter;font.family: "微软雅黑";
                            text: power
                            width:50
                            font.pixelSize: 15
                        }
                        Text{color: "white";anchors.verticalCenter: parent.verticalCenter;font.family: "微软雅黑";
                            text: fid
                            width:20
                            horizontalAlignment: Text.AlignRight
                            font.pixelSize: 15
                        }
                    }
                    //鼠标进入，hover样式改变，右击菜单
                    MouseArea{
                        id:mouseMA;
                        acceptedButtons: Qt.RightButton
                        anchors.fill: parent
                        hoverEnabled: true
                        propagateComposedEvents: true
                        enabled:true
                        onEntered:{
                            fingerListDelegate.color = "#404244"
                        }
                        onExited:{
                            fingerListDelegate.color = "#4A5459"
                        }
                        onClicked: {    //右击菜单
                            contextMenu.x = mouseMA.mouseX;
                            contextMenu.y = mouseMA.mouseY;
                            contextMenu.fid = fid;
                            contextMenu.open();
                        }
                    }
                    Menu { id: contextMenu
                        width: 100
                        property string fid: "0"
                        MenuItem {
                            width: 100
                            text: "删除"
                            font.family: "微软雅黑"
                            font.pixelSize: 15
                            enabled: connected
                            onTriggered: {
                                if(!fingerModual.deleteFingerAddress(parseInt(fid))){
                                    taMessage.append("成功删除 " + fid + " 号位置指纹")
                                    fingerListModel.removeFid(fid)
                                }
                            }
                        }
                    }
                }
            }
        }

        Column {
            width: 500; height: 600;
            leftPadding: 40
            topPadding: 20
            spacing: 10

            TextField {
                id: tfName
                placeholderText: "姓名"
                width: 220
                selectByMouse: true
            }

            //权限按钮
            Row {
                id:powerButtons
                spacing: 5
                PowerButton{id:pButton1; powStr: "1"}   //PowerButton来自于PowerButton.qml是一个个小小的权限按钮，点击后变色，并且全局权限改变
                PowerButton{id:pButton2; powStr: "2"}
                PowerButton{id:pButton3; powStr: "3"}
                PowerButton{id:pButton4; powStr: "4"}
                PowerButton{id:pButton5; powStr: "5"}
                PowerButton{id:pButton6; powStr: "6"}
                PowerButton{id:pButton7; powStr: "7"}
                PowerButton{id:pButton8; powStr: "8"}
                PowerButton{id:pButton9; powStr: "9"}
            }

            //录入按钮
            Row{
                spacing: 30
                Button {
                    id: buttonInput
                    text: "录入指纹"
                    width: 95
                    enabled: connected
                    onClicked: fingerInput();
                }
                Rectangle{
                    id: input1Circle
                    width: 30
                    height: 30
                    color: "white"
                    radius: 15
                    border.color: "#66A334"; border.width: 2
                }

                Rectangle{
                    id: input2Circle
                    width: 30
                    height: 30
                    color: "white"
                    radius: 15
                    border.color: "#66A334"; border.width: 2
                }
            }

            Button{
                text: "验证测试"
                width: 220
                enabled: connected
                onClicked: {
                    taMessage.append("准备验证指纹")
                    taMessage.append("请将手指置于指纹采集器上，否则系统将于20秒后停止采集")

                    searchFingerTimer.start()
                }
                Timer{
                    id: searchFingerTimer
                    interval: 500;
                    running: false;
                    repeat: false;
                    onTriggered: {
                        searchFinger()
                    }
                }
            }

            Row {
                spacing: 5
                Button{
                    text: "备份指纹库"
                    width: 220
                    enabled: connected
                    onClicked: {
                        fingerModual.backupFingerAddress()
                        taMessage.append("成功备份 " + fingerModual.objFingerList.length + "个指纹数据到数据库")
                    }
                }

                Button{
                    text: "还原指纹库"
                    width: 220
                    enabled: connected
                    onClicked: {
                        fingerModual.restoreFingerAddress()
                        updateModel();
                        taMessage.append("成功还原 " + fingerModual.objFingerList.length +" 个指纹数据")
                    }
                }
            }

            Flickable {
                id: flickable
                width: parent.width - 55
                height:parent.height - 230

                TextArea.flickable: TextArea {
                    id: taMessage
                    wrapMode: TextArea.Wrap
                    background: Rectangle{
                        color: "#2E2F30"
                    }
                    readOnly: true
                    color: "#38FF28"
                    selectByMouse: true
                }
                ScrollBar.vertical: ScrollBar { }
            }
        }
    }

    Image {
        id: image
        x: 605
        y: 16
        width: 146
        height: 146
        source: "images/finger3.png"
    }

    //使用children访问子元素，使用for i in list的方式遍历
    function changeAllPowerButtonColor(){
        var list = powerButtons.children;
        for (var i in list){
            list[i].color = "#4A5459";
        }
    }

    //第二次录入指纹的定时器
    Timer{
        id:input2Timer
        interval: 1000
        running: false
        repeat: false
        onTriggered: {
            var result = fingerModual.input2(intPower, tfName.text);
            input2Circle.color = "white"
            if(result >= 0){
                taMessage.append("指纹录入成功，保存于指纹库 " + result + " 号位置")                
                fingerListModel.append({
                    fid: fingerModual.returnFid,
                    name: tfName.text===""?"无名":tfName.text,
                    power: (parseInt(result/100) + 1) + ""
                })
            }else if(result === -2){
                taMessage.append("两次采集的指纹特征差异太大，录入失败")
            }else{
                taMessage.append("采集失败，error code:" + result)
            }
        }
    }

    //第一次录入指纹的定时器。防止UI阻塞可用Timer
    Timer{
        id:input1Timer
        interval: 500
        running: false
        repeat: false
        onTriggered: {
            var result = fingerModual.input1();
            input1Circle.color = "white"
            if(result === 0){
                taMessage.append("第一次采集成功，准备采集第二次，请将手指放在采集器上")
                input2Circle.color = "#66A334"
                input2Timer.start()
            }else{
                taMessage.append("采集失败，error code:" + result)
            }
        }
    }

    //录入指纹
    function fingerInput(){
        taMessage.append("请将手指放在采集器上录入第一次指纹")
        input1Circle.color = "#66A334"
        input1Timer.start()
    }

    //搜索指纹
    function searchFinger(){
        var result = fingerModual.search();
        if(result === -1)
            taMessage.append("采集超时，请重试")
        else if(result === -2)
            taMessage.append("没有匹配到任何指纹，请重试")
        else
            taMessage.append("成功匹配到" + result + "号指纹，姓名：" + fingerModual.searchName)
    }

    Component.onCompleted: {
        var result
        taMessage.append("正在连接指纹模块...")
        if(fingerModual.connect()){
            taMessage.append("连接指纹模块「失败」，目前处于离线状态，相关操作无法使用，请检查连接。")
            connected = false;
        }else{
            taMessage.append("连接指纹模块「成功」")
            result = fingerModual.buildFingerList()
            if(result !== -1){
                taMessage.append("构造指纹库成功，从指纹模块读取 " + result + " 个指纹数据")
                updateModel();
                connected = true;
            } else {
                taMessage.append("构造指纹库失败")
            }
        }
    }

    function updateModel(){
        fingerListModel.clear();
        for(var i = 0; i < fingerModual.objFingerList.length; i++){
            fingerListModel.append({
                fid: fingerModual.objFingerList[i].fid,
                power: fingerModual.objFingerList[i].power,
                name: fingerModual.objFingerList[i].name===""?"无名":fingerModual.objFingerList[i].name
            });
        }
    }
}
