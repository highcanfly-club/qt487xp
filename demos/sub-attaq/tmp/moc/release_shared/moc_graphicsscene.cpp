/****************************************************************************
** Meta object code from reading C++ file 'graphicsscene.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphicsscene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphicsscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GraphicsScene[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      39,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   14,   14,   14, 0x08,
      92,   14,   14,   14, 0x08,
     121,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GraphicsScene[] = {
    "GraphicsScene\0\0subMarineDestroyed(int)\0"
    "allSubMarineDestroyed(int)\0"
    "onBombExecutionFinished()\0"
    "onTorpedoExecutionFinished()\0"
    "onSubMarineExecutionFinished()\0"
};

void GraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GraphicsScene *_t = static_cast<GraphicsScene *>(_o);
        switch (_id) {
        case 0: _t->subMarineDestroyed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->allSubMarineDestroyed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onBombExecutionFinished(); break;
        case 3: _t->onTorpedoExecutionFinished(); break;
        case 4: _t->onSubMarineExecutionFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GraphicsScene::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GraphicsScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_GraphicsScene,
      qt_meta_data_GraphicsScene, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GraphicsScene::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsScene))
        return static_cast<void*>(const_cast< GraphicsScene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int GraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GraphicsScene::subMarineDestroyed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GraphicsScene::allSubMarineDestroyed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
