/****************************************************************************
** Meta object code from reading C++ file 'camerasettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rf-ssl/gui/camerasettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camerasettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CameraSettings_t {
    QByteArrayData data[6];
    char stringdata[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraSettings_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraSettings_t qt_meta_stringdata_CameraSettings = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CameraSettings"
QT_MOC_LITERAL(1, 15, 14), // "slider1changed"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "val"
QT_MOC_LITERAL(4, 35, 14), // "slider2changed"
QT_MOC_LITERAL(5, 50, 14) // "slider3changed"

    },
    "CameraSettings\0slider1changed\0\0val\0"
    "slider2changed\0slider3changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       5,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void CameraSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraSettings *_t = static_cast<CameraSettings *>(_o);
        switch (_id) {
        case 0: _t->slider1changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slider2changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slider3changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CameraSettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CameraSettings.data,
      qt_meta_data_CameraSettings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CameraSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CameraSettings.stringdata))
        return static_cast<void*>(const_cast< CameraSettings*>(this));
    return QWidget::qt_metacast(_clname);
}

int CameraSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
