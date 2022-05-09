QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LocalServer
TEMPLATE = app

SOURCES += \
    localserver.cpp \
    main.cpp \
    widget.cpp

HEADERS += \
    localserver.h \
    widget.h

FORMS += \
    widget.ui


QMAKE_CXXFLAGS += -std=gnu++11
