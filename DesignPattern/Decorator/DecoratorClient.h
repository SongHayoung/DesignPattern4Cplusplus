//
// Created by SummerFlower on 18/08/2020.
//

#ifndef DESIGNPATTERN_DECORATORCLIENT_H
#define DESIGNPATTERN_DECORATORCLIENT_H

#include "InstrumentPanel.h"
#include "LedPanelDecorator.h"
#include "DistancePanelDecorator.h"

namespace DecoratorPattern
{
    void DecoratorPattern();
    void buildPlanePanel();
    void buildLedPanel();
    void buildDistanceLedPanel();
}

void DecoratorPattern::DecoratorPattern()
{
    buildPlanePanel();
    buildLedPanel();
    buildDistanceLedPanel();
}

void DecoratorPattern::buildPlanePanel()
{
    Panel* panel = new InstrumentPanel();
    panel->show();
}

void DecoratorPattern::buildLedPanel()
{
    Panel* panel = new LedPanelDecorator(new InstrumentPanel);
    panel->show();
}

void DecoratorPattern::buildDistanceLedPanel()
{
    Panel* panel = new DistancePanelDecorator(new LedPanelDecorator(new InstrumentPanel));
    panel->show();
}

#endif //DESIGNPATTERN_DECORATORCLIENT_H
