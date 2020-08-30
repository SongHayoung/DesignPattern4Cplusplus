//
// Created by SummerFlower on 31/08/2020.
//

#ifndef DESIGNPATTERN_VISITORCLIENT_H
#define DESIGNPATTERN_VISITORCLIENT_H

#include "RobotElementSuit.h"
#include "IronManVisitor.h"
#include "GundamVisitor.h"

namespace VisitorPattern
{
    void VisitorPattern();
    void buildIronMan();
    void buildGundam();
}

void VisitorPattern::VisitorPattern()
{
    buildIronMan();
    buildGundam();
}

void VisitorPattern::buildIronMan()
{
    RobotElementSuit* ironMan = new RobotElementSuit();
    ironMan->activate(new IronManVisitor());
}

void VisitorPattern::buildGundam()
{
    RobotElementSuit* gundam = new RobotElementSuit();
    gundam->activate(new GundamVisitor());
}

#endif //DESIGNPATTERN_VISITORCLIENT_H
