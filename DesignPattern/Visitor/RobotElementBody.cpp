//
// Created by SummerFlower on 31/08/2020.
//

#include "RobotElementBody.h"

void RobotElementBody::activate(RobotVisitor* visitor)
{
    visitor->activate(this);
}
