
#include <QApplication>

#include "batchrename.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    BatchReName rn;
    rn.show();

    return app.exec();
}
