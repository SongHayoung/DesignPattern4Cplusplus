//
// Created by SummerFlower on 31/08/2020.
//

#include "RobotElementSuit.h"


RobotElementSuit::RobotElementSuit ()
{
    robotElements.push_back(new RobotElementArm("Right"));
    robotElements.push_back(new RobotElementArm("Left"));
    robotElements.push_back(new RobotElementLeg("Right"));
    robotElements.push_back(new RobotElementLeg("Left"));
    robotElements.push_back(new RobotElementBody());
}

void RobotElementSuit::activate(RobotVisitor* visitor)
{
    for(RobotElement* element : robotElements)
        element->activate(visitor);
    visitor->activate(this);
}
