//
// Created by SummerFlower on 16/08/2020.
//

#ifndef DESIGNPATTERN_ACONCRETEDRAWAPI_H
#define DESIGNPATTERN_ACONCRETEDRAWAPI_H

#include "DrawAPI.h"

class AConcreteDrawAPI : public DrawAPI
{
public:
    ~AConcreteDrawAPI() override {}
    void drawCircle(double x, double y, double radius) override
    {
        std::cout<<"Draw Circle with API A"<<std::endl;
        std::cout<<"Draw Circle at "<<x<<":"<<y<<" "<<radius<<std::endl;
    }
};

#endif //DESIGNPATTERN_ACONCRETEDRAWAPI_H
