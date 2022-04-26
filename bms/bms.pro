QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    loginwindow.cpp \
    mainwindow.cpp \
    professor.cpp \
    student.cpp

HEADERS += \
    horizontaltab.h \
    loginwindow.h \
    mainwindow.h \
    professor.h \
    student.h

FORMS += \
    loginwindow.ui \
    mainwindow.ui \
    professor.ui \
    student.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

DISTFILES += \
    data/blocks.csv \
    data/faculty.txt \
    data/professor.txt \
    data/reservations/friday.csv \
    data/reservations/monday.csv \
    data/reservations/saturday.csv \
    data/reservations/sunday.csv \
    data/reservations/sunday.db \
    data/reservations/thursday.csv \
    data/reservations/tuesday.csv \
    data/reservations/wednesday.csv \
    data/sample.txt
