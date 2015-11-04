#-------------------------------------------------
#
# Project created by QtCreator 2015-03-12T23:32:07
#
#-------------------------------------------------

QT       += core gui

TARGET = Copyright_LOLOLOL
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    string_table.cpp \
    arp_table.cpp \
    ARPTable.cpp

HEADERS  += mainwindow.h \
    header.h \
    string_table.h \
    arp_table.h \
    ARPTable.h

FORMS    += mainwindow.ui \
    ARPTable.ui

LIBS += -lws2_32
LIBS = -lws2_32 -liphlpapi
