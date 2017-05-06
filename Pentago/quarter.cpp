#include "quarter.h"

Quarter::Quarter()
{
    int k = 0;

    for(int x = 0; x < 3; x++)
        for(int y = 0; y < 3; y++)
        {
            Point p(x,y);
            this->points[k] = p;
            k++;
        }
}

void Quarter::rotate(bool rotation)
{
    //ROBOTA PATRYCZKA
    if(rotation)
        int i = 0;
}

Point Quarter::getPointAt(int x, int y)
{
    for(int i = 0; i < 9; i++)
        if(points[i].getX() == x && points[i].getY() == y)
            return points[i];

    return nullptr;
}
