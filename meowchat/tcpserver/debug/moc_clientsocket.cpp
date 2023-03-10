/****************************************************************************
** Meta object code from reading C++ file 'clientsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../clientsocket.h"
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
    QByteArrayData data[14];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientSocket_t qt_meta_stringdata_ClientSocket = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ClientSocket"
QT_MOC_LITERAL(1, 13, 15), // "signalConnected"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "signalDisConnected"
QT_MOC_LITERAL(4, 49, 18), // "signalDownloadFile"
QT_MOC_LITERAL(5, 68, 4), // "json"
QT_MOC_LITERAL(6, 73, 17), // "signalMsgToClient"
QT_MOC_LITERAL(7, 91, 4), // "type"
QT_MOC_LITERAL(8, 96, 2), // "id"
QT_MOC_LITERAL(9, 99, 7), // "dataVal"
QT_MOC_LITERAL(10, 107, 14), // "SltSendMessage"
QT_MOC_LITERAL(11, 122, 12), // "SltConnected"
QT_MOC_LITERAL(12, 135, 15), // "SltDisconnected"
QT_MOC_LITERAL(13, 151, 12) // "SltReadyRead"

    },
    "ClientSocket\0signalConnected\0\0"
    "signalDisConnected\0signalDownloadFile\0"
    "json\0signalMsgToClient\0type\0id\0dataVal\0"
    "SltSendMessage\0SltConnected\0SltDisconnected\0"
    "SltReadyRead"
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
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,
       6,    3,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   66,    2, 0x0a /* Public */,
      11,    0,   71,    2, 0x08 /* Private */,
      12,    0,   72,    2, 0x08 /* Private */,
      13,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonValue,    5,
    QMetaType::Void, QMetaType::UChar, QMetaType::Int, QMetaType::QJsonValue,    7,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::QJsonValue,    7,    5,
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
        case 0: _t->signalConnected(); break;
        case 1: _t->signalDisConnected(); break;
        case 2: _t->signalDownloadFile((*reinterpret_cast< const QJsonValue(*)>(_a[1]))); break;
        case 3: _t->signalMsgToClient((*reinterpret_cast< const quint8(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const QJsonValue(*)>(_a[3]))); break;
        case 4: _t->SltSendMessage((*reinterpret_cast< const quint8(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2]))); break;
        case 5: _t->SltConnected(); break;
        case 6: _t->SltDisconnected(); break;
        case 7: _t->SltReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientSocket::signalConnected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientSocket::signalDisConnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientSocket::*)(const QJsonValue & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientSocket::signalDownloadFile)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientSocket::*)(const quint8 & , const int & , const QJsonValue & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientSocket::signalMsgToClient)) {
                *result = 3;
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
void ClientSocket::signalConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ClientSocket::signalDisConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ClientSocket::signalDownloadFile(const QJsonValue & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ClientSocket::signalMsgToClient(const quint8 & _t1, const int & _t2, const QJsonValue & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_ClientFileSocket_t {
    QByteArrayData data[12];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientFileSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientFileSocket_t qt_meta_stringdata_ClientFileSocket = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ClientFileSocket"
QT_MOC_LITERAL(1, 17, 15), // "signalConnected"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 18), // "signalDisConnected"
QT_MOC_LITERAL(4, 53, 18), // "signalRecvFinished"
QT_MOC_LITERAL(5, 72, 2), // "id"
QT_MOC_LITERAL(6, 75, 4), // "json"
QT_MOC_LITERAL(7, 80, 12), // "displayError"
QT_MOC_LITERAL(8, 93, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(9, 122, 12), // "SltReadyRead"
QT_MOC_LITERAL(10, 135, 23), // "SltUpdateClientProgress"
QT_MOC_LITERAL(11, 159, 8) // "numBytes"

    },
    "ClientFileSocket\0signalConnected\0\0"
    "signalDisConnected\0signalRecvFinished\0"
    "id\0json\0displayError\0QAbstractSocket::SocketError\0"
    "SltReadyRead\0SltUpdateClientProgress\0"
    "numBytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientFileSocket[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    2,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   51,    2, 0x08 /* Private */,
       9,    0,   54,    2, 0x08 /* Private */,
      10,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QJsonValue,    5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   11,

       0        // eod
};

void ClientFileSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientFileSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalConnected(); break;
        case 1: _t->signalDisConnected(); break;
        case 2: _t->signalRecvFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2]))); break;
        case 3: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->SltReadyRead(); break;
        case 5: _t->SltUpdateClientProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientFileSocket::signalConnected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientFileSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientFileSocket::signalDisConnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientFileSocket::*)(int , const QJsonValue & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientFileSocket::signalRecvFinished)) {
                *result = 2;
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
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ClientFileSocket::signalConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ClientFileSocket::signalDisConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ClientFileSocket::signalRecvFinished(int _t1, const QJsonValue & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
