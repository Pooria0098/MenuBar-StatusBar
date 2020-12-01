#-------------------------------------------------
#
# Project created by QtCreator 2020-03-10T09:23:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project_No_1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog_open.cpp \
    dialog_new.cpp \
    newwindow.cpp

HEADERS  += mainwindow.h \
    dialog_open.h \
    dialog_new.h \
    newwindow.h

FORMS    += mainwindow.ui \
    dialog_open.ui \
    dialog_new.ui \
    newwindow.ui

RESOURCES += \
    src.qrc
