//
// Created by SummerFlower on 31/08/2020.
//

#ifndef DESIGNPATTERN_ROBOTELEMENTLEG_H
#define DESIGNPATTERN_ROBOTELEMENTLEG_H

#include "RobotElement.h"

class RobotElementLeg : public RobotElement
{
    std::string position;
public:
    RobotElementLeg(std::string position);
    void activate(RobotVisitor* visitor) override;
};

#endif //DESIGNPATTERN_ROBOTELEMENTLEG_H
