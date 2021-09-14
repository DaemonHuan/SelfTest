#include <QApplication>
#include <QCoreApplication>

#include <QDir>
#include <QDebug>

#include "mainwindow.h"
//#include "scintillawidget.h"

#define APP_BIN_DIR QCoreApplication::applicationDirPath()

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qDebug() <<APP_VERSION <<__TIMESTAMP__;

    qDebug() <<APP_BIN_DIR <<QCoreApplication::applicationFilePath();
    qDebug() <<QCoreApplication::libraryPaths() <<__INCLUDE_LEVEL__;

    MainWindow w;
    w.show();

    return a.exec();
}
