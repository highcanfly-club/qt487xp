/****************************************************************************
** Meta object code from reading C++ file 'textedit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../textedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TextEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      20,    9,    9,    9, 0x08,
      36,    9,   31,    9, 0x08,
      47,    9,   31,    9, 0x08,
      60,    9,    9,    9, 0x08,
      72,    9,    9,    9, 0x08,
      91,    9,    9,    9, 0x08,
     106,    9,    9,    9, 0x08,
     117,    9,    9,    9, 0x08,
     133,    9,    9,    9, 0x08,
     148,  146,    9,    9, 0x08,
     170,  168,    9,    9, 0x08,
     199,  188,    9,    9, 0x08,
     214,    9,    9,    9, 0x08,
     228,  226,    9,    9, 0x08,
     255,  248,    9,    9, 0x08,
     297,    9,    9,    9, 0x08,
     321,    9,    9,    9, 0x08,
     344,    9,    9,    9, 0x08,
     352,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TextEdit[] = {
    "TextEdit\0\0fileNew()\0fileOpen()\0bool\0"
    "fileSave()\0fileSaveAs()\0filePrint()\0"
    "filePrintPreview()\0filePrintPdf()\0"
    "textBold()\0textUnderline()\0textItalic()\0"
    "f\0textFamily(QString)\0p\0textSize(QString)\0"
    "styleIndex\0textStyle(int)\0textColor()\0"
    "a\0textAlign(QAction*)\0format\0"
    "currentCharFormatChanged(QTextCharFormat)\0"
    "cursorPositionChanged()\0clipboardDataChanged()\0"
    "about()\0printPreview(QPrinter*)\0"
};

void TextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TextEdit *_t = static_cast<TextEdit *>(_o);
        switch (_id) {
        case 0: _t->fileNew(); break;
        case 1: _t->fileOpen(); break;
        case 2: { bool _r = _t->fileSave();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->fileSaveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->filePrint(); break;
        case 5: _t->filePrintPreview(); break;
        case 6: _t->filePrintPdf(); break;
        case 7: _t->textBold(); break;
        case 8: _t->textUnderline(); break;
        case 9: _t->textItalic(); break;
        case 10: _t->textFamily((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->textSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->textStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->textColor(); break;
        case 14: _t->textAlign((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 15: _t->currentCharFormatChanged((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        case 16: _t->cursorPositionChanged(); break;
        case 17: _t->clipboardDataChanged(); break;
        case 18: _t->about(); break;
        case 19: _t->printPreview((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TextEdit::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TextEdit,
      qt_meta_data_TextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TextEdit))
        return static_cast<void*>(const_cast< TextEdit*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
