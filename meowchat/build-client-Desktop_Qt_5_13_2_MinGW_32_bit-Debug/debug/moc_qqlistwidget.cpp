/****************************************************************************
** Meta object code from reading C++ file 'qqlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../client/uimodel/qqlistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQListWidget_t {
    QByteArrayData data[20];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQListWidget_t qt_meta_stringdata_QQListWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QQListWidget"
QT_MOC_LITERAL(1, 13, 20), // "on_popmenu_will_show"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "QQListWidget*"
QT_MOC_LITERAL(4, 49, 10), // "listWidget"
QT_MOC_LITERAL(5, 60, 16), // "QQPopMenuWidget*"
QT_MOC_LITERAL(6, 77, 6), // "widget"
QT_MOC_LITERAL(7, 84, 6), // "QMenu*"
QT_MOC_LITERAL(8, 91, 4), // "menu"
QT_MOC_LITERAL(9, 96, 23), // "onChildDidDoubleClicked"
QT_MOC_LITERAL(10, 120, 7), // "QQCell*"
QT_MOC_LITERAL(11, 128, 5), // "child"
QT_MOC_LITERAL(12, 134, 21), // "onGroupOpenDidChanged"
QT_MOC_LITERAL(13, 156, 16), // "QQListViewGroup*"
QT_MOC_LITERAL(14, 173, 5), // "group"
QT_MOC_LITERAL(15, 179, 18), // "onChildDidSelected"
QT_MOC_LITERAL(16, 198, 16), // "QQListViewChild*"
QT_MOC_LITERAL(17, 215, 18), // "on_popmenuWillShow"
QT_MOC_LITERAL(18, 234, 18), // "SltCellRightCicked"
QT_MOC_LITERAL(19, 253, 4) // "cell"

    },
    "QQListWidget\0on_popmenu_will_show\0\0"
    "QQListWidget*\0listWidget\0QQPopMenuWidget*\0"
    "widget\0QMenu*\0menu\0onChildDidDoubleClicked\0"
    "QQCell*\0child\0onGroupOpenDidChanged\0"
    "QQListViewGroup*\0group\0onChildDidSelected\0"
    "QQListViewChild*\0on_popmenuWillShow\0"
    "SltCellRightCicked\0cell"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQListWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       9,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   54,    2, 0x0a /* Public */,
      15,    1,   57,    2, 0x0a /* Public */,
      17,    2,   60,    2, 0x0a /* Public */,
      18,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   11,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 10,   19,

       0        // eod
};

void QQListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QQListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_popmenu_will_show((*reinterpret_cast< QQListWidget*(*)>(_a[1])),(*reinterpret_cast< QQPopMenuWidget*(*)>(_a[2])),(*reinterpret_cast< QMenu*(*)>(_a[3]))); break;
        case 1: _t->onChildDidDoubleClicked((*reinterpret_cast< QQCell*(*)>(_a[1]))); break;
        case 2: _t->onGroupOpenDidChanged((*reinterpret_cast< QQListViewGroup*(*)>(_a[1]))); break;
        case 3: _t->onChildDidSelected((*reinterpret_cast< QQListViewChild*(*)>(_a[1]))); break;
        case 4: _t->on_popmenuWillShow((*reinterpret_cast< QQPopMenuWidget*(*)>(_a[1])),(*reinterpret_cast< QMenu*(*)>(_a[2]))); break;
        case 5: _t->SltCellRightCicked((*reinterpret_cast< QQCell*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMenu* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQListWidget* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQPopMenuWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQListViewGroup* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQListViewChild* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMenu* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQPopMenuWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QQListWidget::*)(QQListWidget * , QQPopMenuWidget * , QMenu * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQListWidget::on_popmenu_will_show)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QQListWidget::*)(QQCell * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQListWidget::onChildDidDoubleClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QQListWidget::staticMetaObject = { {
    &QListWidget::staticMetaObject,
    qt_meta_stringdata_QQListWidget.data,
    qt_meta_data_QQListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QQListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQListWidget.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int QQListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
void QQListWidget::on_popmenu_will_show(QQListWidget * _t1, QQPopMenuWidget * _t2, QMenu * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQListWidget::onChildDidDoubleClicked(QQCell * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
