/****************************************************************************
** Meta object code from reading C++ file 'loggerwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../loggerwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loggerwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LoggerWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      23,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   32,   13,   13, 0x0a,
      52,   13,   13,   13, 0x0a,
      83,   76,   13,   13, 0x08,
     119,   13,   13,   13, 0x08,
     134,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LoggerWidget[] = {
    "LoggerWidget\0\0opened()\0closed()\0msg\0"
    "append(QString)\0updateNoWarningsLabel()\0"
    "action\0warningsPreferenceChanged(QAction*)\0"
    "readSettings()\0saveSettings()\0"
};

void LoggerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LoggerWidget *_t = static_cast<LoggerWidget *>(_o);
        switch (_id) {
        case 0: _t->opened(); break;
        case 1: _t->closed(); break;
        case 2: _t->append((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateNoWarningsLabel(); break;
        case 4: _t->warningsPreferenceChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->readSettings(); break;
        case 6: _t->saveSettings(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LoggerWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LoggerWidget::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_LoggerWidget,
      qt_meta_data_LoggerWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LoggerWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LoggerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LoggerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LoggerWidget))
        return static_cast<void*>(const_cast< LoggerWidget*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int LoggerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LoggerWidget::opened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void LoggerWidget::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
