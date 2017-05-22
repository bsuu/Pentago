#include "quarter.h"

#include <QPushButton.>
#include <QWidget>

#include <iostream>

Quarter::Quarter(QWidget *parent) : QWidget(parent)
{
    this->x = 0;
    this->y = 0;

    for(int x = 0; x < 3; x++)
        for(int y = 0; y < 3; y++)
        {
            Point p(x,y);
            this->pointsTab[x][y] = p;
        }

    //initButtons(parent); MOZE KIEDYS NAJPIERW INIT COORD POTEM WTD
}

void Quarter::setCoords(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Quarter::rotate(bool b)
{
    if(b)
    {
        Point tmp = pointsTab[0][0];

        pointsTab[0][0] = pointsTab[0][2];
        pointsTab[0][2] = pointsTab[2][2];
        pointsTab[2][2] = pointsTab[2][0];
        pointsTab[2][0] = tmp;

        tmp = pointsTab[0][1];
        pointsTab[0][1] = pointsTab[1][2];
        pointsTab[1][2] = pointsTab[2][1];
        pointsTab[2][1] = pointsTab[1][0];
        pointsTab[1][0] = tmp;
    }
    else
    {
        Point tmp = pointsTab[0][0];

        pointsTab[0][0] = pointsTab[2][0];
        pointsTab[2][0] = pointsTab[2][2];
        pointsTab[2][2] = pointsTab[0][2];
        pointsTab[0][2] = tmp;

        tmp = pointsTab[0][1];
        pointsTab[0][1] = pointsTab[1][0];
        pointsTab[1][0] = pointsTab[2][1];
        pointsTab[2][1] = pointsTab[1][2];
        pointsTab[0][0] = tmp;
    }
}

Point Quarter::getPointAt(int x, int y)
{
    return this->pointsTab[x][y];
}

void Quarter::clickButton(int x, int y)
{

    Point p = getPointAt(x,y);
    qDebug(p.getOwner().getName().c_str());
}

void Quarter::initButtons(QWidget* p)
{
    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            //width 5 + 50 * x
            //height 5 + 50 * y
            QPushButton *btn = new QPushButton(p);
            btn->move(5 + 50 * x + 200 * this->x, 5 + 50 * y + 200 * this->y);

            QObject::connect(btn, SIGNAL(clicked(bool)), this, SLOT(clickButton()));

            btn->show();
        }
    }
}
