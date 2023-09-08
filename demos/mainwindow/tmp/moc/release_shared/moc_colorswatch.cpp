/****************************************************************************
** Meta object code from reading C++ file 'colorswatch.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../colorswatch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorswatch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ColorSwatch[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   13,   12,   12, 0x08,
      37,   13,   12,   12, 0x08,
      57,   13,   12,   12, 0x08,
      79,   13,   12,   12, 0x08,
     100,   13,   12,   12, 0x08,
     129,   12,   12,   12, 0x08,
     151,  149,   12,   12, 0x08,
     167,  149,   12,   12, 0x08,
     184,  149,   12,   12, 0x08,
     199,  149,   12,   12, 0x08,
     219,  217,   12,   12, 0x08,
     235,  217,   12,   12, 0x08,
     252,  217,   12,   12, 0x08,
     267,  217,   12,   12, 0x08,
     292,  285,   12,   12, 0x08,
     312,  285,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ColorSwatch[] = {
    "ColorSwatch\0\0on\0changeClosable(bool)\0"
    "changeMovable(bool)\0changeFloatable(bool)\0"
    "changeFloating(bool)\0changeVerticalTitleBar(bool)\0"
    "updateContextMenu()\0a\0allowLeft(bool)\0"
    "allowRight(bool)\0allowTop(bool)\0"
    "allowBottom(bool)\0p\0placeLeft(bool)\0"
    "placeRight(bool)\0placeTop(bool)\0"
    "placeBottom(bool)\0action\0splitInto(QAction*)\0"
    "tabInto(QAction*)\0"
};

void ColorSwatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ColorSwatch *_t = static_cast<ColorSwatch *>(_o);
        switch (_id) {
        case 0: _t->changeClosable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->changeMovable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->changeFloatable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->changeFloating((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->changeVerticalTitleBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->updateContextMenu(); break;
        case 6: _t->allowLeft((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->allowRight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->allowTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->allowBottom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->placeLeft((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->placeRight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->placeTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->placeBottom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->splitInto((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 15: _t->tabInto((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ColorSwatch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ColorSwatch::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_ColorSwatch,
      qt_meta_data_ColorSwatch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ColorSwatch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ColorSwatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ColorSwatch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColorSwatch))
        return static_cast<void*>(const_cast< ColorSwatch*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int ColorSwatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
static const uint qt_meta_data_BlueTitleBar[] = {

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
      14,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BlueTitleBar[] = {
    "BlueTitleBar\0\0updateMask()\0"
};

void BlueTitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BlueTitleBar *_t = static_cast<BlueTitleBar *>(_o);
        switch (_id) {
        case 0: _t->updateMask(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BlueTitleBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BlueTitleBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BlueTitleBar,
      qt_meta_data_BlueTitleBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BlueTitleBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BlueTitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BlueTitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BlueTitleBar))
        return static_cast<void*>(const_cast< BlueTitleBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int BlueTitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
