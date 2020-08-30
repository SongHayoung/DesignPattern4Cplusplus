//
// Created by SummerFlower on 18/08/2020.
//

#ifndef DESIGNPATTERN_DISTANCEPANELDECORATOR_H
#define DESIGNPATTERN_DISTANCEPANELDECORATOR_H

#include "PanelDecorator.h"

class DistancePanelDecorator : public PanelDecorator
{
    void getDistanceInfo()
    {
        std::cout<<"계기판 이동 거리 표시"<<std::endl;
    }
public:
    DistancePanelDecorator(Panel* panel) : PanelDecorator(panel) {}

    void show() override
    {
        PanelDecorator::show();
        getDistanceInfo();
    }
};

#endif //DESIGNPATTERN_DISTANCEPANELDECORATOR_H
