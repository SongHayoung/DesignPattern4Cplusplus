//
// Created by SummerFlower on 16/08/2020.
//

#ifndef DESIGNPATTERN_BCONCRETEDRAWAPI_H
#define DESIGNPATTERN_BCONCRETEDRAWAPI_H

#include "DrawAPI.h"

class BConcreteDrawAPI : public DrawAPI
{
public:
    ~BConcreteDrawAPI() override {}
    void drawCircle(double x, double y, double radius) override
    {
        std::cout<<"Draw Circle with API B"<<std::endl;
        std::cout<<"Draw Circle at "<<x<<":"<<y<<" "<<radius<<std::endl;
    }
};

#endif //DESIGNPATTERN_BCONCRETEDRAWAPI_H
