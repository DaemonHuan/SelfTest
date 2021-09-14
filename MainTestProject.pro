
TEMPLATE = subdirs

CONFIG += ordered qt

OTHER_FILES += \
    MainTestProject.pri \
    version.log \
    LICENSE \
    README.md

SUBDIRS += \
    ReNameUI \
    TestOnQml \
    TestOnWidget

maintest.commands = include(MainTestProject.pri)
