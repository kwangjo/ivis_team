import QtQuick 2.4
import QtQuick.Window 2.2

Window {
    visible: true
    MainForm {
        anchors.fill: parent
        mouseArea.onClicked: {
            Qt.quit();
        }

    }

    Column {
        id: column1
        x: -14
        y: -166
        width: 200
        height: 400
    }
}
