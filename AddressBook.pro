#-------------------------------------------------
#
# Project created by QtCreator 2018-05-12T16:10:15
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = AddressBook
TEMPLATE = app

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    addressbookentry.cpp \
    addressbook.cpp \
    addressbookcontroller.cpp

HEADERS += \
        mainwindow.h \
    addressbookentry.h \
    addressbook.h \
    addressbookcontroller.h

FORMS += \
        mainwindow.ui
