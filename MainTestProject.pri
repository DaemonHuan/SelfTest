
message(@@)
message(@@)
message(** ==== ** ==== ** ==== ** ==== ** ==== ** ==== **)
message(QT_VERSION: $$[QT_VERSION] $$[QT_INSTALL_PREFIX])
message(SYTEM     : $$QMAKE_HOST.os $$QMAKE_HOST.version $$QMAKE_HOST.arch CPU($$QMAKE_HOST.cpu_count))
message(PROJECT   : $$QMAKE_PROJECT_NAME $$PWD)
message(NEWCREATE : jk @ 2021.09.08)
message(** ==== ** ==== ** ==== ** ==== ** ==== ** ==== **)

PROJECT_BINDIR *= $$PWD/.

PROJECT_INCLUDEPATH *= $$PROJECT_BINDIR/include $$PROJECT_BINDIR/plugins
INCLUDEPATH += $$PROJECT_INCLUDEPATH
message(** INCLUDEPATH: $$INCLUDEPATH)

PROJECT_LIBPATH *= $$PROJECT_BINDIR/libraries
DEPENDPATH += $$PROJECT_LIBPATH
message(** DEPENDPATH: $$DEPENDPATH)
