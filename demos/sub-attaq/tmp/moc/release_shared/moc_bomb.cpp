/****************************************************************************
** Meta object code from reading C++ file 'bomb.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bomb.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bomb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Bomb[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x05,
      21,    5,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Bomb[] = {
    "Bomb\0\0bombExploded()\0bombExecutionFinished()\0"
    "onAnimationLaunchValueChanged(QVariant)\0"
};

void Bomb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Bomb *_t = static_cast<Bomb *>(_o);
        switch (_id) {
        case 0: _t->bombExploded(); break;
        case 1: _t->bombExecutionFinished(); break;
        case 2: _t->onAnimationLaunchValueChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Bomb::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Bomb::staticMetaObject = {
    { &PixmapItem::staticMetaObject, qt_meta_stringdata_Bomb,
      qt_meta_data_Bomb, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Bomb::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Bomb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Bomb::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Bomb))
        return static_cast<void*>(const_cast< Bomb*>(this));
    return PixmapItem::qt_metacast(_clname);
}

int Bomb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PixmapItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Bomb::bombExploded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Bomb::bombExecutionFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
