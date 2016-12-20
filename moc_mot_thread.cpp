/****************************************************************************
** Meta object code from reading C++ file 'mot_thread.h'
**
** Created: Thu Dec 8 19:23:16 2016
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mot_thread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mot_thread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MotorThread[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      37,   12,   12,   12, 0x0a,
      52,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MotorThread[] = {
    "MotorThread\0\0MotorReverseDirection()\0"
    "MotorSpeedUp()\0MotorSpeedDown()\0"
};

const QMetaObject MotorThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MotorThread,
      qt_meta_data_MotorThread, 0 }
};

const QMetaObject *MotorThread::metaObject() const
{
    return &staticMetaObject;
}

void *MotorThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MotorThread))
	return static_cast<void*>(const_cast< MotorThread*>(this));
    return QThread::qt_metacast(_clname);
}

int MotorThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: MotorReverseDirection(); break;
        case 1: MotorSpeedUp(); break;
        case 2: MotorSpeedDown(); break;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
