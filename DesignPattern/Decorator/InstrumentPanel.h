//
// Created by SummerFlower on 18/08/2020.
//

#ifndef DESIGNPATTERN_INSTRUMENTPANEL_H
#define DESIGNPATTERN_INSTRUMENTPANEL_H

#include "Panel.h"

class InstrumentPanel : public Panel
{
public:
    ~InstrumentPanel() override {};

    void show() override
    {
        std::cout<<"차량 계기판 표시"<<std::endl;
    }
};

#endif //DESIGNPATTERN_INSTRUMENTPANEL_H
