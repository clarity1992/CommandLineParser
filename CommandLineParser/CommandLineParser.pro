TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    commandlineparser.cpp \
    command.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    commandlineparser.h \
    command.h

