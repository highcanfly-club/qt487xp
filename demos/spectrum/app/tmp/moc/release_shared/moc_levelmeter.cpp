/****************************************************************************
** Meta object code from reading C++ file 'levelmeter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../levelmeter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'levelmeter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LevelMeter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      50,   20,   11,   11, 0x0a,
      80,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LevelMeter[] = {
    "LevelMeter\0\0reset()\0rmsLevel,peakLevel,numSamples\0"
    "levelChanged(qreal,qreal,int)\0"
    "redrawTimerExpired()\0"
};

void LevelMeter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LevelMeter *_t = static_cast<LevelMeter *>(_o);
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: _t->levelChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->redrawTimerExpired(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LevelMeter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LevelMeter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LevelMeter,
      qt_meta_data_LevelMeter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LevelMeter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LevelMeter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LevelMeter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LevelMeter))
        return static_cast<void*>(const_cast< LevelMeter*>(this));
    return QWidget::qt_metacast(_clname);
}

int LevelMeter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
