/****************************************************************************
** Meta object code from reading C++ file 's21_mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../View/s21_mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 's21_mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_s21__MainWindow_t {
    const uint offsetsAndSize[32];
    char stringdata0[413];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_s21__MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_s21__MainWindow_t qt_meta_stringdata_s21__MainWindow = {
    {
QT_MOC_LITERAL(0, 15), // "s21::MainWindow"
QT_MOC_LITERAL(16, 31), // "x_rotation_qslider_ValueChanged"
QT_MOC_LITERAL(48, 0), // ""
QT_MOC_LITERAL(49, 5), // "value"
QT_MOC_LITERAL(55, 31), // "y_rotation_qslider_ValueChanged"
QT_MOC_LITERAL(87, 31), // "z_rotation_qslider_ValueChanged"
QT_MOC_LITERAL(119, 31), // "x_position_qslider_ValueChanged"
QT_MOC_LITERAL(151, 31), // "y_position_qslider_ValueChanged"
QT_MOC_LITERAL(183, 31), // "z_position_qslider_ValueChanged"
QT_MOC_LITERAL(215, 27), // "on_load_file_button_clicked"
QT_MOC_LITERAL(243, 28), // "on_screenshot_button_clicked"
QT_MOC_LITERAL(272, 28), // "on_record_gif_button_clicked"
QT_MOC_LITERAL(301, 34), // "on_background_color_button_cl..."
QT_MOC_LITERAL(336, 32), // "on_vertices_color_button_clicked"
QT_MOC_LITERAL(369, 29), // "on_edges_color_button_clicked"
QT_MOC_LITERAL(399, 13) // "ResetSettings"

    },
    "s21::MainWindow\0x_rotation_qslider_ValueChanged\0"
    "\0value\0y_rotation_qslider_ValueChanged\0"
    "z_rotation_qslider_ValueChanged\0"
    "x_position_qslider_ValueChanged\0"
    "y_position_qslider_ValueChanged\0"
    "z_position_qslider_ValueChanged\0"
    "on_load_file_button_clicked\0"
    "on_screenshot_button_clicked\0"
    "on_record_gif_button_clicked\0"
    "on_background_color_button_clicked\0"
    "on_vertices_color_button_clicked\0"
    "on_edges_color_button_clicked\0"
    "ResetSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_s21__MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x08,    1 /* Private */,
       4,    1,   95,    2, 0x08,    3 /* Private */,
       5,    1,   98,    2, 0x08,    5 /* Private */,
       6,    1,  101,    2, 0x08,    7 /* Private */,
       7,    1,  104,    2, 0x08,    9 /* Private */,
       8,    1,  107,    2, 0x08,   11 /* Private */,
       9,    0,  110,    2, 0x08,   13 /* Private */,
      10,    0,  111,    2, 0x08,   14 /* Private */,
      11,    0,  112,    2, 0x08,   15 /* Private */,
      12,    0,  113,    2, 0x08,   16 /* Private */,
      13,    0,  114,    2, 0x08,   17 /* Private */,
      14,    0,  115,    2, 0x08,   18 /* Private */,
      15,    0,  116,    2, 0x0a,   19 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void s21::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->x_rotation_qslider_ValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->y_rotation_qslider_ValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->z_rotation_qslider_ValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->x_position_qslider_ValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->y_position_qslider_ValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->z_position_qslider_ValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_load_file_button_clicked(); break;
        case 7: _t->on_screenshot_button_clicked(); break;
        case 8: _t->on_record_gif_button_clicked(); break;
        case 9: _t->on_background_color_button_clicked(); break;
        case 10: _t->on_vertices_color_button_clicked(); break;
        case 11: _t->on_edges_color_button_clicked(); break;
        case 12: _t->ResetSettings(); break;
        default: ;
        }
    }
}

const QMetaObject s21::MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_s21__MainWindow.offsetsAndSize,
    qt_meta_data_s21__MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_s21__MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *s21::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *s21::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_s21__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int s21::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
