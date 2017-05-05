#ifndef POINT_H
#define POINT_H

#include "player.h"

class Point
{
private:
    int x;
    int y;
    bool empty;
    Player owner;

public:
    Point();
    Point(int,int);

    void setX(int);
    void setY(int);
    void setOwner(Player&);

    bool isEmpty();

    int getX();
    int getY();
    Player getOwner();

    void tick(Player&);
};

#endif // POINT_H
