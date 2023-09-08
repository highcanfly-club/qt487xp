/****************************************************************************
** Meta object code from reading C++ file 'pathdeform.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../pathdeform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathdeform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PathDeformRenderer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   30,   19,   19, 0x0a,
      61,   52,   19,   19, 0x0a,
      83,   78,   19,   19, 0x0a,
     110,  100,   19,   19, 0x0a,
     137,  128,   19,   19, 0x0a,

 // properties: name, type, flags
     128,  155, 0x01095103,
      30,  160, 0x02095103,
      52,  160, 0x02095103,
     100,  160, 0x02095103,
      78,  164, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_PathDeformRenderer[] = {
    "PathDeformRenderer\0\0clicked()\0radius\0"
    "setRadius(int)\0fontSize\0setFontSize(int)\0"
    "text\0setText(QString)\0intensity\0"
    "setIntensity(int)\0animated\0setAnimated(bool)\0"
    "bool\0int\0QString\0"
};

void PathDeformRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PathDeformRenderer *_t = static_cast<PathDeformRenderer *>(_o);
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->setRadius((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setIntensity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setAnimated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PathDeformRenderer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PathDeformRenderer::staticMetaObject = {
    { &ArthurFrame::staticMetaObject, qt_meta_stringdata_PathDeformRenderer,
      qt_meta_data_PathDeformRenderer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PathDeformRenderer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PathDeformRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PathDeformRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PathDeformRenderer))
        return static_cast<void*>(const_cast< PathDeformRenderer*>(this));
    return ArthurFrame::qt_metacast(_clname);
}

int PathDeformRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ArthurFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = animated(); break;
        case 1: *reinterpret_cast< int*>(_v) = radius(); break;
        case 2: *reinterpret_cast< int*>(_v) = fontSize(); break;
        case 3: *reinterpret_cast< int*>(_v) = intensity(); break;
        case 4: *reinterpret_cast< QString*>(_v) = text(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAnimated(*reinterpret_cast< bool*>(_v)); break;
        case 1: setRadius(*reinterpret_cast< int*>(_v)); break;
        case 2: setFontSize(*reinterpret_cast< int*>(_v)); break;
        case 3: setIntensity(*reinterpret_cast< int*>(_v)); break;
        case 4: setText(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PathDeformRenderer::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_PathDeformControls[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      32,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   19,   19,   19, 0x08,
      63,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PathDeformControls[] = {
    "PathDeformControls\0\0okPressed()\0"
    "quitPressed()\0emitQuitSignal()\0"
    "emitOkSignal()\0"
};

void PathDeformControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PathDeformControls *_t = static_cast<PathDeformControls *>(_o);
        switch (_id) {
        case 0: _t->okPressed(); break;
        case 1: _t->quitPressed(); break;
        case 2: _t->emitQuitSignal(); break;
        case 3: _t->emitOkSignal(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PathDeformControls::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PathDeformControls::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PathDeformControls,
      qt_meta_data_PathDeformControls, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PathDeformControls::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PathDeformControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PathDeformControls::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PathDeformControls))
        return static_cast<void*>(const_cast< PathDeformControls*>(this));
    return QWidget::qt_metacast(_clname);
}

int PathDeformControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void PathDeformControls::okPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PathDeformControls::quitPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_PathDeformWidget[] = {

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
      18,   17,   17,   17, 0x08,
      33,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PathDeformWidget[] = {
    "PathDeformWidget\0\0showControls()\0"
    "hideControls()\0"
};

void PathDeformWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PathDeformWidget *_t = static_cast<PathDeformWidget *>(_o);
        switch (_id) {
        case 0: _t->showControls(); break;
        case 1: _t->hideControls(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PathDeformWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PathDeformWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PathDeformWidget,
      qt_meta_data_PathDeformWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PathDeformWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PathDeformWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PathDeformWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PathDeformWidget))
        return static_cast<void*>(const_cast< PathDeformWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PathDeformWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
