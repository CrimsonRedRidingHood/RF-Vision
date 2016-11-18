/****************************************************************************
** Meta object code from reading C++ file 'VarType.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rf-common/vartypes/primitives/VarType.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VarType.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VarTypes__VarType_t {
    QByteArrayData data[8];
    char stringdata[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VarTypes__VarType_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VarTypes__VarType_t qt_meta_stringdata_VarTypes__VarType = {
    {
QT_MOC_LITERAL(0, 0, 17), // "VarTypes::VarType"
QT_MOC_LITERAL(1, 18, 10), // "hasChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "VarType*"
QT_MOC_LITERAL(4, 39, 9), // "wasEdited"
QT_MOC_LITERAL(5, 49, 10), // "XMLwasRead"
QT_MOC_LITERAL(6, 60, 13), // "XMLwasWritten"
QT_MOC_LITERAL(7, 74, 16) // "mvcEditCompleted"

    },
    "VarTypes::VarType\0hasChanged\0\0VarType*\0"
    "wasEdited\0XMLwasRead\0XMLwasWritten\0"
    "mvcEditCompleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VarTypes__VarType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       5,    1,   45,    2, 0x06 /* Public */,
       6,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void VarTypes::VarType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VarType *_t = static_cast<VarType *>(_o);
        switch (_id) {
        case 0: _t->hasChanged((*reinterpret_cast< VarType*(*)>(_a[1]))); break;
        case 1: _t->wasEdited((*reinterpret_cast< VarType*(*)>(_a[1]))); break;
        case 2: _t->XMLwasRead((*reinterpret_cast< VarType*(*)>(_a[1]))); break;
        case 3: _t->XMLwasWritten((*reinterpret_cast< VarType*(*)>(_a[1]))); break;
        case 4: _t->mvcEditCompleted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VarType* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VarType* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VarType* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VarType* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VarType::*_t)(VarType * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VarType::hasChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (VarType::*_t)(VarType * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VarType::wasEdited)) {
                *result = 1;
            }
        }
        {
            typedef void (VarType::*_t)(VarType * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VarType::XMLwasRead)) {
                *result = 2;
            }
        }
        {
            typedef void (VarType::*_t)(VarType * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VarType::XMLwasWritten)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject VarTypes::VarType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VarTypes__VarType.data,
      qt_meta_data_VarTypes__VarType,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VarTypes::VarType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VarTypes::VarType::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VarTypes__VarType.stringdata))
        return static_cast<void*>(const_cast< VarType*>(this));
    if (!strcmp(_clname, "VarVal"))
        return static_cast< VarVal*>(const_cast< VarType*>(this));
    return QObject::qt_metacast(_clname);
}

int VarTypes::VarType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void VarTypes::VarType::hasChanged(VarType * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VarTypes::VarType::wasEdited(VarType * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VarTypes::VarType::XMLwasRead(VarType * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VarTypes::VarType::XMLwasWritten(VarType * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
