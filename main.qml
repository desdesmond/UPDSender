import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

ApplicationWindow {
    id: root
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Button{
        id: button
        width: 200
        height: 50
        text: "Press to Send UPD message"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

        MouseArea{
            id: mouseclick
            anchors.fill: parent
//            onClicked: console.log("clicked!")
            onClicked: sendMessage.SayHello();
        }

    }



}
