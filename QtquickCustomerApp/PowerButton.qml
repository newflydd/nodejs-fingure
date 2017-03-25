import QtQuick 2.0

Rectangle {
    property string powStr: "1"

    width:20; height:20;color: intPower === parseInt(powStr)? "#0771A3" : "#4A5459";
    MouseArea{anchors.fill: parent;cursorShape: Qt.PointingHandCursor
        onClicked: {
            changeAllPowerButtonColor();
            //@TODO: 记录笔记：QML中可以直接使用javascript语法，遵循ECMA规范，参考：http://doc.qt.io/qt-5/qml-qtqml-string.html#arg-method
            if(intPower !== parseInt(powStr)){
                parent.color = "#0771A3"
                intPower = parseInt(powStr);
            }
        }
    }
    Text{
        anchors.fill: parent
        text: powStr; color: "white"; font.pixelSize: 16;
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }   
}
