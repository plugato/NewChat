#-------------------------------------------------
#
# Project created by QtCreator 2013-10-21T16:43:54
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ChatTcpServer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    chatserver.cpp \
    clienteconnection.cpp \
    chatsocket.cpp \
    package.cpp \
    sendmessagepackage.cpp \
    receivemessagepackage.cpp

HEADERS  += mainwindow.h \
    chatserver.h \
    clienteconnection.h \
    chatsocket.h \
    package.h \
    sendmessagepackage.h \
    receivemessagepackage.h

FORMS    += mainwindow.ui

CONFIG += mobility
MOBILITY = 

