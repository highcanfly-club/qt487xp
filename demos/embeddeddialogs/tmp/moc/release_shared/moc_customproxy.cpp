/****************************************************************************
** Meta object code from reading C++ file 'customproxy.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../customproxy.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CustomProxy[] = {

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
      18,   13,   12,   12, 0x08,
      36,   12,   12,   12, 0x08,
      67,   12,   12,   12, 0x08,
      76,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CustomProxy[] = {
    "CustomProxy\0\0step\0updateStep(qreal)\0"
    "stateChanged(QTimeLine::State)\0zoomIn()\0"
    "zoomOut()\0"
};

void CustomProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CustomProxy *_t = static_cast<CustomProxy *>(_o);
        switch (_id) {
        case 0: _t->updateStep((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->stateChanged((*reinterpret_cast< QTimeLine::State(*)>(_a[1]))); break;
        case 2: _t->zoomIn(); break;
        case 3: _t->zoomOut(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CustomProxy::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CustomProxy::staticMetaObject = {
    { &QGraphicsProxyWidget::staticMetaObject, qt_meta_stringdata_CustomProxy,
      qt_meta_data_CustomProxy, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CustomProxy::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CustomProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CustomProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CustomProxy))
        return static_cast<void*>(const_cast< CustomProxy*>(this));
    return QGraphicsProxyWidget::qt_metacast(_clname);
}

int CustomProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsProxyWidget::qt_metacall(_c, _id, _a);
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
