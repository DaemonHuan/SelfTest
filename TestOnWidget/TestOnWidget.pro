QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

include($$PWD/../MainTestProject.pri)
#include($$PWD/../plugins/QScintilla2_11_6/Qt4Qt5/QScintilla.pri)

DEFINES += APP_VERSION=\\\"1.0.0\\\"
message($$QMAKE_PROJECT_NAME -D: $$DEFINES)
message($$QMAKE_PROJECT_NAME -I: $$INCLUDEPATH)
message($$QMAKE_PROJECT_NAME -L: $$DEPENDPATH)

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    jmetaclass.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    jmetaclass.h \
    mainwindow.h


#SOURCES += scintillawidget.cpp
#HEADERS += scintillawidget.h

FORMS += \
    mainwindow.ui

RESOURCES += \
    ../resources/resource.qrc
