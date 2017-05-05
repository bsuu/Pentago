#include "point.h"

Point::Point()
{
    this->x = 0;
    this->y = 0;
    this->empty = true;
}

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
    this->empty = true;
}

void Point::tick(Player & owner)
{
    this->owner = owner;
    this->empty = false;
}

//SETTERS
void Point::setX(int x)
{
    this->x = x;
}

void Point::setY(int y)
{
    this->y = y;
}

void Point::setOwner(Player & owner)
{
    this->owner = owner;
}

//GETTERS
bool Point::isEmpty()
{
    return this->empty;
}

int Point::getX()
{
    return this->x;
}

int Point::getY()
{
    return this->y;
}

Player Point::getOwner()
{
    return this->owner;
}
