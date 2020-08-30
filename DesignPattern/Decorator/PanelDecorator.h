//
// Created by SummerFlower on 18/08/2020.
//

#ifndef DESIGNPATTERN_PANELDECORATOR_H
#define DESIGNPATTERN_PANELDECORATOR_H

#include "Panel.h"

class PanelDecorator : public Panel
{
    Panel* panel;
public:
    PanelDecorator(Panel* panel) {
        this->panel = panel;
    }

    ~PanelDecorator() override {};

    void show() override {
        panel->show();
    }
};

#endif //DESIGNPATTERN_PANELDECORATOR_H
