/****************************************************************************
** Meta object code from reading C++ file 'spectrograph.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../spectrograph.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spectrograph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Spectrograph[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   13,   13,   13, 0x0a,
      75,   66,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Spectrograph[] = {
    "Spectrograph\0\0message,intervalMs\0"
    "infoMessage(QString,int)\0reset()\0"
    "spectrum\0spectrumChanged(FrequencySpectrum)\0"
};

void Spectrograph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Spectrograph *_t = static_cast<Spectrograph *>(_o);
        switch (_id) {
        case 0: _t->infoMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->reset(); break;
        case 2: _t->spectrumChanged((*reinterpret_cast< const FrequencySpectrum(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Spectrograph::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Spectrograph::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Spectrograph,
      qt_meta_data_Spectrograph, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Spectrograph::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Spectrograph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Spectrograph::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Spectrograph))
        return static_cast<void*>(const_cast< Spectrograph*>(this));
    return QWidget::qt_metacast(_clname);
}

int Spectrograph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Spectrograph::infoMessage(const QString & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
