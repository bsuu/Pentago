#include "pentago.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Pentago w;
    w.show();

    return a.exec();
}
