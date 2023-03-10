/****************************************************************************
** Meta object code from reading C++ file 'bubblechating.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../uimodel/bubblechating.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bubblechating.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BubbleList_t {
    QByteArrayData data[10];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BubbleList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BubbleList_t qt_meta_stringdata_BubbleList = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BubbleList"
QT_MOC_LITERAL(1, 11, 19), // "sig_setCurrentIndex"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "currIndex"
QT_MOC_LITERAL(4, 42, 15), // "sig_itemClicked"
QT_MOC_LITERAL(5, 58, 3), // "str"
QT_MOC_LITERAL(6, 62, 18), // "signalDownloadFile"
QT_MOC_LITERAL(7, 81, 8), // "fileName"
QT_MOC_LITERAL(8, 90, 10), // "setMaximum"
QT_MOC_LITERAL(9, 101, 3) // "max"

    },
    "BubbleList\0sig_setCurrentIndex\0\0"
    "currIndex\0sig_itemClicked\0str\0"
    "signalDownloadFile\0fileName\0setMaximum\0"
    "max"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BubbleList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void BubbleList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BubbleList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sig_itemClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->signalDownloadFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setMaximum((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BubbleList::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BubbleList::sig_setCurrentIndex)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BubbleList::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BubbleList::sig_itemClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BubbleList::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BubbleList::signalDownloadFile)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BubbleList::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_BubbleList.data,
    qt_meta_data_BubbleList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BubbleList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BubbleList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BubbleList.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BubbleList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void BubbleList::sig_setCurrentIndex(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BubbleList::sig_itemClicked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BubbleList::signalDownloadFile(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_BubbleListPrivate_t {
    QByteArrayData data[15];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BubbleListPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BubbleListPrivate_t qt_meta_stringdata_BubbleListPrivate = {
    {
QT_MOC_LITERAL(0, 0, 17), // "BubbleListPrivate"
QT_MOC_LITERAL(1, 18, 14), // "sig_setMaximum"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "max"
QT_MOC_LITERAL(4, 38, 19), // "sig_setCurrentIndex"
QT_MOC_LITERAL(5, 58, 9), // "currIndex"
QT_MOC_LITERAL(6, 68, 15), // "sig_itemClicked"
QT_MOC_LITERAL(7, 84, 3), // "str"
QT_MOC_LITERAL(8, 88, 18), // "signalDownloadFile"
QT_MOC_LITERAL(9, 107, 8), // "fileName"
QT_MOC_LITERAL(10, 116, 15), // "setCurrentIndex"
QT_MOC_LITERAL(11, 132, 8), // "curIndex"
QT_MOC_LITERAL(12, 141, 18), // "SltFileMenuClicked"
QT_MOC_LITERAL(13, 160, 8), // "QAction*"
QT_MOC_LITERAL(14, 169, 6) // "action"

    },
    "BubbleListPrivate\0sig_setMaximum\0\0max\0"
    "sig_setCurrentIndex\0currIndex\0"
    "sig_itemClicked\0str\0signalDownloadFile\0"
    "fileName\0setCurrentIndex\0curIndex\0"
    "SltFileMenuClicked\0QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BubbleListPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       8,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   56,    2, 0x0a /* Public */,
      12,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void BubbleListPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BubbleListPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_setMaximum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sig_setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sig_itemClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->signalDownloadFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->SltFileMenuClicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BubbleListPrivate::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BubbleListPrivate::sig_setMaximum)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BubbleListPrivate::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BubbleListPrivate::sig_setCurrentIndex)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BubbleListPrivate::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BubbleListPrivate::sig_itemClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BubbleListPrivate::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BubbleListPrivate::signalDownloadFile)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BubbleListPrivate::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_BubbleListPrivate.data,
    qt_meta_data_BubbleListPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BubbleListPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BubbleListPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BubbleListPrivate.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BubbleListPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void BubbleListPrivate::sig_setMaximum(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BubbleListPrivate::sig_setCurrentIndex(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BubbleListPrivate::sig_itemClicked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BubbleListPrivate::signalDownloadFile(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
