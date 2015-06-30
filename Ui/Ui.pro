#-------------------------------------------------
#
# Project created by QtCreator 2015-06-29T19:50:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Ui
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Frame/frame.cpp

HEADERS  += mainwindow.h \
    Frame/frameinfo.h

FORMS    += mainwindow.ui
