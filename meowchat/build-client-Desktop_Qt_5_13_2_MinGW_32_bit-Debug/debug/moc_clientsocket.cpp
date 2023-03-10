/****************************************************************************
** Meta object code from reading C++ file 'clientsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../client/clientsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientSocket_t {
    QByteArrayData data[13];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientSocket_t qt_meta_stringdata_ClientSocket = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ClientSocket"
QT_MOC_LITERAL(1, 13, 13), // "signalMessage"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "type"
QT_MOC_LITERAL(4, 33, 7), // "dataVal"
QT_MOC_LITERAL(5, 41, 12), // "signalStatus"
QT_MOC_LITERAL(6, 54, 5), // "state"
QT_MOC_LITERAL(7, 60, 14), // "SltSendMessage"
QT_MOC_LITERAL(8, 75, 13), // "SltSendOnline"
QT_MOC_LITERAL(9, 89, 14), // "SltSendOffline"
QT_MOC_LITERAL(10, 104, 15), // "SltDisconnected"
QT_MOC_LITERAL(11, 120, 12), // "SltConnected"
QT_MOC_LITERAL(12, 133, 12) // "SltReadyRead"

    },
    "ClientSocket\0signalMessage\0\0type\0"
    "dataVal\0signalStatus\0state\0SltSendMessage\0"
    "SltSendOnline\0SltSendOffline\0"
    "SltDisconnected\0SltConnected\0SltReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientSocket[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   62,    2, 0x0a /* Public */,
       8,    0,   67,    2, 0x0a /* Public */,
       9,    0,   68,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::QJsonValue,    3,    4,
    QMetaType::Void, QMetaType::UChar,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::QJsonValue,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ClientSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalMessage((*reinterpret_cast< const quint8(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2]))); break;
        case 1: _t->signalStatus((*reinterpret_cast< const quint8(*)>(_a[1]))); break;
        case 2: _t->SltSendMessage((*reinterpret_cast< const quint8(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2]))); break;
        case 3: _t->SltSendOnline(); break;
        case 4: _t->SltSendOffline(); break;
        case 5: _t->SltDisconnected(); break;
        case 6: _t->SltConnected(); break;
        case 7: _t->SltReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientSocket::*)(const quint8 & , const QJsonValue & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientSocket::signalMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientSocket::*)(const quint8 & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientSocket::signalStatus)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientSocket::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ClientSocket.data,
    qt_meta_data_ClientSocket,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientSocket.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ClientSocket::signalMessage(const quint8 & _t1, const QJsonValue & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientSocket::signalStatus(const quint8 & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_ClientFileSocket_t {
    QByteArrayData data[16];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientFileSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientFileSocket_t qt_meta_stringdata_ClientFileSocket = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ClientFileSocket"
QT_MOC_LITERAL(1, 17, 18), // "signalSendFinished"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "signamFileRecvOk"
QT_MOC_LITERAL(4, 54, 4), // "type"
QT_MOC_LITERAL(5, 59, 8), // "filePath"
QT_MOC_LITERAL(6, 68, 20), // "signalUpdateProgress"
QT_MOC_LITERAL(7, 89, 8), // "currSize"
QT_MOC_LITERAL(8, 98, 5), // "total"
QT_MOC_LITERAL(9, 104, 14), // "signalConnectd"
QT_MOC_LITERAL(10, 119, 12), // "displayError"
QT_MOC_LITERAL(11, 132, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(12, 161, 23), // "SltUpdateClientProgress"
QT_MOC_LITERAL(13, 185, 12), // "SltReadyRead"
QT_MOC_LITERAL(14, 198, 12), // "SltConnected"
QT_MOC_LITERAL(15, 211, 15) // "SltDisConnected"

    },
    "ClientFileSocket\0signalSendFinished\0"
    "\0signamFileRecvOk\0type\0filePath\0"
    "signalUpdateProgress\0currSize\0total\0"
    "signalConnectd\0displayError\0"
    "QAbstractSocket::SocketError\0"
    "SltUpdateClientProgress\0SltReadyRead\0"
    "SltConnected\0SltDisConnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientFileSocket[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    2,   60,    2, 0x06 /* Public */,
       6,    2,   65,    2, 0x06 /* Public */,
       9,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   71,    2, 0x08 /* Private */,
      12,    1,   74,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,
      14,    0,   78,    2, 0x08 /* Private */,
      15,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    7,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ClientFileSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientFileSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalSendFinished(); break;
        case 1: _t->signamFileRecvOk((*reinterpret_cast< const quint8(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->signalUpdateProgress((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 3: _t->signalConnectd(); break;
        case 4: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 5: _t->SltUpdateClientProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->SltReadyRead(); break;
        case 7: _t->SltConnected(); break;
        case 8: _t->SltDisConnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientFileSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientFileSocket::signalSendFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientFileSocket::*)(const quint8 & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientFileSocket::signamFileRecvOk)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientFileSocket::*)(quint64 , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientFileSocket::signalUpdateProgress)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientFileSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientFileSocket::signalConnectd)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientFileSocket::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ClientFileSocket.data,
    qt_meta_data_ClientFileSocket,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientFileSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientFileSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientFileSocket.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClientFileSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ClientFileSocket::signalSendFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ClientFileSocket::signamFileRecvOk(const quint8 & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientFileSocket::signalUpdateProgress(quint64 _t1, quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClientFileSocket::signalConnectd()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
