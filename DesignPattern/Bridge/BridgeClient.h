//
// Created by SummerFlower on 16/08/2020.
//

#ifndef DESIGNPATTERN_BRIDGECLIENT_H
#define DESIGNPATTERN_BRIDGECLIENT_H

#include "AConcreteDrawAPI.h"
#include "BConcreteDrawAPI.h"
#include "Circle.h"

namespace BridgePattern
{
    void BridgePattern();
    void getCircleWithApiA();
    void getCircleWithApiB();
}

void BridgePattern::BridgePattern()
{
    getCircleWithApiA();
    getCircleWithApiB();
}

void BridgePattern::getCircleWithApiA()
{
    DrawAPI* drawApi = new AConcreteDrawAPI();
    Shape* circle = new Circle(1.0, 1.0, 1.0, drawApi);
    circle->draw();
}

void BridgePattern::getCircleWithApiB()
{
    DrawAPI* drawApi = new BConcreteDrawAPI();
    Shape* circle = new Circle(1.0, 1.0, 1.0, drawApi);
    circle->draw();
}

#endif //DESIGNPATTERN_BRIDGECLIENT_H
