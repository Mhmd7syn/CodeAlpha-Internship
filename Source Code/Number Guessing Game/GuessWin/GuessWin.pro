QT       += core gui \
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Play.cpp \
    changeinfo.cpp \
    data.cpp \
    guessednumber.cpp \
    home.cpp \
    login.cpp \
    main.cpp \
    newuser.cpp \
    rules.cpp \
    user.cpp \
    userprofile.cpp \
    welcome.cpp

HEADERS += \
    Play.h \
    changeinfo.h \
    data.h \
    guessednumber.h \
    home.h \
    login.h \
    newuser.h \
    rules.h \
    user.h \
    userprofile.h \
    welcome.h

FORMS += \
    Play.ui \
    changeinfo.ui \
    home.ui \
    login.ui \
    newuser.ui \
    rules.ui \
    userprofile.ui \
    welcome.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../build-GuessWin-Desktop_Qt_6_7_0_MinGW_64_bit-Debug/Files/Users.txt \
    ../build-GuessWin-Desktop_Qt_6_7_0_MinGW_64_bit-Debug/Users.txt \
    Users

RESOURCES +=
