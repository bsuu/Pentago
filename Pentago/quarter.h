#ifndef QUARTER_H
#define QUARTER_H

#include "point.h"

class Quarter
{
private:
    Point points[9];
public:
    Quarter();
    void rotate(bool);
    Point getPointAt(int,int);
};

#endif // QUARTER_H
