TEMPLATE    = app
TARGET      = Game
QT          = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    MainWindowEvents.cpp \
    dateprocessor.cpp \
    main.cpp \
    mainwindow.cpp

FORMS += \
    mainwindow.ui

HEADERS += \
    mainwindow.h
