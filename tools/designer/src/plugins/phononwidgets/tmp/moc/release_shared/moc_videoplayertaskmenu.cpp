/****************************************************************************
** Meta object code from reading C++ file 'videoplayertaskmenu.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../videoplayertaskmenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videoplayertaskmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VideoPlayerTaskMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      32,   20,   20,   20, 0x08,
      66,   48,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VideoPlayerTaskMenu[] = {
    "VideoPlayerTaskMenu\0\0slotLoad()\0"
    "slotMimeTypes()\0newstate,oldstate\0"
    "mediaObjectStateChanged(Phonon::State,Phonon::State)\0"
};

void VideoPlayerTaskMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VideoPlayerTaskMenu *_t = static_cast<VideoPlayerTaskMenu *>(_o);
        switch (_id) {
        case 0: _t->slotLoad(); break;
        case 1: _t->slotMimeTypes(); break;
        case 2: _t->mediaObjectStateChanged((*reinterpret_cast< Phonon::State(*)>(_a[1])),(*reinterpret_cast< Phonon::State(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VideoPlayerTaskMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VideoPlayerTaskMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VideoPlayerTaskMenu,
      qt_meta_data_VideoPlayerTaskMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VideoPlayerTaskMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VideoPlayerTaskMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VideoPlayerTaskMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VideoPlayerTaskMenu))
        return static_cast<void*>(const_cast< VideoPlayerTaskMenu*>(this));
    if (!strcmp(_clname, "QDesignerTaskMenuExtension"))
        return static_cast< QDesignerTaskMenuExtension*>(const_cast< VideoPlayerTaskMenu*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.Designer.TaskMenu"))
        return static_cast< QDesignerTaskMenuExtension*>(const_cast< VideoPlayerTaskMenu*>(this));
    return QObject::qt_metacast(_clname);
}

int VideoPlayerTaskMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
