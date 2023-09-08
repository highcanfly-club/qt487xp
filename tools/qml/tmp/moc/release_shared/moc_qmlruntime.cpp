/****************************************************************************
** Meta object code from reading C++ file 'qmlruntime.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qmlruntime.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlruntime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDeclarativeViewer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   20,   19,   19, 0x0a,
      50,   19,   45,   19, 0x0a,
      64,   19,   19,   19, 0x0a,
      75,   19,   19,   19, 0x0a,
      85,   19,   19,   19, 0x0a,
      94,   19,   19,   19, 0x0a,
     109,   19,   19,   19, 0x0a,
     127,   19,   19,   19, 0x0a,
     163,  158,   19,   19, 0x0a,
     183,   19,   19,   19, 0x0a,
     203,   19,   19,   19, 0x0a,
     226,   19,   19,   19, 0x0a,
     246,   19,   19,   19, 0x0a,
     262,   19,   19,   19, 0x0a,
     280,   19,   19,   19, 0x0a,
     296,   19,   19,   19, 0x08,
     313,   19,   19,   19, 0x08,
     334,   19,   19,   19, 0x08,
     354,   19,   19,   19, 0x08,
     368,   19,   19,   19, 0x08,
     393,   19,   19,   19, 0x08,
     413,   19,   19,   19, 0x08,
     432,   19,   19,   19, 0x08,
     460,   19,   19,   19, 0x08,
     486,  481,   19,   19, 0x08,
     505,   19,   19,   19, 0x08,
     528,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QDeclarativeViewer[] = {
    "QDeclarativeViewer\0\0size\0sceneResized(QSize)\0"
    "bool\0open(QString)\0openFile()\0openUrl()\0"
    "reload()\0takeSnapShot()\0toggleRecording()\0"
    "toggleRecordingWithSelection()\0code\0"
    "ffmpegFinished(int)\0showProxySettings()\0"
    "proxySettingsChanged()\0rotateOrientation()\0"
    "statusChanged()\0setSlowMode(bool)\0"
    "launch(QString)\0appAboutToQuit()\0"
    "autoStartRecording()\0autoStopRecording()\0"
    "recordFrame()\0chooseRecordingOptions()\0"
    "pickRecordingFile()\0toggleFullScreen()\0"
    "changeOrientation(QAction*)\0"
    "orientationChanged()\0show\0showWarnings(bool)\0"
    "warningsWidgetOpened()\0warningsWidgetClosed()\0"
};

void QDeclarativeViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDeclarativeViewer *_t = static_cast<QDeclarativeViewer *>(_o);
        switch (_id) {
        case 0: _t->sceneResized((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 1: { bool _r = _t->open((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->openFile(); break;
        case 3: _t->openUrl(); break;
        case 4: _t->reload(); break;
        case 5: _t->takeSnapShot(); break;
        case 6: _t->toggleRecording(); break;
        case 7: _t->toggleRecordingWithSelection(); break;
        case 8: _t->ffmpegFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->showProxySettings(); break;
        case 10: _t->proxySettingsChanged(); break;
        case 11: _t->rotateOrientation(); break;
        case 12: _t->statusChanged(); break;
        case 13: _t->setSlowMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->launch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->appAboutToQuit(); break;
        case 16: _t->autoStartRecording(); break;
        case 17: _t->autoStopRecording(); break;
        case 18: _t->recordFrame(); break;
        case 19: _t->chooseRecordingOptions(); break;
        case 20: _t->pickRecordingFile(); break;
        case 21: _t->toggleFullScreen(); break;
        case 22: _t->changeOrientation((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 23: _t->orientationChanged(); break;
        case 24: _t->showWarnings((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->warningsWidgetOpened(); break;
        case 26: _t->warningsWidgetClosed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDeclarativeViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDeclarativeViewer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QDeclarativeViewer,
      qt_meta_data_QDeclarativeViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDeclarativeViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDeclarativeViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDeclarativeViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeViewer))
        return static_cast<void*>(const_cast< QDeclarativeViewer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QDeclarativeViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
