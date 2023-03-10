/****************************************************************************
** Meta object code from reading C++ file 'clientmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../client/clientmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_clientmain_t {
    QByteArrayData data[18];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_clientmain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_clientmain_t qt_meta_stringdata_clientmain = {
    {
QT_MOC_LITERAL(0, 0, 10), // "clientmain"
QT_MOC_LITERAL(1, 11, 17), // "SltFriendsClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "QQCell*"
QT_MOC_LITERAL(4, 38, 4), // "cell"
QT_MOC_LITERAL(5, 43, 20), // "on_btnFriend_clicked"
QT_MOC_LITERAL(6, 64, 19), // "on_btnGroup_clicked"
QT_MOC_LITERAL(7, 84, 23), // "on_toolButton_3_clicked"
QT_MOC_LITERAL(8, 108, 23), // "on_toolButton_4_clicked"
QT_MOC_LITERAL(9, 132, 24), // "on_btn_addFriend_clicked"
QT_MOC_LITERAL(10, 157, 21), // "on_btnRefresh_clicked"
QT_MOC_LITERAL(11, 179, 17), // "analysisTcpSocket"
QT_MOC_LITERAL(12, 197, 4), // "type"
QT_MOC_LITERAL(13, 202, 7), // "dataVal"
QT_MOC_LITERAL(14, 210, 26), // "on_on_pushButton_2_clicked"
QT_MOC_LITERAL(15, 237, 25), // "onChildPopMenuDidSelected"
QT_MOC_LITERAL(16, 263, 8), // "QAction*"
QT_MOC_LITERAL(17, 272, 6) // "action"

    },
    "clientmain\0SltFriendsClicked\0\0QQCell*\0"
    "cell\0on_btnFriend_clicked\0on_btnGroup_clicked\0"
    "on_toolButton_3_clicked\0on_toolButton_4_clicked\0"
    "on_btn_addFriend_clicked\0on_btnRefresh_clicked\0"
    "analysisTcpSocket\0type\0dataVal\0"
    "on_on_pushButton_2_clicked\0"
    "onChildPopMenuDidSelected\0QAction*\0"
    "action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_clientmain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    2,   73,    2, 0x08 /* Private */,
      14,    0,   78,    2, 0x08 /* Private */,
      15,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::QJsonValue,   12,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void clientmain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<clientmain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SltFriendsClicked((*reinterpret_cast< QQCell*(*)>(_a[1]))); break;
        case 1: _t->on_btnFriend_clicked(); break;
        case 2: _t->on_btnGroup_clicked(); break;
        case 3: _t->on_toolButton_3_clicked(); break;
        case 4: _t->on_toolButton_4_clicked(); break;
        case 5: _t->on_btn_addFriend_clicked(); break;
        case 6: _t->on_btnRefresh_clicked(); break;
        case 7: _t->analysisTcpSocket((*reinterpret_cast< const quint8(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2]))); break;
        case 8: _t->on_on_pushButton_2_clicked(); break;
        case 9: _t->onChildPopMenuDidSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject clientmain::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_clientmain.data,
    qt_meta_data_clientmain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *clientmain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *clientmain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_clientmain.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int clientmain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
