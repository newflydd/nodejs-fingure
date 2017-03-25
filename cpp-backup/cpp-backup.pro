TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

DISTFILES += \
    ARITH_LIB.lib \
    SynoAPIEx.lib \
    ARITH_LIB.dll \
    SynoAPIEx.dll

HEADERS += \
    ARITH_LIB.h \
    Protocol.h \
    main.h

LIBS += \
    "D:\\workspace-npm\\fingure\\cpp-backup\\ARITH_LIB.lib" \
    "D:\\workspace-npm\\fingure\\cpp-backup\\SynoAPIEx.lib"
