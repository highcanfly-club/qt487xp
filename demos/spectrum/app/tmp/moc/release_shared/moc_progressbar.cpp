/****************************************************************************
** Meta object code from reading C++ file 'progressbar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../progressbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'progressbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProgressBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   13,   12,   12, 0x0a,
      63,   48,   12,   12, 0x0a,
     106,   93,   12,   12, 0x0a,
     150,  134,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ProgressBar[] = {
    "ProgressBar\0\0length\0bufferLengthChanged(qint64)\0"
    "recordPosition\0recordPositionChanged(qint64)\0"
    "playPosition\0playPositionChanged(qint64)\0"
    "position,length\0windowChanged(qint64,qint64)\0"
};

void ProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProgressBar *_t = static_cast<ProgressBar *>(_o);
        switch (_id) {
        case 0: _t->bufferLengthChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->recordPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->playPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->windowChanged((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ProgressBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ProgressBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ProgressBar,
      qt_meta_data_ProgressBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProgressBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProgressBar))
        return static_cast<void*>(const_cast< ProgressBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int ProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
