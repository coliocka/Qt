<<<<<<< HEAD
QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    QMyChat.cpp \
    main.cpp \
    lgoin.cpp \
    my_dialog.cpp \
    my_findpasswd.cpp \
    my_register.cpp

HEADERS += \
    QMyChat.h \
    lgoin.h \
    my_dialog.h \
    my_findpasswd.h \
    my_register.h

FORMS += \
    QMyChat.ui \
    lgoin.ui \
    my_dialog.ui \
    my_findpasswd.ui \
    my_register.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc

DISTFILES += \
    C:/Users/George/Pictures/Saved Pictures/01e9d25debe9e7a801213853a781cd.gif \
    C:/Users/George/Pictures/Saved Pictures/1 (2).jpg \
    C:/Users/George/Pictures/Saved Pictures/check.png \
    C:/Users/George/Pictures/Saved Pictures/close(1).png \
    C:/Users/George/Pictures/Saved Pictures/drop-down-hover.png \
    C:/Users/George/Pictures/Saved Pictures/drop-down-on-hover.png \
    C:/Users/George/Pictures/Saved Pictures/drop-down-on.png \
    C:/Users/George/Pictures/Saved Pictures/drop-down.png \
    C:/Users/George/Pictures/Saved Pictures/min(1).png \
    C:/Users/George/Pictures/Saved Pictures/passwd-focus.png \
    C:/Users/George/Pictures/Saved Pictures/passwd.png \
    C:/Users/George/Pictures/Saved Pictures/qrcode-hover.png \
    C:/Users/George/Pictures/Saved Pictures/qrcode.png \
    C:/Users/George/Pictures/Saved Pictures/username-focus.png \
    C:/Users/George/Pictures/Saved Pictures/username.png
=======
QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    QMyChat.cpp \
    main.cpp \
    lgoin.cpp \
    my_dialog.cpp \
    my_findpasswd.cpp \
    my_register.cpp

HEADERS += \
    QMyChat.h \
    lgoin.h \
    my_dialog.h \
    my_findpasswd.h \
    my_register.h

FORMS += \
    QMyChat.ui \
    lgoin.ui \
    my_dialog.ui \
    my_findpasswd.ui \
    my_register.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc

DISTFILES += \
    C:/Users/George/Pictures/Saved Pictures/01e9d25debe9e7a801213853a781cd.gif \
    C:/Users/George/Pictures/Saved Pictures/1 (2).jpg \
    C:/Users/George/Pictures/Saved Pictures/check.png \
    C:/Users/George/Pictures/Saved Pictures/close(1).png \
    C:/Users/George/Pictures/Saved Pictures/drop-down-hover.png \
    C:/Users/George/Pictures/Saved Pictures/drop-down-on-hover.png \
    C:/Users/George/Pictures/Saved Pictures/drop-down-on.png \
    C:/Users/George/Pictures/Saved Pictures/drop-down.png \
    C:/Users/George/Pictures/Saved Pictures/min(1).png \
    C:/Users/George/Pictures/Saved Pictures/passwd-focus.png \
    C:/Users/George/Pictures/Saved Pictures/passwd.png \
    C:/Users/George/Pictures/Saved Pictures/qrcode-hover.png \
    C:/Users/George/Pictures/Saved Pictures/qrcode.png \
    C:/Users/George/Pictures/Saved Pictures/username-focus.png \
    C:/Users/George/Pictures/Saved Pictures/username.png
>>>>>>> cdd08f869638039635144f291da04c841be7fc1c
