// 工具栏

import QtQuick 2.15
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3
import QtQuick.Window 2.3

ToolBar {
    // ToolBar 的 x，y
    property point point: Qt.point(x, y)
    property bool isSmallWindow: false

    background: Rectangle {
        color: "#00000000"
    }

    width: parent.width
    Layout.fillWidth: true
    RowLayout {
        anchors.fill: parent

        MusicToolButton {
            iconSource: "qrc:/images/music"
            toolTip: "关于"

            onClicked: {
                aboutPop.open()
            }
        }
        MusicToolButton {
            iconSource: "qrc:/images/about"
            toolTip: "crucal"

            onClicked: {
                Qt.openUrlExternally("https://gitee.com/crucal/Qt6_Qt5/tree/master/demo_music")
            }
        }
        MusicToolButton {
            id: smallWindow
            iconSource: "qrc:/images/small-window"
            toolTip: "小窗播放"
            visible: !isSmallWindow

            onClicked: {
                isSmallWindow = true
                setWindowSize(330, 650)
                pageHomeView.visible = false
                pageDetailView.visible = true
                appBackground.showDefaultBackground = pageHomeView.visible
            }
        }
        MusicToolButton {
            id: normalWindow
            iconSource: "qrc:/images/exit-small-window"
            toolTip: "退出小窗播放"
            visible: isSmallWindow

            onClicked: {
                setWindowSize()
                isSmallWindow = false
                appBackground.showDefaultBackground = pageHomeView.visible
            }
        }
        Item {
            Layout.fillWidth: true
            height: parent.height
            Text {
                anchors.centerIn: parent
                text: qsTr("crucal")
                font.family: window.mFONT_FAMILY
                font.pointSize: 15
                color: "#ffffff"
            }

            MouseArea {
                anchors.fill: parent
                acceptedButtons: Qt.LeftButton
                cursorShape: Qt.PointingHandCursor
                onPressed: {
                    setPoint(mouseX, mouseY)
                }

                onMouseXChanged: {
                    moveX(mouseX)
                }

                onMouseYChanged: {
                    moveY(mouseY)
                }
            }
        }
        MusicToolButton {
            iconSource: "qrc:/images/minimize-screen"
            toolTip: "最小化"

            onClicked: {
                window.hide()
            }
        }
        MusicToolButton {
            id: maxWindow
            iconSource: "qrc:/images/full-screen"
            toolTip: "全屏"

            onClicked: {
                window.visibility = Window.Maximized
                maxWindow.visible = false
                resize.visible = true
            }
        }
        MusicToolButton {
            id: resize
            iconSource: "qrc:/images/small-screen"
            toolTip: "退出全屏"
            visible: false

            onClicked: {
                window.visibility = Window.AutomaticVisibility
                setWindowSize()
                maxWindow.visible = true
                resize.visible = false
            }
        }
        MusicToolButton {
            iconSource: "qrc:/images/power"
            toolTip: "退出"

            onClicked: {
                Qt.quit()
            }
        }
    }

    Popup {
        id: aboutPop

        parent: Overlay.overlay
        x: (parent.width - width) / 2
        y: (parent.height - height) / 2

        width: 250
        height: 230

        background: Rectangle {
            color: "#e9f4ff"
            radius: 5
            border.color: "#2273a7ab"
        }

        contentItem: ColumnLayout {
            width: parent.width
            height: parent.height
            Layout.alignment: Qt.AlignHCenter

            Image {
                Layout.preferredHeight: 60
                source: "qrc:/images/music"
                Layout.fillWidth: true
                fillMode: Image.PreserveAspectFit
            }

            Text {
                text: qsTr("CRUCAL")
                Layout.fillWidth: true
                horizontalAlignment: Text.AlignHCenter
                font.pixelSize: 18
                color: "#8573a7ab"
                font.family: window.mFONT_FAMILY
                font.bold: true
            }

            Text {
                text: qsTr("这是我的Cloud Music Player")
                Layout.fillWidth: true
                horizontalAlignment: Text.AlignHCenter
                font.pixelSize: 16
                color: "#8573a7ab"
                font.family: window.mFONT_FAMILY
                font.bold: true
            }

            Text {
                text: qsTr("https://gitee.com/")
                Layout.fillWidth: true
                horizontalAlignment: Text.AlignHCenter
                font.pixelSize: 16
                color: "#8573a7ab"
                font.family:  window.mFONT_FAMILY
                font.bold: true
            }
        }
    }

    function setWindowSize(width = window.mWINDOW_WIDTH, height = window.mWINDOW_HEIGHT) {
        window.width = width
        window.height = height
//                window.x = (Screen.desktopAvailableWidth - window.width) / 2
//                window.y = (Screen.desktopAvailableHeight - window.height) / 2
    }

    function setPoint(mouseX = 0, mouseY = 0) {
        point = Qt.point(mouseX, mouseY)
        console.log(mouseX, mouseY)
    }

    function moveX(mouseX = 0) {
        var x = window.x + mouseX - point.x
        if (x < -(window.width - 70)) {
            x = -(window.width - 70)
        }
        if (x > Screen.desktopAvailableWidth - 70) {
            x = Screen.desktopAvailableWidth - 70
        }
        window.x = x
    }

    function moveY(mouseY = 0) {
        var y = window.y + mouseY - point.y
        if (y <= 0) {
            y = 0
        }
        if (y > Screen.desktopAvailableHeight - 70) {
            y = Screen.desktopAvailableHeight - 70
        }
        window.y = y
    }
}
