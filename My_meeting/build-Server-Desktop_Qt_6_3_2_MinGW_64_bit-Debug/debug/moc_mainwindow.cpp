<<<<<<< HEAD
<<<<<<<< HEAD:My_meeting/build-Server-Desktop_Qt_6_3_2_MinGW_64_bit-Debug/debug/moc_mainwindow.cpp
/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Server/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[14];
    char stringdata5[15];
    char stringdata6[12];
    char stringdata7[9];
    char stringdata8[5];
    char stringdata9[10];
    char stringdata10[6];
    char stringdata11[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 15),  // "showPicturetoUI"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 5),  // "array"
        QT_MOC_LITERAL(34, 13),  // "showAudiotoUI"
        QT_MOC_LITERAL(48, 14),  // "Listening_port"
        QT_MOC_LITERAL(63, 11),  // "showPicture"
        QT_MOC_LITERAL(75, 8),  // "showText"
        QT_MOC_LITERAL(84, 4),  // "text"
        QT_MOC_LITERAL(89, 9),  // "showVideo"
        QT_MOC_LITERAL(99, 5),  // "video"
        QT_MOC_LITERAL(105, 5)   // "audio"
    },
    "MainWindow",
    "showPicturetoUI",
    "",
    "array",
    "showAudiotoUI",
    "Listening_port",
    "showPicture",
    "showText",
    "text",
    "showVideo",
    "video",
    "audio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x08,    1 /* Private */,
       4,    1,   53,    2, 0x08,    3 /* Private */,
       5,    0,   56,    2, 0x08,    5 /* Private */,
       6,    1,   57,    2, 0x08,    6 /* Private */,
       7,    1,   60,    2, 0x08,    8 /* Private */,
       9,    2,   63,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,   10,   11,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showPicturetoUI((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->showAudiotoUI((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 2: _t->Listening_port(); break;
        case 3: _t->showPicture((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 4: _t->showText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->showVideo((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
========
=======
>>>>>>> 47b8f66 (update)
/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
<<<<<<< HEAD
#include "../../../sieve_pool/mainwindow.h"
=======
#include "../../Server/mainwindow.h"
#include <QtGui/qtextcursor.h>
>>>>>>> 47b8f66 (update)
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
<<<<<<< HEAD
    uint offsetsAndSizes[14];
    char stringdata0[11];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[28];
    char stringdata5[25];
    char stringdata6[27];
=======
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[14];
    char stringdata5[15];
    char stringdata6[12];
    char stringdata7[9];
    char stringdata8[5];
    char stringdata9[10];
    char stringdata10[6];
    char stringdata11[6];
>>>>>>> 47b8f66 (update)
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
<<<<<<< HEAD
        QT_MOC_LITERAL(11, 26),  // "on_actThread_Run_triggered"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 21),  // "on_actClear_triggered"
        QT_MOC_LITERAL(61, 27),  // "on_actThread_Quit_triggered"
        QT_MOC_LITERAL(89, 24),  // "on_actDice_Run_triggered"
        QT_MOC_LITERAL(114, 26)   // "on_actDice_Pause_triggered"
    },
    "MainWindow",
    "on_actThread_Run_triggered",
    "",
    "on_actClear_triggered",
    "on_actThread_Quit_triggered",
    "on_actDice_Run_triggered",
    "on_actDice_Pause_triggered"
=======
        QT_MOC_LITERAL(11, 15),  // "showPicturetoUI"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 5),  // "array"
        QT_MOC_LITERAL(34, 13),  // "showAudiotoUI"
        QT_MOC_LITERAL(48, 14),  // "Listening_port"
        QT_MOC_LITERAL(63, 11),  // "showPicture"
        QT_MOC_LITERAL(75, 8),  // "showText"
        QT_MOC_LITERAL(84, 4),  // "text"
        QT_MOC_LITERAL(89, 9),  // "showVideo"
        QT_MOC_LITERAL(99, 5),  // "video"
        QT_MOC_LITERAL(105, 5)   // "audio"
    },
    "MainWindow",
    "showPicturetoUI",
    "",
    "array",
    "showAudiotoUI",
    "Listening_port",
    "showPicture",
    "showText",
    "text",
    "showVideo",
    "video",
    "audio"
>>>>>>> 47b8f66 (update)
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
<<<<<<< HEAD
       5,   14, // methods
=======
       6,   14, // methods
>>>>>>> 47b8f66 (update)
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
<<<<<<< HEAD
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
=======
       1,    1,   50,    2, 0x08,    1 /* Private */,
       4,    1,   53,    2, 0x08,    3 /* Private */,
       5,    0,   56,    2, 0x08,    5 /* Private */,
       6,    1,   57,    2, 0x08,    6 /* Private */,
       7,    1,   60,    2, 0x08,    8 /* Private */,
       9,    2,   63,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,   10,   11,
>>>>>>> 47b8f66 (update)

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
<<<<<<< HEAD
        case 0: _t->on_actThread_Run_triggered(); break;
        case 1: _t->on_actClear_triggered(); break;
        case 2: _t->on_actThread_Quit_triggered(); break;
        case 3: _t->on_actDice_Run_triggered(); break;
        case 4: _t->on_actDice_Pause_triggered(); break;
        default: ;
        }
    }
    (void)_a;
=======
        case 0: _t->showPicturetoUI((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->showAudiotoUI((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 2: _t->Listening_port(); break;
        case 3: _t->showPicture((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 4: _t->showText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->showVideo((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        default: ;
        }
    }
>>>>>>> 47b8f66 (update)
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
<<<<<<< HEAD
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
=======
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>
>>>>>>> 47b8f66 (update)


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
<<<<<<< HEAD
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
=======
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
>>>>>>> 47b8f66 (update)
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
<<<<<<< HEAD
>>>>>>>> 47b8f66 (update):build-sieve_pool-Desktop_Qt_6_3_2_MinGW_64_bit-Debug/sieve_pool_autogen/EWIEGA46WW/moc_mainwindow.cpp
=======
>>>>>>> 47b8f66 (update)