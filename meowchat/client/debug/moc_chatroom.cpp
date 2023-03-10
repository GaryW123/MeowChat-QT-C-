/****************************************************************************
** Meta object code from reading C++ file 'chatroom.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../uimodel/chatroom.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatroom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatWindow_t {
    QByteArrayData data[23];
    char stringdata0[335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatWindow_t qt_meta_stringdata_ChatWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ChatWindow"
QT_MOC_LITERAL(1, 11, 11), // "signalClose"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 17), // "signalSendMessage"
QT_MOC_LITERAL(4, 42, 4), // "type"
QT_MOC_LITERAL(5, 47, 4), // "json"
QT_MOC_LITERAL(6, 52, 14), // "SltChatMessage"
QT_MOC_LITERAL(7, 67, 4), // "text"
QT_MOC_LITERAL(8, 72, 21), // "on_btnSendMsg_clicked"
QT_MOC_LITERAL(9, 94, 14), // "SltCloseWindow"
QT_MOC_LITERAL(10, 109, 23), // "on_toolButton_7_clicked"
QT_MOC_LITERAL(11, 133, 19), // "SltFileRecvFinished"
QT_MOC_LITERAL(12, 153, 8), // "filePath"
QT_MOC_LITERAL(13, 162, 17), // "SltUpdateProgress"
QT_MOC_LITERAL(14, 180, 5), // "bytes"
QT_MOC_LITERAL(15, 186, 5), // "total"
QT_MOC_LITERAL(16, 192, 23), // "on_toolButton_6_clicked"
QT_MOC_LITERAL(17, 216, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(18, 238, 22), // "on_btnSendFile_clicked"
QT_MOC_LITERAL(19, 261, 16), // "SltDownloadFiles"
QT_MOC_LITERAL(20, 278, 8), // "fileName"
QT_MOC_LITERAL(21, 287, 23), // "on_toolButton_4_clicked"
QT_MOC_LITERAL(22, 311, 23) // "on_toolButton_3_clicked"

    },
    "ChatWindow\0signalClose\0\0signalSendMessage\0"
    "type\0json\0SltChatMessage\0text\0"
    "on_btnSendMsg_clicked\0SltCloseWindow\0"
    "on_toolButton_7_clicked\0SltFileRecvFinished\0"
    "filePath\0SltUpdateProgress\0bytes\0total\0"
    "on_toolButton_6_clicked\0on_toolButton_clicked\0"
    "on_btnSendFile_clicked\0SltDownloadFiles\0"
    "fileName\0on_toolButton_4_clicked\0"
    "on_toolButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    2,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   90,    2, 0x08 /* Private */,
       8,    0,   93,    2, 0x08 /* Private */,
       9,    0,   94,    2, 0x08 /* Private */,
      10,    0,   95,    2, 0x08 /* Private */,
      11,    2,   96,    2, 0x08 /* Private */,
      13,    2,  101,    2, 0x08 /* Private */,
      16,    0,  106,    2, 0x08 /* Private */,
      17,    0,  107,    2, 0x08 /* Private */,
      18,    0,  108,    2, 0x08 /* Private */,
      19,    1,  109,    2, 0x08 /* Private */,
      21,    0,  112,    2, 0x08 /* Private */,
      22,    0,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::QJsonValue,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::QString,    4,   12,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChatWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalClose(); break;
        case 1: _t->signalSendMessage((*reinterpret_cast< const quint8(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2]))); break;
        case 2: _t->SltChatMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_btnSendMsg_clicked(); break;
        case 4: _t->SltCloseWindow(); break;
        case 5: _t->on_toolButton_7_clicked(); break;
        case 6: _t->SltFileRecvFinished((*reinterpret_cast< const quint8(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->SltUpdateProgress((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 8: _t->on_toolButton_6_clicked(); break;
        case 9: _t->on_toolButton_clicked(); break;
        case 10: _t->on_btnSendFile_clicked(); break;
        case 11: _t->SltDownloadFiles((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_toolButton_4_clicked(); break;
        case 13: _t->on_toolButton_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatWindow::signalClose)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatWindow::*)(const quint8 & , const QJsonValue & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatWindow::signalSendMessage)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChatWindow::staticMetaObject = { {
    &CustomMoveWidget::staticMetaObject,
    qt_meta_stringdata_ChatWindow.data,
    qt_meta_data_ChatWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChatWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatWindow.stringdata0))
        return static_cast<void*>(this);
    return CustomMoveWidget::qt_metacast(_clname);
}

int ChatWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomMoveWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ChatWindow::signalClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ChatWindow::signalSendMessage(const quint8 & _t1, const QJsonValue & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
