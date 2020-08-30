//
// Created by SummerFlower on 31/08/2020.
//

#include "RobotElementArm.h"
RobotElementArm::RobotElementArm(std::string position) : position(position) {}

void RobotElementArm::activate(RobotVisitor* visitor)
{
    visitor->activate(this);
}