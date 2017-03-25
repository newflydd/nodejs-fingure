import QtQuick 2.7
import QtQuick.Controls 2.0

ApplicationWindow {
    id:root
    visible: true
    width: 800
    height: 600
    title: qsTr("赛洋面板指纹模块辅助工具")

    property int intPower: 1

    Row {
        spacing: 0
        width: 800
        height: parent.height

        //左部列表 @TODO: 记录日志： ListView的MVC模型
        Rectangle {
            width: 300; height: parent.height; color: "#4A5459"
            ListView {
                anchors.fill: parent
                model: FingerListModel{id:fingerListModel}
                delegate: Rectangle{
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
                            text: power + ""
                            width:50
                            font.pixelSize: 15
                        }
                        Text{color: "white";anchors.verticalCenter: parent.verticalCenter;font.family: "微软雅黑";
                            text: fid + ""
                            width:20
                            horizontalAlignment: Text.AlignRight
                            font.pixelSize: 15
                        }
                    }
                    //@TODO: 记录日志，鼠标进入，hover，右击菜单
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
                        onClicked: {
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
                            onTriggered: {
                                fingerListModel.removeFid(fid)
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
                placeholderText: "姓名"
                width: 220
                selectByMouse: true
            }

            //权限按钮
            Row {
                id:powerButtons
                spacing: 5
                PowerButton{id:pButton1; powStr: "1"}
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
                    text: "录入指纹"
                    width: 95
                    onClicked: console.log(intPower);
                }
                Rectangle{
                    width: 30
                    height: 30
                    color: "white"
                    radius: 15
                    border.color: "#66A334"; border.width: 2
                }

                Rectangle{
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
            }

            Row {
                spacing: 5
                Button{
                    text: "备份指纹库"
                    width: 220
                }

                Button{
                    text: "还原指纹库"
                    width: 220
                }
            }

            TextArea {
                width: parent.width - 55
                height:parent.height - 230
                background: Rectangle{
                    color: "#2E2F30"
                }
                readOnly: true
                color: "#38FF28"
                text: "提示消息..."
                selectByMouse: true
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

    //@TODO: 记录日志： 使用children访问子元素，使用for i in list的方式遍历
    function changeAllPowerButtonColor(){
        var list = powerButtons.children;
        for (var i in list){
            list[i].color = "#4A5459";
        }
    }
}
