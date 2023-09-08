/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativetester.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qdeclarativetester.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativetester.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeVisualTest[] = {

 // content:
       6,       // revision
       0,       // classname
       1,   14, // classinfo
       0,    0, // methods
       1,   16, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
      30,   23,

 // properties: name, type, flags
      23,   46, 0x00095409,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeVisualTest[] = {
    "QDeclarativeVisualTest\0events\0"
    "DefaultProperty\0QDeclarativeListProperty<QObject>\0"
};

void QDeclarativeVisualTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeVisualTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeVisualTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeVisualTest,
      qt_meta_data_QDeclarativeVisualTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeVisualTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeVisualTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeVisualTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeVisualTest))
        return static_cast<void*>(const_cast< QDeclarativeVisualTest*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeVisualTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDeclarativeListProperty<QObject>*>(_v) = events(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_QDeclarativeVisualTestFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      32,   28, 0x02095103,
      45,   37, 0x0a095103,
      55,   50, 0x11095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeVisualTestFrame[] = {
    "QDeclarativeVisualTestFrame\0int\0msec\0"
    "QString\0hash\0QUrl\0image\0"
};

void QDeclarativeVisualTestFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeVisualTestFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeVisualTestFrame::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeVisualTestFrame,
      qt_meta_data_QDeclarativeVisualTestFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeVisualTestFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeVisualTestFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeVisualTestFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeVisualTestFrame))
        return static_cast<void*>(const_cast< QDeclarativeVisualTestFrame*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeVisualTestFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = msec(); break;
        case 1: *reinterpret_cast< QString*>(_v) = hash(); break;
        case 2: *reinterpret_cast< QUrl*>(_v) = image(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMsec(*reinterpret_cast< int*>(_v)); break;
        case 1: setHash(*reinterpret_cast< QString*>(_v)); break;
        case 2: setImage(*reinterpret_cast< QUrl*>(_v)); break;
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
static const uint qt_meta_data_QDeclarativeVisualTestMouse[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      32,   28, 0x02095103,
      37,   28, 0x02095103,
      44,   28, 0x02095103,
      52,   28, 0x02095103,
      54,   28, 0x02095103,
      56,   28, 0x02095103,
      71,   66, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeVisualTestMouse[] = {
    "QDeclarativeVisualTestMouse\0int\0type\0"
    "button\0buttons\0x\0y\0modifiers\0bool\0"
    "sendToViewport\0"
};

void QDeclarativeVisualTestMouse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeVisualTestMouse::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeVisualTestMouse::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeVisualTestMouse,
      qt_meta_data_QDeclarativeVisualTestMouse, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeVisualTestMouse::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeVisualTestMouse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeVisualTestMouse::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeVisualTestMouse))
        return static_cast<void*>(const_cast< QDeclarativeVisualTestMouse*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeVisualTestMouse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = type(); break;
        case 1: *reinterpret_cast< int*>(_v) = button(); break;
        case 2: *reinterpret_cast< int*>(_v) = buttons(); break;
        case 3: *reinterpret_cast< int*>(_v) = x(); break;
        case 4: *reinterpret_cast< int*>(_v) = y(); break;
        case 5: *reinterpret_cast< int*>(_v) = modifiers(); break;
        case 6: *reinterpret_cast< bool*>(_v) = sendToViewport(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setType(*reinterpret_cast< int*>(_v)); break;
        case 1: setButton(*reinterpret_cast< int*>(_v)); break;
        case 2: setButtons(*reinterpret_cast< int*>(_v)); break;
        case 3: setX(*reinterpret_cast< int*>(_v)); break;
        case 4: setY(*reinterpret_cast< int*>(_v)); break;
        case 5: setModifiers(*reinterpret_cast< int*>(_v)); break;
        case 6: setSendToViewport(*reinterpret_cast< bool*>(_v)); break;
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
static const uint qt_meta_data_QDeclarativeVisualTestKey[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      30,   26, 0x02095103,
      35,   26, 0x02095103,
      39,   26, 0x02095103,
      57,   49, 0x0a095103,
      67,   62, 0x01095103,
      75,   26, 0x02095103,
      81,   62, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeVisualTestKey[] = {
    "QDeclarativeVisualTestKey\0int\0type\0"
    "key\0modifiers\0QString\0text\0bool\0autorep\0"
    "count\0sendToViewport\0"
};

void QDeclarativeVisualTestKey::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QDeclarativeVisualTestKey::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeVisualTestKey::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeVisualTestKey,
      qt_meta_data_QDeclarativeVisualTestKey, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeVisualTestKey::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeVisualTestKey::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeVisualTestKey::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeVisualTestKey))
        return static_cast<void*>(const_cast< QDeclarativeVisualTestKey*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeclarativeVisualTestKey::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = type(); break;
        case 1: *reinterpret_cast< int*>(_v) = key(); break;
        case 2: *reinterpret_cast< int*>(_v) = modifiers(); break;
        case 3: *reinterpret_cast< QString*>(_v) = text(); break;
        case 4: *reinterpret_cast< bool*>(_v) = autorep(); break;
        case 5: *reinterpret_cast< int*>(_v) = count(); break;
        case 6: *reinterpret_cast< bool*>(_v) = sendToViewport(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setType(*reinterpret_cast< int*>(_v)); break;
        case 1: setKey(*reinterpret_cast< int*>(_v)); break;
        case 2: setModifiers(*reinterpret_cast< int*>(_v)); break;
        case 3: setText(*reinterpret_cast< QString*>(_v)); break;
        case 4: setAutorep(*reinterpret_cast< bool*>(_v)); break;
        case 5: setCount(*reinterpret_cast< int*>(_v)); break;
        case 6: setSendToViewport(*reinterpret_cast< bool*>(_v)); break;
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
QT_END_MOC_NAMESPACE
