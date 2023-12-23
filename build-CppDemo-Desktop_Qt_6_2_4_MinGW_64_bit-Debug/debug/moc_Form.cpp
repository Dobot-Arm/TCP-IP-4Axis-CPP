/****************************************************************************
** Meta object code from reading C++ file 'Form.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CppDemo/Form.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Form_t {
    const uint offsetsAndSize[44];
    char stringdata0[375];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Form_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Form_t qt_meta_stringdata_Form = {
    {
QT_MOC_LITERAL(0, 4), // "Form"
QT_MOC_LITERAL(5, 18), // "signalConnectState"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 14), // "signalPrintLog"
QT_MOC_LITERAL(40, 6), // "strLog"
QT_MOC_LITERAL(47, 16), // "signalSetBtnText"
QT_MOC_LITERAL(64, 12), // "QPushButton*"
QT_MOC_LITERAL(77, 4), // "pBtn"
QT_MOC_LITERAL(82, 6), // "strTxt"
QT_MOC_LITERAL(89, 23), // "slotTimeoutReadFeedback"
QT_MOC_LITERAL(113, 21), // "on_btnConnect_clicked"
QT_MOC_LITERAL(135, 20), // "on_btnEnable_clicked"
QT_MOC_LITERAL(156, 25), // "on_btnEnableAgain_clicked"
QT_MOC_LITERAL(182, 19), // "on_btnReset_clicked"
QT_MOC_LITERAL(202, 21), // "on_clearError_clicked"
QT_MOC_LITERAL(224, 26), // "on_btnConfirmSpeed_clicked"
QT_MOC_LITERAL(251, 23), // "on_btnConfirmDO_clicked"
QT_MOC_LITERAL(275, 18), // "on_btnMovJ_clicked"
QT_MOC_LITERAL(294, 18), // "on_btnMovL_clicked"
QT_MOC_LITERAL(313, 23), // "on_btnJointMovJ_clicked"
QT_MOC_LITERAL(337, 16), // "slotOnBtnMoveJog"
QT_MOC_LITERAL(354, 20) // "slotOnBtnStopMoveJog"

    },
    "Form\0signalConnectState\0\0signalPrintLog\0"
    "strLog\0signalSetBtnText\0QPushButton*\0"
    "pBtn\0strTxt\0slotTimeoutReadFeedback\0"
    "on_btnConnect_clicked\0on_btnEnable_clicked\0"
    "on_btnEnableAgain_clicked\0on_btnReset_clicked\0"
    "on_clearError_clicked\0on_btnConfirmSpeed_clicked\0"
    "on_btnConfirmDO_clicked\0on_btnMovJ_clicked\0"
    "on_btnMovL_clicked\0on_btnJointMovJ_clicked\0"
    "slotOnBtnMoveJog\0slotOnBtnStopMoveJog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Form[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x06,    1 /* Public */,
       3,    1,  113,    2, 0x06,    3 /* Public */,
       5,    2,  116,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,  121,    2, 0x08,    8 /* Private */,
      10,    0,  122,    2, 0x08,    9 /* Private */,
      11,    0,  123,    2, 0x08,   10 /* Private */,
      12,    0,  124,    2, 0x08,   11 /* Private */,
      13,    0,  125,    2, 0x08,   12 /* Private */,
      14,    0,  126,    2, 0x08,   13 /* Private */,
      15,    0,  127,    2, 0x08,   14 /* Private */,
      16,    0,  128,    2, 0x08,   15 /* Private */,
      17,    0,  129,    2, 0x08,   16 /* Private */,
      18,    0,  130,    2, 0x08,   17 /* Private */,
      19,    0,  131,    2, 0x08,   18 /* Private */,
      20,    0,  132,    2, 0x08,   19 /* Private */,
      21,    0,  133,    2, 0x08,   20 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Form *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalConnectState((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->signalPrintLog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->signalSetBtnText((*reinterpret_cast< std::add_pointer_t<QPushButton*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->slotTimeoutReadFeedback(); break;
        case 4: _t->on_btnConnect_clicked(); break;
        case 5: _t->on_btnEnable_clicked(); break;
        case 6: _t->on_btnEnableAgain_clicked(); break;
        case 7: _t->on_btnReset_clicked(); break;
        case 8: _t->on_clearError_clicked(); break;
        case 9: _t->on_btnConfirmSpeed_clicked(); break;
        case 10: _t->on_btnConfirmDO_clicked(); break;
        case 11: _t->on_btnMovJ_clicked(); break;
        case 12: _t->on_btnMovL_clicked(); break;
        case 13: _t->on_btnJointMovJ_clicked(); break;
        case 14: _t->slotOnBtnMoveJog(); break;
        case 15: _t->slotOnBtnStopMoveJog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QPushButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Form::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Form::signalConnectState)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Form::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Form::signalPrintLog)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Form::*)(QPushButton * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Form::signalSetBtnText)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Form::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Form.offsetsAndSize,
    qt_meta_data_Form,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Form_t
, QtPrivate::TypeAndForceComplete<Form, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPushButton *, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Form::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Form.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Form::signalConnectState(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Form::signalPrintLog(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Form::signalSetBtnText(QPushButton * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
