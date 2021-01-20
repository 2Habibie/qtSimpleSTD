#include "simplestd.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimpleSTD w;
    w.show();
    return a.exec();
}
