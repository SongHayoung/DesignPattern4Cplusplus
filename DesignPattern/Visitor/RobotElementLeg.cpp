//
// Created by SummerFlower on 31/08/2020.
//

#include "RobotElementLeg.h"
RobotElementLeg::RobotElementLeg(std::string position) : position(position) {}

void RobotElementLeg::activate(RobotVisitor* visitor)
{
    visitor->activate(this);
}