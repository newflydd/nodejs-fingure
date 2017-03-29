/****************************************************************************
** Meta object code from reading C++ file 'fingermodual.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fingermodual.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fingermodual.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FingerModual_t {
    QByteArrayData data[16];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FingerModual_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FingerModual_t qt_meta_stringdata_FingerModual = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FingerModual"
QT_MOC_LITERAL(1, 13, 7), // "connect"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "input1"
QT_MOC_LITERAL(4, 29, 6), // "input2"
QT_MOC_LITERAL(5, 36, 5), // "power"
QT_MOC_LITERAL(6, 42, 4), // "name"
QT_MOC_LITERAL(7, 47, 15), // "buildFingerList"
QT_MOC_LITERAL(8, 63, 6), // "search"
QT_MOC_LITERAL(9, 70, 19), // "deleteFingerAddress"
QT_MOC_LITERAL(10, 90, 19), // "backupFingerAddress"
QT_MOC_LITERAL(11, 110, 20), // "restoreFingerAddress"
QT_MOC_LITERAL(12, 131, 13), // "objFingerList"
QT_MOC_LITERAL(13, 145, 15), // "QList<QObject*>"
QT_MOC_LITERAL(14, 161, 10), // "searchName"
QT_MOC_LITERAL(15, 172, 9) // "returnFid"

    },
    "FingerModual\0connect\0\0input1\0input2\0"
    "power\0name\0buildFingerList\0search\0"
    "deleteFingerAddress\0backupFingerAddress\0"
    "restoreFingerAddress\0objFingerList\0"
    "QList<QObject*>\0searchName\0returnFid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FingerModual[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x02 /* Public */,
       3,    0,   55,    2, 0x02 /* Public */,
       4,    2,   56,    2, 0x02 /* Public */,
       7,    0,   61,    2, 0x02 /* Public */,
       8,    0,   62,    2, 0x02 /* Public */,
       9,    1,   63,    2, 0x02 /* Public */,
      10,    0,   66,    2, 0x02 /* Public */,
      11,    0,   67,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::UChar,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int, QMetaType::QString,    5,    6,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int,    2,
    QMetaType::Int,
    QMetaType::Int,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x00095009,
      14, QMetaType::QString, 0x00095001,
      15, QMetaType::QString, 0x00095001,

       0        // eod
};

void FingerModual::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FingerModual *_t = static_cast<FingerModual *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { unsigned char _r = _t->connect();
            if (_a[0]) *reinterpret_cast< unsigned char*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->input1();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->input2((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->buildFingerList();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->search();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->deleteFingerAddress((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->backupFingerAddress();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->restoreFingerAddress();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        FingerModual *_t = static_cast<FingerModual *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QObject*>*>(_v) = _t->objFingerList(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->searchName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->returnFid(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject FingerModual::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FingerModual.data,
      qt_meta_data_FingerModual,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FingerModual::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FingerModual::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FingerModual.stringdata0))
        return static_cast<void*>(const_cast< FingerModual*>(this));
    return QObject::qt_metacast(_clname);
}

int FingerModual::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
