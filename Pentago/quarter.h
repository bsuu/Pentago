#ifndef QUARTER_H
#define QUARTER_H

#include "point.h"

class Quarter
{
public:
    Quarter();
    void rotate(bool);

private:
    Point points[3][3];
};

#endif
