/****************************************************************************
** Meta object code from reading C++ file 'main.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../main/main.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Main_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Main_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Main_t qt_meta_stringdata_Main = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Main"
QT_MOC_LITERAL(1, 5, 12), // "secondwindow"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 14), // "autotestwindow"
QT_MOC_LITERAL(4, 34, 16) // "manualtestwindow"

    },
    "Main\0secondwindow\0\0autotestwindow\0"
    "manualtestwindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Main[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Main::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Main *_t = static_cast<Main *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->secondwindow(); break;
        case 1: _t->autotestwindow(); break;
        case 2: _t->manualtestwindow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Main::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Main.data,
      qt_meta_data_Main,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Main::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Main::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Main.stringdata0))
        return static_cast<void*>(const_cast< Main*>(this));
    if (!strcmp(_clname, "Ui_MainForm"))
        return static_cast< Ui_MainForm*>(const_cast< Main*>(this));
    return QWidget::qt_metacast(_clname);
}

int Main::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE