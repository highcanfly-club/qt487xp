/****************************************************************************
** Meta object code from reading C++ file 'menumanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../menumanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menumanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MenuManager[] = {

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
      13,   12,   12,   12, 0x08,
      37,   31,   12,   12, 0x08,
      74,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MenuManager[] = {
    "MenuManager\0\0exampleFinished()\0error\0"
    "exampleError(QProcess::ProcessError)\0"
    "quitQML()\0"
};

void MenuManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MenuManager *_t = static_cast<MenuManager *>(_o);
        switch (_id) {
        case 0: _t->exampleFinished(); break;
        case 1: _t->exampleError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 2: _t->quitQML(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MenuManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MenuManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MenuManager,
      qt_meta_data_MenuManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MenuManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MenuManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MenuManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MenuManager))
        return static_cast<void*>(const_cast< MenuManager*>(this));
    return QObject::qt_metacast(_clname);
}

int MenuManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
