#-------------------------------------------------
#
# Project created by QtCreator 2013-03-02T15:50:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tagger
TEMPLATE = app


SOURCES += main.cpp\
        win.cpp \
    tagger.cpp

HEADERS  += win.h \
    tagger.h

FORMS    += win.ui

LIBS += -L/usr/include -lboost_system -lboost_filesystem
