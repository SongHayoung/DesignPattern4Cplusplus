//
// Created by SummerFlower on 31/08/2020.
//

#ifndef DESIGNPATTERN_GUNDAMVISITOR_H
#define DESIGNPATTERN_GUNDAMVISITOR_H

#include "RobotVisitor.h"

class GundamVisitor : public RobotVisitor
{
public:
    void activate(RobotElementArm* arm) override;
    void activate(RobotElementLeg* leg) override;
    void activate(RobotElementBody* body) override;
    void activate(RobotElementSuit* suit) override;

};

#endif //DESIGNPATTERN_GUNDAMVISITOR_H
