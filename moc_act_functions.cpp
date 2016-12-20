/****************************************************************************
** Meta object code from reading C++ file 'act_functions.h'
**
** Created: Thu Dec 8 20:44:55 2016
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "act_functions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'act_functions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Actions[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      19,    8,    8,    8, 0x0a,
      37,   28,    8,    8, 0x0a,
      67,    8,    8,    8, 0x0a,
      80,    8,    8,    8, 0x0a,
      92,    8,    8,    8, 0x0a,
     102,    8,    8,    8, 0x0a,
     115,    8,    8,    8, 0x0a,
     126,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Actions[] = {
    "Actions\0\0startAD()\0stopAD()\0f0,f1,f2\0"
    "showAdData(float,float,float)\0"
    "startMotor()\0stopMotor()\0ledInit()\0"
    "ledRelease()\0ledShowA()\0ledShow1()\0"
};

const QMetaObject Actions::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Actions,
      qt_meta_data_Actions, 0 }
};

const QMetaObject *Actions::metaObject() const
{
    return &staticMetaObject;
}

void *Actions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Actions))
	return static_cast<void*>(const_cast< Actions*>(this));
    return QObject::qt_metacast(_clname);
}

int Actions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: startAD(); break;
        case 1: stopAD(); break;
        case 2: showAdData((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 3: startMotor(); break;
        case 4: stopMotor(); break;
        case 5: ledInit(); break;
        case 6: ledRelease(); break;
        case 7: ledShowA(); break;
        case 8: ledShow1(); break;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
