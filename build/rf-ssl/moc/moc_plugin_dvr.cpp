/****************************************************************************
** Meta object code from reading C++ file 'plugin_dvr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rf-ssl/plugins/plugin_dvr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugin_dvr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PluginDVRWidget_t {
    QByteArrayData data[1];
    char stringdata[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PluginDVRWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PluginDVRWidget_t qt_meta_stringdata_PluginDVRWidget = {
    {
QT_MOC_LITERAL(0, 0, 15)
    },
    "PluginDVRWidget\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PluginDVRWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PluginDVRWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PluginDVRWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PluginDVRWidget.data,
      qt_meta_data_PluginDVRWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *PluginDVRWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PluginDVRWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PluginDVRWidget.stringdata))
        return static_cast<void*>(const_cast< PluginDVRWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PluginDVRWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_PluginDVR_t {
    QByteArrayData data[14];
    char stringdata[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PluginDVR_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PluginDVR_t qt_meta_stringdata_PluginDVR = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 15),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 16),
QT_MOC_LITERAL(4, 44, 19),
QT_MOC_LITERAL(5, 64, 18),
QT_MOC_LITERAL(6, 83, 20),
QT_MOC_LITERAL(7, 104, 17),
QT_MOC_LITERAL(8, 122, 17),
QT_MOC_LITERAL(9, 140, 12),
QT_MOC_LITERAL(10, 153, 13),
QT_MOC_LITERAL(11, 167, 13),
QT_MOC_LITERAL(12, 181, 15),
QT_MOC_LITERAL(13, 197, 3)
    },
    "PluginDVR\0slotModeToggled\0\0slotPauseRefresh\0"
    "slotSeekModeToggled\0slotSeekFrameFirst\0"
    "slotSeekFrameForward\0slotSeekFrameBack\0"
    "slotSeekFrameLast\0slotMovieNew\0"
    "slotMovieLoad\0slotMovieSave\0jogValueChanged\0"
    "val\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PluginDVR[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x09,
       3,    0,   70,    2, 0x09,
       4,    0,   71,    2, 0x09,
       5,    0,   72,    2, 0x09,
       6,    0,   73,    2, 0x09,
       7,    0,   74,    2, 0x09,
       8,    0,   75,    2, 0x09,
       9,    0,   76,    2, 0x09,
      10,    0,   77,    2, 0x09,
      11,    0,   78,    2, 0x09,
      12,    1,   79,    2, 0x09,

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
    QMetaType::Void, QMetaType::Float,   13,

       0        // eod
};

void PluginDVR::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PluginDVR *_t = static_cast<PluginDVR *>(_o);
        switch (_id) {
        case 0: _t->slotModeToggled(); break;
        case 1: _t->slotPauseRefresh(); break;
        case 2: _t->slotSeekModeToggled(); break;
        case 3: _t->slotSeekFrameFirst(); break;
        case 4: _t->slotSeekFrameForward(); break;
        case 5: _t->slotSeekFrameBack(); break;
        case 6: _t->slotSeekFrameLast(); break;
        case 7: _t->slotMovieNew(); break;
        case 8: _t->slotMovieLoad(); break;
        case 9: _t->slotMovieSave(); break;
        case 10: _t->jogValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PluginDVR::staticMetaObject = {
    { &VisionPlugin::staticMetaObject, qt_meta_stringdata_PluginDVR.data,
      qt_meta_data_PluginDVR,  qt_static_metacall, 0, 0}
};


const QMetaObject *PluginDVR::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PluginDVR::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PluginDVR.stringdata))
        return static_cast<void*>(const_cast< PluginDVR*>(this));
    return VisionPlugin::qt_metacast(_clname);
}

int PluginDVR::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VisionPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
