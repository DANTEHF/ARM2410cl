/****************************************************************************
** Meta object code from reading C++ file 'ad_thread.h'
**
** Created: Thu Dec 8 19:23:16 2016
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ad_thread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ad_thread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ADThread[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      19,   10,    9,    9, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ADThread[] = {
    "ADThread\0\0f0,f1,f2\0AdPortData(float,float,float)\0"
};

const QMetaObject ADThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ADThread,
      qt_meta_data_ADThread, 0 }
};

const QMetaObject *ADThread::metaObject() const
{
    return &staticMetaObject;
}

void *ADThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ADThread))
	return static_cast<void*>(const_cast< ADThread*>(this));
    return QThread::qt_metacast(_clname);
}

int ADThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: AdPortData((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ADThread::AdPortData(float _t1, float _t2, float _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
