//
// Created by SummerFlower on 31/08/2020.
//

#ifndef DESIGNPATTERN_IRONMANVISITOR_H
#define DESIGNPATTERN_IRONMANVISITOR_H

#include "RobotVisitor.h"

class IronManVisitor: public RobotVisitor
{
public:
    void activate(RobotElementArm* arm) override;
    void activate(RobotElementLeg* leg) override;
    void activate(RobotElementBody* body) override;
    void activate(RobotElementSuit* suit) override;
};


#endif //DESIGNPATTERN_IRONMANVISITOR_H
