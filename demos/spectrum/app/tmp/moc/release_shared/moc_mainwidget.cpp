/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   12,   11,   11, 0x0a,
      71,   64,   11,   11, 0x0a,
     124,   99,   11,   11, 0x0a,
     191,  173,   11,   11, 0x0a,
     231,  216,   11,   11, 0x0a,
     270,  261,   11,   11, 0x0a,
     306,  299,   11,   11, 0x0a,
     334,   11,   11,   11, 0x08,
     351,   11,   11,   11, 0x08,
     372,   11,   11,   11, 0x08,
     398,   11,   11,   11, 0x08,
     417,   11,   11,   11, 0x08,
     434,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWidget[] = {
    "MainWidget\0\0mode,state\0"
    "stateChanged(QAudio::Mode,QAudio::State)\0"
    "format\0formatChanged(QAudioFormat)\0"
    "position,length,spectrum\0"
    "spectrumChanged(qint64,qint64,FrequencySpectrum)\0"
    "message,timeoutMs\0infoMessage(QString,int)\0"
    "heading,detail\0errorMessage(QString,QString)\0"
    "position\0audioPositionChanged(qint64)\0"
    "length\0bufferLengthChanged(qint64)\0"
    "showFileDialog()\0showSettingsDialog()\0"
    "showToneGeneratorDialog()\0initializeRecord()\0"
    "updateModeMenu()\0updateButtonStates()\0"
};

void MainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWidget *_t = static_cast<MainWidget *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QAudio::Mode(*)>(_a[1])),(*reinterpret_cast< QAudio::State(*)>(_a[2]))); break;
        case 1: _t->formatChanged((*reinterpret_cast< const QAudioFormat(*)>(_a[1]))); break;
        case 2: _t->spectrumChanged((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< const FrequencySpectrum(*)>(_a[3]))); break;
        case 3: _t->infoMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->audioPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->bufferLengthChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->showFileDialog(); break;
        case 8: _t->showSettingsDialog(); break;
        case 9: _t->showToneGeneratorDialog(); break;
        case 10: _t->initializeRecord(); break;
        case 11: _t->updateModeMenu(); break;
        case 12: _t->updateButtonStates(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainWidget,
      qt_meta_data_MainWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget))
        return static_cast<void*>(const_cast< MainWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
