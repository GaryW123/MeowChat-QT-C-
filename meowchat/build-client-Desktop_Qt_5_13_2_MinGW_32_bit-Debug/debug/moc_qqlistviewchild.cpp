/****************************************************************************
** Meta object code from reading C++ file 'qqlistviewchild.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../client/uimodel/qqlistviewchild.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqlistviewchild.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQListViewChild_t {
    QByteArrayData data[9];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQListViewChild_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQListViewChild_t qt_meta_stringdata_QQListViewChild = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQListViewChild"
QT_MOC_LITERAL(1, 16, 18), // "onChildDidSelected"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "QQListViewChild*"
QT_MOC_LITERAL(4, 53, 5), // "child"
QT_MOC_LITERAL(5, 59, 23), // "onChildDidDoubleClicked"
QT_MOC_LITERAL(6, 83, 7), // "QQCell*"
QT_MOC_LITERAL(7, 91, 4), // "cell"
QT_MOC_LITERAL(8, 96, 18) // "signalRightClicked"

    },
    "QQListViewChild\0onChildDidSelected\0\0"
    "QQListViewChild*\0child\0onChildDidDoubleClicked\0"
    "QQCell*\0cell\0signalRightClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQListViewChild[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,
       8,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void QQListViewChild::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQListViewChild *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onChildDidSelected((*reinterpret_cast< QQListViewChild*(*)>(_a[1]))); break;
        case 1: _t->onChildDidDoubleClicked((*reinterpret_cast< QQCell*(*)>(_a[1]))); break;
        case 2: _t->signalRightClicked((*reinterpret_cast< QQCell*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQListViewChild* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQListViewChild::*)(QQListViewChild * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQListViewChild::onChildDidSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQListViewChild::*)(QQCell * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQListViewChild::onChildDidDoubleClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QQListViewChild::*)(QQCell * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQListViewChild::signalRightClicked)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QQListViewChild::staticMetaObject = { {
    &QQPopMenuWidget::staticMetaObject,
    qt_meta_stringdata_QQListViewChild.data,
    qt_meta_data_QQListViewChild,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQListViewChild::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQListViewChild::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQListViewChild.stringdata0))
        return static_cast<void*>(this);
    return QQPopMenuWidget::qt_metacast(_clname);
}

int QQListViewChild::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQPopMenuWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QQListViewChild::onChildDidSelected(QQListViewChild * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQListViewChild::onChildDidDoubleClicked(QQCell * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQListViewChild::signalRightClicked(QQCell * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
