/****************************************************************************
** Meta object code from reading C++ file 'visionplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rf-ssl/plugins/visionplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visionplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VisionPlugin_t {
    QByteArrayData data[5];
    char stringdata[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VisionPlugin_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VisionPlugin_t qt_meta_stringdata_VisionPlugin = {
    {
QT_MOC_LITERAL(0, 0, 12), // "VisionPlugin"
QT_MOC_LITERAL(1, 13, 17), // "slotKeyPressEvent"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "QKeyEvent*"
QT_MOC_LITERAL(4, 43, 5) // "event"

    },
    "VisionPlugin\0slotKeyPressEvent\0\0"
    "QKeyEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisionPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void VisionPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VisionPlugin *_t = static_cast<VisionPlugin *>(_o);
        switch (_id) {
        case 0: _t->slotKeyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject VisionPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VisionPlugin.data,
      qt_meta_data_VisionPlugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VisionPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisionPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VisionPlugin.stringdata))
        return static_cast<void*>(const_cast< VisionPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int VisionPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
