#-------------------------------------------------
#
# Project created by QtCreator 2015-06-13T02:43:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Unit_Converter
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    distance.cpp \
    temprature.cpp \
    currency.cpp \
    milestokm.cpp \
    kmtomiles.cpp \
    centofara.cpp \
    faratocen.cpp \
    keltocel.cpp \
    celtokel.cpp \
    dolltosl.cpp \
    sltodoll.cpp

HEADERS  += mainwindow.h \
    distance.h \
    temprature.h \
    currency.h \
    milestokm.h \
    kmtomiles.h \
    centofara.h \
    faratocen.h \
    keltocel.h \
    celtokel.h \
    dolltosl.h \
    sltodoll.h

FORMS    += mainwindow.ui \
    distance.ui \
    temprature.ui \
    currency.ui \
    milestokm.ui \
    kmtomiles.ui \
    centofara.ui \
    faratocen.ui \
    keltocel.ui \
    celtokel.ui \
    dolltosl.ui \
    sltodoll.ui
