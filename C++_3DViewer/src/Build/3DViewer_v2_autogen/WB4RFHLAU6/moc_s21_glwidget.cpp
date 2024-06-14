/****************************************************************************
** Meta object code from reading C++ file 's21_glwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../View/s21_glwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 's21_glwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_s21__GLWidget_t {
    const uint offsetsAndSize[32];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_s21__GLWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_s21__GLWidget_t qt_meta_stringdata_s21__GLWidget = {
    {
QT_MOC_LITERAL(0, 13), // "s21::GLWidget"
QT_MOC_LITERAL(14, 15), // "SetVerticesSize"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 5), // "value"
QT_MOC_LITERAL(37, 15), // "SetVerticesType"
QT_MOC_LITERAL(53, 12), // "SetEdgesType"
QT_MOC_LITERAL(66, 12), // "SetLineWidth"
QT_MOC_LITERAL(79, 17), // "SetProjectionType"
QT_MOC_LITERAL(97, 4), // "type"
QT_MOC_LITERAL(102, 12), // "SetPositionX"
QT_MOC_LITERAL(115, 12), // "SetPositionY"
QT_MOC_LITERAL(128, 12), // "SetPositionZ"
QT_MOC_LITERAL(141, 9), // "RotationX"
QT_MOC_LITERAL(151, 9), // "RotationY"
QT_MOC_LITERAL(161, 9), // "RotationZ"
QT_MOC_LITERAL(171, 8) // "SetScale"

    },
    "s21::GLWidget\0SetVerticesSize\0\0value\0"
    "SetVerticesType\0SetEdgesType\0SetLineWidth\0"
    "SetProjectionType\0type\0SetPositionX\0"
    "SetPositionY\0SetPositionZ\0RotationX\0"
    "RotationY\0RotationZ\0SetScale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_s21__GLWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x0a,    1 /* Public */,
       4,    1,   89,    2, 0x0a,    3 /* Public */,
       5,    1,   92,    2, 0x0a,    5 /* Public */,
       6,    1,   95,    2, 0x0a,    7 /* Public */,
       7,    1,   98,    2, 0x0a,    9 /* Public */,
       9,    1,  101,    2, 0x0a,   11 /* Public */,
      10,    1,  104,    2, 0x0a,   13 /* Public */,
      11,    1,  107,    2, 0x0a,   15 /* Public */,
      12,    1,  110,    2, 0x0a,   17 /* Public */,
      13,    1,  113,    2, 0x0a,   19 /* Public */,
      14,    1,  116,    2, 0x0a,   21 /* Public */,
      15,    1,  119,    2, 0x0a,   23 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void s21::GLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GLWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SetVerticesSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->SetVerticesType((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->SetEdgesType((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->SetLineWidth((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->SetProjectionType((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->SetPositionX((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->SetPositionY((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->SetPositionZ((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->RotationX((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->RotationY((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->RotationZ((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->SetScale((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject s21::GLWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_s21__GLWidget.offsetsAndSize,
    qt_meta_data_s21__GLWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_s21__GLWidget_t
, QtPrivate::TypeAndForceComplete<GLWidget, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *s21::GLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *s21::GLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_s21__GLWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int s21::GLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
