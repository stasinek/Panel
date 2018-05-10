/****************************************************************************
** Meta object code from reading C++ file 'main_form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../main_form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TMain_form_t {
    QByteArrayData data[19];
    char stringdata0[431];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TMain_form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TMain_form_t qt_meta_stringdata_TMain_form = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TMain_form"
QT_MOC_LITERAL(1, 11, 31), // "on_TMain_form_windowIconChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4), // "icon"
QT_MOC_LITERAL(4, 49, 27), // "on_SpeedButtonDesk1_clicked"
QT_MOC_LITERAL(5, 77, 7), // "checked"
QT_MOC_LITERAL(6, 85, 27), // "on_SpeedButtonDesk2_clicked"
QT_MOC_LITERAL(7, 113, 27), // "on_SpeedButtonDesk3_clicked"
QT_MOC_LITERAL(8, 141, 27), // "on_SpeedButtonDesk4_clicked"
QT_MOC_LITERAL(9, 169, 27), // "on_SpeedButtonDesk5_clicked"
QT_MOC_LITERAL(10, 197, 30), // "on_SpeedButtonDeskGrid_clicked"
QT_MOC_LITERAL(11, 228, 26), // "on_SpeedButtonLupa_clicked"
QT_MOC_LITERAL(12, 255, 26), // "on_SpeedButtonZeus_clicked"
QT_MOC_LITERAL(13, 282, 26), // "on_SpeedButtonMenu_clicked"
QT_MOC_LITERAL(14, 309, 30), // "on_SpeedButtonMinimize_clicked"
QT_MOC_LITERAL(15, 340, 27), // "on_SpeedButtonClose_clicked"
QT_MOC_LITERAL(16, 368, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(17, 392, 32), // "on_TMain_form_windowTitleChanged"
QT_MOC_LITERAL(18, 425, 5) // "title"

    },
    "TMain_form\0on_TMain_form_windowIconChanged\0"
    "\0icon\0on_SpeedButtonDesk1_clicked\0"
    "checked\0on_SpeedButtonDesk2_clicked\0"
    "on_SpeedButtonDesk3_clicked\0"
    "on_SpeedButtonDesk4_clicked\0"
    "on_SpeedButtonDesk5_clicked\0"
    "on_SpeedButtonDeskGrid_clicked\0"
    "on_SpeedButtonLupa_clicked\0"
    "on_SpeedButtonZeus_clicked\0"
    "on_SpeedButtonMenu_clicked\0"
    "on_SpeedButtonMinimize_clicked\0"
    "on_SpeedButtonClose_clicked\0"
    "on_actionExit_triggered\0"
    "on_TMain_form_windowTitleChanged\0title"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TMain_form[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x08 /* Private */,
       4,    1,   87,    2, 0x08 /* Private */,
       6,    1,   90,    2, 0x08 /* Private */,
       7,    1,   93,    2, 0x08 /* Private */,
       8,    1,   96,    2, 0x08 /* Private */,
       9,    1,   99,    2, 0x08 /* Private */,
      10,    1,  102,    2, 0x08 /* Private */,
      11,    1,  105,    2, 0x08 /* Private */,
      12,    1,  108,    2, 0x08 /* Private */,
      13,    1,  111,    2, 0x08 /* Private */,
      14,    1,  114,    2, 0x08 /* Private */,
      15,    0,  117,    2, 0x08 /* Private */,
      16,    0,  118,    2, 0x08 /* Private */,
      17,    1,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QIcon,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void TMain_form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TMain_form *_t = static_cast<TMain_form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_TMain_form_windowIconChanged((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 1: _t->on_SpeedButtonDesk1_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_SpeedButtonDesk2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_SpeedButtonDesk3_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_SpeedButtonDesk4_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_SpeedButtonDesk5_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_SpeedButtonDeskGrid_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_SpeedButtonLupa_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_SpeedButtonZeus_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_SpeedButtonMenu_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_SpeedButtonMinimize_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_SpeedButtonClose_clicked(); break;
        case 12: _t->on_actionExit_triggered(); break;
        case 13: _t->on_TMain_form_windowTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject TMain_form::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TMain_form.data,
      qt_meta_data_TMain_form,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TMain_form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TMain_form::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TMain_form.stringdata0))
        return static_cast<void*>(const_cast< TMain_form*>(this));
    return QDialog::qt_metacast(_clname);
}

int TMain_form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
