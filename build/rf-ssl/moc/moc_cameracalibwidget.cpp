/****************************************************************************
** Meta object code from reading C++ file 'cameracalibwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rf-ssl/gui/cameracalibwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cameracalibwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CameraCalibrationWidget_t {
    QByteArrayData data[10];
    char stringdata[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraCalibrationWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraCalibrationWidget_t qt_meta_stringdata_CameraCalibrationWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "CameraCalibrationWidget"
QT_MOC_LITERAL(1, 24, 18), // "is_clicked_initial"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 15), // "is_clicked_full"
QT_MOC_LITERAL(4, 60, 16), // "is_clicked_reset"
QT_MOC_LITERAL(5, 77, 16), // "edges_is_clicked"
QT_MOC_LITERAL(6, 94, 27), // "cameraheight_slider_changed"
QT_MOC_LITERAL(7, 122, 3), // "val"
QT_MOC_LITERAL(8, 126, 25), // "distortion_slider_changed"
QT_MOC_LITERAL(9, 152, 26) // "line_search_slider_changed"

    },
    "CameraCalibrationWidget\0is_clicked_initial\0"
    "\0is_clicked_full\0is_clicked_reset\0"
    "edges_is_clicked\0cameraheight_slider_changed\0"
    "val\0distortion_slider_changed\0"
    "line_search_slider_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraCalibrationWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       8,    1,   56,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void CameraCalibrationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraCalibrationWidget *_t = static_cast<CameraCalibrationWidget *>(_o);
        switch (_id) {
        case 0: _t->is_clicked_initial(); break;
        case 1: _t->is_clicked_full(); break;
        case 2: _t->is_clicked_reset(); break;
        case 3: _t->edges_is_clicked(); break;
        case 4: _t->cameraheight_slider_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->distortion_slider_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->line_search_slider_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CameraCalibrationWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CameraCalibrationWidget.data,
      qt_meta_data_CameraCalibrationWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CameraCalibrationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraCalibrationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CameraCalibrationWidget.stringdata))
        return static_cast<void*>(const_cast< CameraCalibrationWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CameraCalibrationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
