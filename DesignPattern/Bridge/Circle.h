//
// Created by SummerFlower on 16/08/2020.
//

#ifndef DESIGNPATTERN_CIRCLE_H
#define DESIGNPATTERN_CIRCLE_H

#include "Shape.h"
#include "DrawAPI.h"

class Circle : public Shape
{
    DrawAPI* drawApi;
    double x;
    double y;
    double radius;
public:
    Circle(double x, double y, double radius, DrawAPI* drawApi)
    {
        this->x = x;
        this->y = y;
        this->radius = radius;
        this->drawApi = drawApi;
    }

    void draw()
    {
        drawApi->drawCircle(x, y, radius);
    }
};

#endif //DESIGNPATTERN_CIRCLE_H
