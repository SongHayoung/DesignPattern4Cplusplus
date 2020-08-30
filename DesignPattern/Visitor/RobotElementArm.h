//
// Created by SummerFlower on 31/08/2020.
//

#ifndef DESIGNPATTERN_ROBOTELEMENTARM_H
#define DESIGNPATTERN_ROBOTELEMENTARM_H

#include "RobotElement.h"

class RobotElementArm : public RobotElement
{
    std::string position;
public:
    RobotElementArm(std::string position);
    void activate(RobotVisitor* visitor) override;
};

#endif //DESIGNPATTERN_ROBOTELEMENTARM_H
