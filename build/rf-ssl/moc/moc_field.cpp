/****************************************************************************
** Meta object code from reading C++ file 'field.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rf-common/util/field.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'field.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RoboCupField_t {
    QByteArrayData data[5];
    char stringdata[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoboCupField_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoboCupField_t qt_meta_stringdata_RoboCupField = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RoboCupField"
QT_MOC_LITERAL(1, 13, 18), // "calibrationChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "changed"
QT_MOC_LITERAL(4, 41, 14) // "restoreRoboCup"

    },
    "RoboCupField\0calibrationChanged\0\0"
    "changed\0restoreRoboCup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoboCupField[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x09 /* Protected */,
       4,    0,   31,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RoboCupField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RoboCupField *_t = static_cast<RoboCupField *>(_o);
        switch (_id) {
        case 0: _t->calibrationChanged(); break;
        case 1: _t->changed(); break;
        case 2: _t->restoreRoboCup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RoboCupField::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RoboCupField::calibrationChanged)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RoboCupField::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RoboCupField.data,
      qt_meta_data_RoboCupField,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RoboCupField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoboCupField::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RoboCupField.stringdata))
        return static_cast<void*>(const_cast< RoboCupField*>(this));
    return QObject::qt_metacast(_clname);
}

int RoboCupField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void RoboCupField::calibrationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_RoboCupCalibrationHalfField_t {
    QByteArrayData data[4];
    char stringdata[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoboCupCalibrationHalfField_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoboCupCalibrationHalfField_t qt_meta_stringdata_RoboCupCalibrationHalfField = {
    {
QT_MOC_LITERAL(0, 0, 27), // "RoboCupCalibrationHalfField"
QT_MOC_LITERAL(1, 28, 24), // "globalCalibrationChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 17) // "autoUpdateChanged"

    },
    "RoboCupCalibrationHalfField\0"
    "globalCalibrationChanged\0\0autoUpdateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoboCupCalibrationHalfField[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RoboCupCalibrationHalfField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RoboCupCalibrationHalfField *_t = static_cast<RoboCupCalibrationHalfField *>(_o);
        switch (_id) {
        case 0: _t->globalCalibrationChanged(); break;
        case 1: _t->autoUpdateChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RoboCupCalibrationHalfField::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RoboCupCalibrationHalfField.data,
      qt_meta_data_RoboCupCalibrationHalfField,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RoboCupCalibrationHalfField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoboCupCalibrationHalfField::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RoboCupCalibrationHalfField.stringdata))
        return static_cast<void*>(const_cast< RoboCupCalibrationHalfField*>(this));
    return QObject::qt_metacast(_clname);
}

int RoboCupCalibrationHalfField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
