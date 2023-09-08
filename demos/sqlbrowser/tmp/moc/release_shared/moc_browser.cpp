/****************************************************************************
** Meta object code from reading C++ file 'browser.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../browser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Browser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,    9,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,    8,    8,    8, 0x0a,
      53,   47,    8,    8, 0x0a,
      72,   47,    8,    8, 0x0a,
      94,    8,    8,    8, 0x0a,
     110,    8,    8,    8, 0x0a,
     127,    8,    8,    8, 0x0a,
     135,    8,    8,    8, 0x0a,
     166,    8,    8,    8, 0x0a,
     197,   47,    8,    8, 0x0a,
     241,   47,    8,    8, 0x0a,
     288,    8,    8,    8, 0x0a,
     314,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Browser[] = {
    "Browser\0\0message\0statusMessage(QString)\0"
    "exec()\0table\0showTable(QString)\0"
    "showMetaData(QString)\0addConnection()\0"
    "currentChanged()\0about()\0"
    "on_insertRowAction_triggered()\0"
    "on_deleteRowAction_triggered()\0"
    "on_connectionWidget_tableActivated(QString)\0"
    "on_connectionWidget_metaDataRequested(QString)\0"
    "on_submitButton_clicked()\0"
    "on_clearButton_clicked()\0"
};

void Browser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Browser *_t = static_cast<Browser *>(_o);
        switch (_id) {
        case 0: _t->statusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->exec(); break;
        case 2: _t->showTable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->showMetaData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->addConnection(); break;
        case 5: _t->currentChanged(); break;
        case 6: _t->about(); break;
        case 7: _t->on_insertRowAction_triggered(); break;
        case 8: _t->on_deleteRowAction_triggered(); break;
        case 9: _t->on_connectionWidget_tableActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_connectionWidget_metaDataRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_submitButton_clicked(); break;
        case 12: _t->on_clearButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Browser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Browser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Browser,
      qt_meta_data_Browser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Browser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Browser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Browser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Browser))
        return static_cast<void*>(const_cast< Browser*>(this));
    return QWidget::qt_metacast(_clname);
}

int Browser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Browser::statusMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
