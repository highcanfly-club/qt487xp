/****************************************************************************
** Meta object code from reading C++ file 'engine.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../engine.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'engine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Engine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,    8,    7,    7, 0x05,
      79,   60,    7,    7, 0x05,
     119,  104,    7,    7, 0x05,
     156,  149,    7,    7, 0x05,
     193,  184,    7,    7, 0x05,
     221,  184,    7,    7, 0x05,
     256,  247,    7,    7, 0x05,
     286,  247,    7,    7, 0x05,
     344,  314,    7,    7, 0x05,
     399,  374,    7,    7, 0x05,
     471,  448,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     511,    7,    7,    7, 0x0a,
     528,    7,    7,    7, 0x0a,
     544,    7,    7,    7, 0x0a,
     561,  554,    7,    7, 0x0a,
     599,  554,    7,    7, 0x0a,
     638,    7,    7,    7, 0x08,
     658,  652,    7,    7, 0x08,
     691,    7,    7,    7, 0x08,
     717,  708,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Engine[] = {
    "Engine\0\0mode,state\0"
    "stateChanged(QAudio::Mode,QAudio::State)\0"
    "message,durationMs\0infoMessage(QString,int)\0"
    "heading,detail\0errorMessage(QString,QString)\0"
    "format\0formatChanged(QAudioFormat)\0"
    "duration\0bufferLengthChanged(qint64)\0"
    "dataLengthChanged(qint64)\0position\0"
    "recordPositionChanged(qint64)\0"
    "playPositionChanged(qint64)\0"
    "rmsLevel,peakLevel,numSamples\0"
    "levelChanged(qreal,qreal,int)\0"
    "position,length,spectrum\0"
    "spectrumChanged(qint64,qint64,FrequencySpectrum)\0"
    "position,length,buffer\0"
    "bufferChanged(qint64,qint64,QByteArray)\0"
    "startRecording()\0startPlayback()\0"
    "suspend()\0device\0setAudioInputDevice(QAudioDeviceInfo)\0"
    "setAudioOutputDevice(QAudioDeviceInfo)\0"
    "audioNotify()\0state\0"
    "audioStateChanged(QAudio::State)\0"
    "audioDataReady()\0spectrum\0"
    "spectrumChanged(FrequencySpectrum)\0"
};

void Engine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Engine *_t = static_cast<Engine *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QAudio::Mode(*)>(_a[1])),(*reinterpret_cast< QAudio::State(*)>(_a[2]))); break;
        case 1: _t->infoMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->formatChanged((*reinterpret_cast< const QAudioFormat(*)>(_a[1]))); break;
        case 4: _t->bufferLengthChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->dataLengthChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->recordPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->playPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->levelChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->spectrumChanged((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< const FrequencySpectrum(*)>(_a[3]))); break;
        case 10: _t->bufferChanged((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 11: _t->startRecording(); break;
        case 12: _t->startPlayback(); break;
        case 13: _t->suspend(); break;
        case 14: _t->setAudioInputDevice((*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[1]))); break;
        case 15: _t->setAudioOutputDevice((*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[1]))); break;
        case 16: _t->audioNotify(); break;
        case 17: _t->audioStateChanged((*reinterpret_cast< QAudio::State(*)>(_a[1]))); break;
        case 18: _t->audioDataReady(); break;
        case 19: _t->spectrumChanged((*reinterpret_cast< const FrequencySpectrum(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Engine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Engine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Engine,
      qt_meta_data_Engine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Engine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Engine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Engine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Engine))
        return static_cast<void*>(const_cast< Engine*>(this));
    return QObject::qt_metacast(_clname);
}

int Engine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void Engine::stateChanged(QAudio::Mode _t1, QAudio::State _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Engine::infoMessage(const QString & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Engine::errorMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Engine::formatChanged(const QAudioFormat & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Engine::bufferLengthChanged(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Engine::dataLengthChanged(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Engine::recordPositionChanged(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Engine::playPositionChanged(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Engine::levelChanged(qreal _t1, qreal _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Engine::spectrumChanged(qint64 _t1, qint64 _t2, const FrequencySpectrum & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Engine::bufferChanged(qint64 _t1, qint64 _t2, const QByteArray & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
