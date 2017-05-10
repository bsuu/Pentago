#ifndef QUARTER_H
#define QUARTER_H

#include "point.h"

class Quarter
{
private:
    Point points[9]; // TOREMOVE
    Point pointsTab[3][3];
public:
    Quarter(void);
    void rotate(void);
    Point getPointAt(int,int);
};

#endif // QUARTER_H
