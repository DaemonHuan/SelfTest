import QtQuick 2.0
import QtQuick.Window 2.15

Window {
    width: 800
    height: 600
    visible: true

    color: "grey"

    Text {
        text: qsTr("Hello World ..")
    }

    Rectangle {
        id: one
        width: 200
        height: 200
        x: 100
        y: 100
        color: "red"
        border.color: "black"
        border.width: 5
        radius: 10
    }

//    title: qsTr("Hello World")
}
