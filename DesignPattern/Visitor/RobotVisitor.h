//
// Created by SummerFlower on 31/08/2020.
//

#ifndef DESIGNPATTERN_ROBOTVISITOR_H
#define DESIGNPATTERN_ROBOTVISITOR_H

#include <iostream>

class RobotElementArm;
class RobotElementLeg;
class RobotElementBody;
class RobotElementSuit;

class RobotVisitor
{
public:
    virtual ~RobotVisitor() {}
    virtual void activate(RobotElementArm* arm) = 0;
    virtual void activate(RobotElementLeg* leg) = 0;
    virtual void activate(RobotElementBody* body) = 0;
    virtual void activate(RobotElementSuit* suit) = 0;
};

#endif //DESIGNPATTERN_ROBOTVISITOR_H
