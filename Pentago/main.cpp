#include "pentago.h"
#include <QApplication>
#include "string"

#include "player.h"
#include "point.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Pentago w;
    w.show();

    Player p("Radek", true);
    Point pp(3,3);

    return a.exec();
}
