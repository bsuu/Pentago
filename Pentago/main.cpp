#include "pentago.h"
#include <QApplication>
#include "string"

#include "player.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Pentago w;
    w.show();

    Player p("Radek", true);

    return a.exec();
}
