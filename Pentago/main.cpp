#include "pentago.h"
#include <QApplication>
#include <QPushButton.>
#include <QVBoxLayout>
#include "string"

#include "player.h"
#include "point.h"
#include "quarter.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *widget = new QWidget();

    Quarter q1(widget);
    q1.setCoords(0, 0);
    q1.initButtons(widget);

    Quarter q2(widget);
    q2.setCoords(1, 0);
    q2.initButtons(widget);

    Quarter q3(widget);
    q3.setCoords(0, 1);
    q3.initButtons(widget);

    Quarter q4(widget);
    q4.setCoords(1, 1);
    q4.initButtons(widget);

    widget->show();

    return a.exec();
}
