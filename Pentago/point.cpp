#include "point.h"

Point::Point()
{
    this->player = nullptr;
    this->empty = true;
}

void Point::changeOwner(Player &player)
{
    this->empty = false;
    this->player = &player;
}
