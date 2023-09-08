/****************************************************************************
** Meta object code from reading C++ file 'xform.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../affine/xform.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_XFormView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       7,   89, // properties
       1,  110, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   11,   10,   10, 0x05,
      47,   41,   10,   10, 0x05,
      71,   65,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      97,   89,   10,   10, 0x0a,
     116,   10,   10,   10, 0x0a,
     144,   11,   10,   10, 0x0a,
     164,   41,   10,   10, 0x0a,
     181,   65,   10,   10, 0x0a,
     198,   10,   10,   10, 0x0a,
     215,   10,   10,   10, 0x0a,
     236,  234,   10,   10, 0x0a,
     255,   10,   10,   10, 0x0a,
     271,   10,   10,   10, 0x0a,
     287,   10,   10,   10, 0x0a,
     301,   10,   10,   10, 0x0a,

 // properties: name, type, flags
     319,  309, 0x0009510b,
     329,  324, 0x01095103,
      65,  339, ((uint)QMetaType::QReal << 24) | 0x00095103,
      11,  339, ((uint)QMetaType::QReal << 24) | 0x00095103,
      41,  339, ((uint)QMetaType::QReal << 24) | 0x00095103,
     353,  345, 0x0a095103,
     366,  358, 0x41095103,

 // enums: name, flags, count, data
     309, 0x0,    3,  114,

 // enum data: key, value
     373, uint(XFormView::VectorType),
     384, uint(XFormView::PixmapType),
     395, uint(XFormView::TextType),

       0        // eod
};

static const char qt_meta_stringdata_XFormView[] = {
    "XFormView\0\0rotation\0rotationChanged(int)\0"
    "scale\0scaleChanged(int)\0shear\0"
    "shearChanged(int)\0animate\0setAnimation(bool)\0"
    "updateCtrlPoints(QPolygonF)\0"
    "changeRotation(int)\0changeScale(int)\0"
    "changeShear(int)\0setText(QString)\0"
    "setPixmap(QPixmap)\0t\0setType(XFormType)\0"
    "setVectorType()\0setPixmapType()\0"
    "setTextType()\0reset()\0XFormType\0type\0"
    "bool\0animation\0qreal\0QString\0text\0"
    "QPixmap\0pixmap\0VectorType\0PixmapType\0"
    "TextType\0"
};

void XFormView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        XFormView *_t = static_cast<XFormView *>(_o);
        switch (_id) {
        case 0: _t->rotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->scaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->shearChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setAnimation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateCtrlPoints((*reinterpret_cast< const QPolygonF(*)>(_a[1]))); break;
        case 5: _t->changeRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->changeScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->changeShear((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 10: _t->setType((*reinterpret_cast< XFormType(*)>(_a[1]))); break;
        case 11: _t->setVectorType(); break;
        case 12: _t->setPixmapType(); break;
        case 13: _t->setTextType(); break;
        case 14: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData XFormView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XFormView::staticMetaObject = {
    { &ArthurFrame::staticMetaObject, qt_meta_stringdata_XFormView,
      qt_meta_data_XFormView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XFormView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XFormView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XFormView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XFormView))
        return static_cast<void*>(const_cast< XFormView*>(this));
    return ArthurFrame::qt_metacast(_clname);
}

int XFormView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ArthurFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< XFormType*>(_v) = type(); break;
        case 1: *reinterpret_cast< bool*>(_v) = animation(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = shear(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = rotation(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = scale(); break;
        case 5: *reinterpret_cast< QString*>(_v) = text(); break;
        case 6: *reinterpret_cast< QPixmap*>(_v) = pixmap(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setType(*reinterpret_cast< XFormType*>(_v)); break;
        case 1: setAnimation(*reinterpret_cast< bool*>(_v)); break;
        case 2: setShear(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setRotation(*reinterpret_cast< qreal*>(_v)); break;
        case 4: setScale(*reinterpret_cast< qreal*>(_v)); break;
        case 5: setText(*reinterpret_cast< QString*>(_v)); break;
        case 6: setPixmap(*reinterpret_cast< QPixmap*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void XFormView::rotationChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XFormView::scaleChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XFormView::shearChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_XFormWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_XFormWidget[] = {
    "XFormWidget\0"
};

void XFormWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData XFormWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject XFormWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_XFormWidget,
      qt_meta_data_XFormWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &XFormWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *XFormWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *XFormWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_XFormWidget))
        return static_cast<void*>(const_cast< XFormWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int XFormWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
