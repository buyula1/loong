QT       += core gui charts
QT       += core gui serialport

#添加数据库模块
QT      += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    hisdata.cpp \
    inlog.cpp \
    main.cpp \
    mainwindow.cpp \
    top.cpp \
    widget.cpp

HEADERS += \
    hisdata.h \
    inlog.h \
    mainwindow.h \
    top.h \
    widget.h

FORMS += \
    hisdata.ui \
    inlog.ui \
    mainwindow.ui \
    top.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    imager.qrc
