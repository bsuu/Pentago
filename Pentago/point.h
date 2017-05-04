#ifndef POINT_H
#define POINT_H


#include "player.h"

class Point
{
private:
    bool empty;
    Player* player;
public:
    Point();
    void changeOwner(Player &);
};

#endif // POINT_H
