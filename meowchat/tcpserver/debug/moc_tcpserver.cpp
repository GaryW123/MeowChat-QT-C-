/****************************************************************************
** Meta object code from reading C++ file 'tcpserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../tcpserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TcpServer_t {
    QByteArrayData data[7];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpServer_t qt_meta_stringdata_TcpServer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TcpServer"
QT_MOC_LITERAL(1, 10, 16), // "signalUserStatus"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "text"
QT_MOC_LITERAL(4, 33, 16), // "SltNewConnection"
QT_MOC_LITERAL(5, 50, 12), // "SltConnected"
QT_MOC_LITERAL(6, 63, 15) // "SltDisConnected"

    },
    "TcpServer\0signalUserStatus\0\0text\0"
    "SltNewConnection\0SltConnected\0"
    "SltDisConnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x09 /* Protected */,
       5,    0,   38,    2, 0x09 /* Protected */,
       6,    0,   39,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TcpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TcpServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalUserStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->SltNewConnection(); break;
        case 2: _t->SltConnected(); break;
        case 3: _t->SltDisConnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TcpServer::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpServer::signalUserStatus)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TcpServer::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TcpServer.data,
    qt_meta_data_TcpServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TcpServer::signalUserStatus(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TcpMsgServer_t {
    QByteArrayData data[12];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpMsgServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpMsgServer_t qt_meta_stringdata_TcpMsgServer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TcpMsgServer"
QT_MOC_LITERAL(1, 13, 18), // "signalDownloadFile"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "json"
QT_MOC_LITERAL(4, 38, 20), // "SltTransFileToClient"
QT_MOC_LITERAL(5, 59, 6), // "userId"
QT_MOC_LITERAL(6, 66, 16), // "SltNewConnection"
QT_MOC_LITERAL(7, 83, 12), // "SltConnected"
QT_MOC_LITERAL(8, 96, 15), // "SltDisConnected"
QT_MOC_LITERAL(9, 112, 14), // "SltMsgToClient"
QT_MOC_LITERAL(10, 127, 4), // "type"
QT_MOC_LITERAL(11, 132, 2) // "id"

    },
    "TcpMsgServer\0signalDownloadFile\0\0json\0"
    "SltTransFileToClient\0userId\0"
    "SltNewConnection\0SltConnected\0"
    "SltDisConnected\0SltMsgToClient\0type\0"
    "id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpMsgServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   47,    2, 0x0a /* Public */,
       6,    0,   52,    2, 0x08 /* Private */,
       7,    0,   53,    2, 0x08 /* Private */,
       8,    0,   54,    2, 0x08 /* Private */,
       9,    3,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonValue,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QJsonValue,    5,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::Int, QMetaType::QJsonValue,   10,   11,    3,

       0        // eod
};

void TcpMsgServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TcpMsgServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalDownloadFile((*reinterpret_cast< const QJsonValue(*)>(_a[1]))); break;
        case 1: _t->SltTransFileToClient((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2]))); break;
        case 2: _t->SltNewConnection(); break;
        case 3: _t->SltConnected(); break;
        case 4: _t->SltDisConnected(); break;
        case 5: _t->SltMsgToClient((*reinterpret_cast< const quint8(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const QJsonValue(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TcpMsgServer::*)(const QJsonValue & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpMsgServer::signalDownloadFile)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TcpMsgServer::staticMetaObject = { {
    &TcpServer::staticMetaObject,
    qt_meta_stringdata_TcpMsgServer.data,
    qt_meta_data_TcpMsgServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TcpMsgServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpMsgServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpMsgServer.stringdata0))
        return static_cast<void*>(this);
    return TcpServer::qt_metacast(_clname);
}

int TcpMsgServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TcpMsgServer::signalDownloadFile(const QJsonValue & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TcpFileServer_t {
    QByteArrayData data[9];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpFileServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpFileServer_t qt_meta_stringdata_TcpFileServer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TcpFileServer"
QT_MOC_LITERAL(1, 14, 18), // "signalRecvFinished"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 2), // "id"
QT_MOC_LITERAL(4, 37, 4), // "json"
QT_MOC_LITERAL(5, 42, 16), // "SltNewConnection"
QT_MOC_LITERAL(6, 59, 12), // "SltConnected"
QT_MOC_LITERAL(7, 72, 15), // "SltDisConnected"
QT_MOC_LITERAL(8, 88, 21) // "SltClientDownloadFile"

    },
    "TcpFileServer\0signalRecvFinished\0\0id\0"
    "json\0SltNewConnection\0SltConnected\0"
    "SltDisConnected\0SltClientDownloadFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpFileServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   44,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    1,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QJsonValue,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonValue,    4,

       0        // eod
};

void TcpFileServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TcpFileServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalRecvFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2]))); break;
        case 1: _t->SltNewConnection(); break;
        case 2: _t->SltConnected(); break;
        case 3: _t->SltDisConnected(); break;
        case 4: _t->SltClientDownloadFile((*reinterpret_cast< const QJsonValue(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TcpFileServer::*)(int , const QJsonValue & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpFileServer::signalRecvFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TcpFileServer::staticMetaObject = { {
    &TcpServer::staticMetaObject,
    qt_meta_stringdata_TcpFileServer.data,
    qt_meta_data_TcpFileServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TcpFileServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpFileServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpFileServer.stringdata0))
        return static_cast<void*>(this);
    return TcpServer::qt_metacast(_clname);
}

int TcpFileServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void TcpFileServer::signalRecvFinished(int _t1, const QJsonValue & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
