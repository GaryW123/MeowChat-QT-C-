/****************************************************************************
** Meta object code from reading C++ file 'qqlistviewgroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../uimodel/qqlistviewgroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqlistviewgroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQListViewGroup_t {
    QByteArrayData data[5];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQListViewGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQListViewGroup_t qt_meta_stringdata_QQListViewGroup = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQListViewGroup"
QT_MOC_LITERAL(1, 16, 27), // "onGroupOpenStatusDidChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 16), // "QQListViewGroup*"
QT_MOC_LITERAL(4, 62, 5) // "group"

    },
    "QQListViewGroup\0onGroupOpenStatusDidChanged\0"
    "\0QQListViewGroup*\0group"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQListViewGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QQListViewGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQListViewGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onGroupOpenStatusDidChanged((*reinterpret_cast< QQListViewGroup*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQListViewGroup* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQListViewGroup::*)(QQListViewGroup * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQListViewGroup::onGroupOpenStatusDidChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QQListViewGroup::staticMetaObject = { {
    &QQPopMenuWidget::staticMetaObject,
    qt_meta_stringdata_QQListViewGroup.data,
    qt_meta_data_QQListViewGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQListViewGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQListViewGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQListViewGroup.stringdata0))
        return static_cast<void*>(this);
    return QQPopMenuWidget::qt_metacast(_clname);
}

int QQListViewGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQPopMenuWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QQListViewGroup::onGroupOpenStatusDidChanged(QQListViewGroup * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
