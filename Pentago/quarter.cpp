#include "quarter.h"

Quarter::Quarter()
{
    for(int x = 0; x < 9; x++)
        for(int y = 0; y < 9; y++)
            points[x][y] = Point();
}

void Quarter::rotate(bool rotation)
{
    int x, y;

    for(int i = 1; i < 10; i++) {
        if(i%3 == 0)
        {
            x+=2;
            if(x > 3)
            {
                y+=x-3;
                x=3;
            }
        }
        else if (i%2 == 1)
        {
            int tmp = x;
            x = y;
            y = tmp;
        }
        else
        {
            if(x == 1)
            {
                y-=2;
            }
            else if(x == 2)
            {
                x-=1;
                y-=1;
            }
            else
            {
                x-=2;
            }
        }
    }
}
