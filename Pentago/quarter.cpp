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

void Quarter::rotate(bool b)
{
    if(b)
        {
            Point tmp;
            tmp = pointsTab[1][1];
            pointsTab[1][1] = pointsTab[1][3];
            pointsTab[1][3] = pointsTab[3][3];
            pointsTab[3][3] = pointsTab[3][1];
            pointsTab[3][1] = tmp;

            tmp = pointsTab[1][2];
            pointsTab[1][2] = pointsTab[2][3];
            pointsTab[2][3] = pointsTab[3][2];
            pointsTab[3][2] = pointsTab[2][1];
            pointsTab[2][1] = tmp;
        }
        else
        {
            Point tmp;
            tmp = pointsTab[1][1];
            pointsTab[1][1] = pointsTab[3][1];
            pointsTab[3][1] = pointsTab[3][3];
            pointsTab[3][3] = pointsTab[1][3];
            pointsTab[1][3] = tmp;

            tmp = pointsTab[1][2];
            pointsTab[1][2] = pointsTab[2][1];
            pointsTab[2][1] = pointsTab[3][2];
            pointsTab[3][2] = pointsTab[2][3];
            pointsTab[1][1] = tmp;
        }
}

Point Quarter::getPointAt(int x, int y)
{
    return this->pointsTab[x][y];
}
