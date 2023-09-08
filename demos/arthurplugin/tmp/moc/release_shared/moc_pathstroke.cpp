/****************************************************************************
** Meta object code from reading C++ file 'pathstroke.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../pathstroke/pathstroke.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathstroke.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PathStrokeRenderer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       2,   99, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   30,   19,   19, 0x0a,
      66,   56,   19,   19, 0x0a,
      85,   19,   19,   19, 0x0a,
      98,   19,   19,   19, 0x0a,
     113,   19,   19,   19, 0x0a,
     127,   19,   19,   19, 0x0a,
     142,   19,   19,   19, 0x0a,
     157,   19,   19,   19, 0x0a,
     172,   19,   19,   19, 0x0a,
     187,   19,   19,   19, 0x0a,
     201,   19,   19,   19, 0x0a,
     216,   19,   19,   19, 0x0a,
     230,   19,   19,   19, 0x0a,
     243,   19,   19,   19, 0x0a,
     260,   19,   19,   19, 0x0a,
     280,   19,   19,   19, 0x0a,

 // properties: name, type, flags
      56,  300, 0x01095103,
      30,  305, ((uint)QMetaType::QReal << 24) | 0x00095003,

       0        // eod
};

static const char qt_meta_stringdata_PathStrokeRenderer[] = {
    "PathStrokeRenderer\0\0clicked()\0penWidth\0"
    "setPenWidth(int)\0animation\0"
    "setAnimation(bool)\0setFlatCap()\0"
    "setSquareCap()\0setRoundCap()\0"
    "setBevelJoin()\0setMiterJoin()\0"
    "setRoundJoin()\0setCurveMode()\0"
    "setLineMode()\0setSolidLine()\0setDashLine()\0"
    "setDotLine()\0setDashDotLine()\0"
    "setDashDotDotLine()\0setCustomDashLine()\0"
    "bool\0qreal\0"
};

void PathStrokeRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PathStrokeRenderer *_t = static_cast<PathStrokeRenderer *>(_o);
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->setPenWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setAnimation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setFlatCap(); break;
        case 4: _t->setSquareCap(); break;
        case 5: _t->setRoundCap(); break;
        case 6: _t->setBevelJoin(); break;
        case 7: _t->setMiterJoin(); break;
        case 8: _t->setRoundJoin(); break;
        case 9: _t->setCurveMode(); break;
        case 10: _t->setLineMode(); break;
        case 11: _t->setSolidLine(); break;
        case 12: _t->setDashLine(); break;
        case 13: _t->setDotLine(); break;
        case 14: _t->setDashDotLine(); break;
        case 15: _t->setDashDotDotLine(); break;
        case 16: _t->setCustomDashLine(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PathStrokeRenderer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PathStrokeRenderer::staticMetaObject = {
    { &ArthurFrame::staticMetaObject, qt_meta_stringdata_PathStrokeRenderer,
      qt_meta_data_PathStrokeRenderer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PathStrokeRenderer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PathStrokeRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PathStrokeRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PathStrokeRenderer))
        return static_cast<void*>(const_cast< PathStrokeRenderer*>(this));
    return ArthurFrame::qt_metacast(_clname);
}

int PathStrokeRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ArthurFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = animation(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = realPenWidth(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAnimation(*reinterpret_cast< bool*>(_v)); break;
        case 1: setRealPenWidth(*reinterpret_cast< qreal*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PathStrokeRenderer::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_PathStrokeControls[] = {

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

static const char qt_meta_stringdata_PathStrokeControls[] = {
    "PathStrokeControls\0\0okPressed()\0"
    "quitPressed()\0emitQuitSignal()\0"
    "emitOkSignal()\0"
};

void PathStrokeControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PathStrokeControls *_t = static_cast<PathStrokeControls *>(_o);
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

const QMetaObjectExtraData PathStrokeControls::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PathStrokeControls::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PathStrokeControls,
      qt_meta_data_PathStrokeControls, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PathStrokeControls::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PathStrokeControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PathStrokeControls::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PathStrokeControls))
        return static_cast<void*>(const_cast< PathStrokeControls*>(this));
    return QWidget::qt_metacast(_clname);
}

int PathStrokeControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void PathStrokeControls::okPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PathStrokeControls::quitPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_PathStrokeWidget[] = {

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

static const char qt_meta_stringdata_PathStrokeWidget[] = {
    "PathStrokeWidget\0\0showControls()\0"
    "hideControls()\0"
};

void PathStrokeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PathStrokeWidget *_t = static_cast<PathStrokeWidget *>(_o);
        switch (_id) {
        case 0: _t->showControls(); break;
        case 1: _t->hideControls(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PathStrokeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PathStrokeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PathStrokeWidget,
      qt_meta_data_PathStrokeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PathStrokeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PathStrokeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PathStrokeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PathStrokeWidget))
        return static_cast<void*>(const_cast< PathStrokeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PathStrokeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
