#include "quarter.h"

Quarter::Quarter(void)
{
    for(int x = 0; x < 3; x++)
        for(int y = 0; y < 3; y++)
        {
            Point p(x,y);
            this->pointsTab[x][y] = p;
        }
}

void Quarter::rotate(void)
{
    //TODO
}

Point Quarter::getPointAt(int x, int y)
{
    return this->pointsTab[x][y];
}
