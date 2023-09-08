/****************************************************************************
** Meta object code from reading C++ file 'composition.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../composition.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'composition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CompositionWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CompositionWidget[] = {
    "CompositionWidget\0\0nextMode()\0"
};

void CompositionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CompositionWidget *_t = static_cast<CompositionWidget *>(_o);
        switch (_id) {
        case 0: _t->nextMode(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CompositionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CompositionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CompositionWidget,
      qt_meta_data_CompositionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CompositionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CompositionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CompositionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CompositionWidget))
        return static_cast<void*>(const_cast< CompositionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CompositionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_CompositionRenderer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       3,  149, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      36,   20,   20,   20, 0x0a,
      52,   20,   20,   20, 0x0a,
      66,   20,   20,   20, 0x0a,
      86,   20,   20,   20, 0x0a,
     104,   20,   20,   20, 0x0a,
     122,   20,   20,   20, 0x0a,
     138,   20,   20,   20, 0x0a,
     157,   20,   20,   20, 0x0a,
     174,   20,   20,   20, 0x0a,
     194,   20,   20,   20, 0x0a,
     212,   20,   20,   20, 0x0a,
     225,   20,   20,   20, 0x0a,
     239,   20,   20,   20, 0x0a,
     257,   20,   20,   20, 0x0a,
     273,   20,   20,   20, 0x0a,
     290,   20,   20,   20, 0x0a,
     306,   20,   20,   20, 0x0a,
     323,   20,   20,   20, 0x0a,
     343,   20,   20,   20, 0x0a,
     362,   20,   20,   20, 0x0a,
     381,   20,   20,   20, 0x0a,
     400,   20,   20,   20, 0x0a,
     420,   20,   20,   20, 0x0a,
     445,  439,   20,   20, 0x0a,
     469,  465,   20,   20, 0x0a,
     497,  489,   20,   20, 0x0a,

 // properties: name, type, flags
     527,  523, 0x02095103,
     539,  523, 0x02095103,
     556,  551, 0x01095003,

       0        // eod
};

static const char qt_meta_stringdata_CompositionRenderer[] = {
    "CompositionRenderer\0\0setClearMode()\0"
    "setSourceMode()\0setDestMode()\0"
    "setSourceOverMode()\0setDestOverMode()\0"
    "setSourceInMode()\0setDestInMode()\0"
    "setSourceOutMode()\0setDestOutMode()\0"
    "setSourceAtopMode()\0setDestAtopMode()\0"
    "setXorMode()\0setPlusMode()\0setMultiplyMode()\0"
    "setScreenMode()\0setOverlayMode()\0"
    "setDarkenMode()\0setLightenMode()\0"
    "setColorDodgeMode()\0setColorBurnMode()\0"
    "setHardLightMode()\0setSoftLightMode()\0"
    "setDifferenceMode()\0setExclusionMode()\0"
    "alpha\0setCircleAlpha(int)\0hue\0"
    "setCircleColor(int)\0enabled\0"
    "setAnimationEnabled(bool)\0int\0circleColor\0"
    "circleAlpha\0bool\0animation\0"
};

void CompositionRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CompositionRenderer *_t = static_cast<CompositionRenderer *>(_o);
        switch (_id) {
        case 0: _t->setClearMode(); break;
        case 1: _t->setSourceMode(); break;
        case 2: _t->setDestMode(); break;
        case 3: _t->setSourceOverMode(); break;
        case 4: _t->setDestOverMode(); break;
        case 5: _t->setSourceInMode(); break;
        case 6: _t->setDestInMode(); break;
        case 7: _t->setSourceOutMode(); break;
        case 8: _t->setDestOutMode(); break;
        case 9: _t->setSourceAtopMode(); break;
        case 10: _t->setDestAtopMode(); break;
        case 11: _t->setXorMode(); break;
        case 12: _t->setPlusMode(); break;
        case 13: _t->setMultiplyMode(); break;
        case 14: _t->setScreenMode(); break;
        case 15: _t->setOverlayMode(); break;
        case 16: _t->setDarkenMode(); break;
        case 17: _t->setLightenMode(); break;
        case 18: _t->setColorDodgeMode(); break;
        case 19: _t->setColorBurnMode(); break;
        case 20: _t->setHardLightMode(); break;
        case 21: _t->setSoftLightMode(); break;
        case 22: _t->setDifferenceMode(); break;
        case 23: _t->setExclusionMode(); break;
        case 24: _t->setCircleAlpha((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->setCircleColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->setAnimationEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CompositionRenderer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CompositionRenderer::staticMetaObject = {
    { &ArthurFrame::staticMetaObject, qt_meta_stringdata_CompositionRenderer,
      qt_meta_data_CompositionRenderer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CompositionRenderer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CompositionRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CompositionRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CompositionRenderer))
        return static_cast<void*>(const_cast< CompositionRenderer*>(this));
    return ArthurFrame::qt_metacast(_clname);
}

int CompositionRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ArthurFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = circleColor(); break;
        case 1: *reinterpret_cast< int*>(_v) = circleAlpha(); break;
        case 2: *reinterpret_cast< bool*>(_v) = animationEnabled(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setCircleColor(*reinterpret_cast< int*>(_v)); break;
        case 1: setCircleAlpha(*reinterpret_cast< int*>(_v)); break;
        case 2: setAnimationEnabled(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
