/****************************************************************************
** Meta object code from reading C++ file 'Play.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GuessWin/Play.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Play.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPlayENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPlayENDCLASS = QtMocHelpers::stringData(
    "Play",
    "check",
    "",
    "getHint",
    "rateChange",
    "win",
    "start",
    "updateRate",
    "showRank",
    "back",
    "modeMsg",
    "single",
    "multi"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPlayENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    2,   70,    2, 0x08,    3 /* Private */,
       7,    0,   75,    2, 0x08,    6 /* Private */,
       8,    0,   76,    2, 0x08,    7 /* Private */,
       9,    0,   77,    2, 0x08,    8 /* Private */,
      10,    0,   78,    2, 0x08,    9 /* Private */,
      11,    0,   79,    2, 0x0a,   10 /* Public */,
      12,    0,   80,    2, 0x0a,   11 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Play::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSPlayENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPlayENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPlayENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Play, std::true_type>,
        // method 'check'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getHint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rateChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateRate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showRank'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'back'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modeMsg'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'single'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'multi'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Play::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Play *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->check(); break;
        case 1: _t->getHint(); break;
        case 2: _t->rateChange((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->updateRate(); break;
        case 4: _t->showRank(); break;
        case 5: _t->back(); break;
        case 6: { bool _r = _t->modeMsg();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->single(); break;
        case 8: _t->multi(); break;
        default: ;
        }
    }
}

const QMetaObject *Play::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Play::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPlayENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Play::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
