#-------------------------------------------------
#
# Project created by QtCreator 2017-07-24T00:45:12
#
#-------------------------------------------------

QT       += core gui x11extras

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = keyboard-sound
TEMPLATE = app

CONFIG += link_pkgconfig
CONFIG += c++11
PKGCONFIG += xcb xcb-util

SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

LIBS += -lX11 -lXext -lXtst
