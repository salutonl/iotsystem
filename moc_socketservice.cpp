/****************************************************************************
** Meta object code from reading C++ file 'socketservice.h'
**
** Created: Fri May 19 10:18:19 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "socketservice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SocketService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   14,   14,   14, 0x0a,
      55,   14,   14,   14, 0x0a,
      65,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SocketService[] = {
    "SocketService\0\0receiveMsgFromSocket(QString)\0"
    "readMsg()\0sendMsg()\0acceptConnection()\0"
};

void SocketService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SocketService *_t = static_cast<SocketService *>(_o);
        switch (_id) {
        case 0: _t->receiveMsgFromSocket((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->readMsg(); break;
        case 2: _t->sendMsg(); break;
        case 3: _t->acceptConnection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SocketService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SocketService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SocketService,
      qt_meta_data_SocketService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SocketService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SocketService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SocketService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SocketService))
        return static_cast<void*>(const_cast< SocketService*>(this));
    return QObject::qt_metacast(_clname);
}

int SocketService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SocketService::receiveMsgFromSocket(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
