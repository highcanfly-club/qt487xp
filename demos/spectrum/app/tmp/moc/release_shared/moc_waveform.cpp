/****************************************************************************
** Meta object code from reading C++ file 'waveform.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../waveform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waveform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Waveform[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   10,    9,    9, 0x0a,
      82,   73,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Waveform[] = {
    "Waveform\0\0position,length,buffer\0"
    "bufferChanged(qint64,qint64,QByteArray)\0"
    "position\0audioPositionChanged(qint64)\0"
};

void Waveform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Waveform *_t = static_cast<Waveform *>(_o);
        switch (_id) {
        case 0: _t->bufferChanged((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 1: _t->audioPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Waveform::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Waveform::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Waveform,
      qt_meta_data_Waveform, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Waveform::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Waveform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Waveform::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Waveform))
        return static_cast<void*>(const_cast< Waveform*>(this));
    return QWidget::qt_metacast(_clname);
}

int Waveform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
