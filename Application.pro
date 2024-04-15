QT       += core gui

QMAKE_CXXFLAGS += -DQT_DEFAULT_WINDOW_WIDTH=1024
QMAKE_CXXFLAGS += -DQT_DEFAULT_WINDOW_HEIGHT=768

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    calibrationwindow.cpp \
    main.cpp \
    mainmenu.cpp \
    statistics.cpp \
    swindow.cpp \
    to.cpp

HEADERS += \
    calibrationwindow.h \
    mainmenu.h \
    statistics.h \
    swindow.h \
    to.h

FORMS += \
    calibrationwindow.ui \
    mainmenu.ui \
    statistics.ui \
    swindow.ui \
    to.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES += \
    res/img/arrow.png
