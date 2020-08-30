//
// Created by SummerFlower on 18/08/2020.
//

#ifndef DESIGNPATTERN_LEDPANELDECORATOR_H
#define DESIGNPATTERN_LEDPANELDECORATOR_H

#include "PanelDecorator.h"

class LedPanelDecorator : public PanelDecorator
{
    void getLedLights()
    {
        std::cout<<"계기판 LED 점등"<<std::endl;
    }
public:
    LedPanelDecorator(Panel* panel) : PanelDecorator(panel) {}

    void show() override
    {
        PanelDecorator::show();
        getLedLights();
    }
};

#endif //DESIGNPATTERN_LEDPANELDECORATOR_H
