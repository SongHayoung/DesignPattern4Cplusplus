//
// Created by SummerFlower on 16/08/2020.
//

#ifndef DESIGNPATTERN_DRAWAPI_H
#define DESIGNPATTERN_DRAWAPI_H

#include <iostream>

class DrawAPI
{
public:
    virtual ~DrawAPI() {};
    virtual void drawCircle(double x, double y, double radius) = 0;
};

#endif //DESIGNPATTERN_DRAWAPI_H
