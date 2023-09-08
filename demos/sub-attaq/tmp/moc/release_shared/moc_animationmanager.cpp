/****************************************************************************
** Meta object code from reading C++ file 'animationmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../animationmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animationmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AnimationManager[] = {

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
      18,   17,   17,   17, 0x0a,
      29,   17,   17,   17, 0x0a,
      45,   41,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AnimationManager[] = {
    "AnimationManager\0\0pauseAll()\0resumeAll()\0"
    "obj\0unregisterAnimation_helper(QObject*)\0"
};

void AnimationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AnimationManager *_t = static_cast<AnimationManager *>(_o);
        switch (_id) {
        case 0: _t->pauseAll(); break;
        case 1: _t->resumeAll(); break;
        case 2: _t->unregisterAnimation_helper((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AnimationManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AnimationManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AnimationManager,
      qt_meta_data_AnimationManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AnimationManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AnimationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AnimationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AnimationManager))
        return static_cast<void*>(const_cast< AnimationManager*>(this));
    return QObject::qt_metacast(_clname);
}

int AnimationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
