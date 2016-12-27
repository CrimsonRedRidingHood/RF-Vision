/****************************************************************************
** Meta object code from reading C++ file 'camerasettingswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rf-ssl/gui/camerasettingswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camerasettingswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CameraSettingsWidget_t {
    QByteArrayData data[11];
    char stringdata[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraSettingsWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraSettingsWidget_t qt_meta_stringdata_CameraSettingsWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "CameraSettingsWidget"
QT_MOC_LITERAL(1, 21, 31), // "image_brightness_slider_changed"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 3), // "val"
QT_MOC_LITERAL(4, 58, 29), // "image_contrast_slider_changed"
QT_MOC_LITERAL(5, 88, 24), // "image_hue_slider_changed"
QT_MOC_LITERAL(6, 113, 31), // "image_saturation_slider_changed"
QT_MOC_LITERAL(7, 145, 25), // "image_gain_slider_changed"
QT_MOC_LITERAL(8, 171, 29), // "image_exposure_slider_changed"
QT_MOC_LITERAL(9, 201, 13), // "save_settings"
QT_MOC_LITERAL(10, 215, 13) // "load_settings"

    },
    "CameraSettingsWidget\0"
    "image_brightness_slider_changed\0\0val\0"
    "image_contrast_slider_changed\0"
    "image_hue_slider_changed\0"
    "image_saturation_slider_changed\0"
    "image_gain_slider_changed\0"
    "image_exposure_slider_changed\0"
    "save_settings\0load_settings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraSettingsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       5,    1,   60,    2, 0x0a /* Public */,
       6,    1,   63,    2, 0x0a /* Public */,
       7,    1,   66,    2, 0x0a /* Public */,
       8,    1,   69,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CameraSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraSettingsWidget *_t = static_cast<CameraSettingsWidget *>(_o);
        switch (_id) {
        case 0: _t->image_brightness_slider_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->image_contrast_slider_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->image_hue_slider_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->image_saturation_slider_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->image_gain_slider_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->image_exposure_slider_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->save_settings(); break;
        case 7: _t->load_settings(); break;
        default: ;
        }
    }
}

const QMetaObject CameraSettingsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CameraSettingsWidget.data,
      qt_meta_data_CameraSettingsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CameraSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CameraSettingsWidget.stringdata))
        return static_cast<void*>(const_cast< CameraSettingsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CameraSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
