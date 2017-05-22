#ifndef QUARTER_H
#define QUARTER_H

#include "point.h"

#include <QWidget>

class Quarter : public QWidget
{
Q_OBJECT

private:
    Point pointsTab[3][3];
    int x;
    int y;

public:
    Quarter(QWidget *parent = 0);

    void rotate(bool);
    void initButtons(QWidget*);
    void setCoords(int,int);



    Point getPointAt(int,int);

public slots:
    void clickButton(int, int);
};

#endif // QUARTER_H
