//
// Created by SummerFlower on 31/08/2020.
//

#ifndef DESIGNPATTERN_ROBOTELEMENTBODY_H
#define DESIGNPATTERN_ROBOTELEMENTBODY_H

#include "RobotElement.h"

class RobotElementBody : public RobotElement
{
public:
    void activate(RobotVisitor* visitor) override;
};

#endif //DESIGNPATTERN_ROBOTELEMENTBODY_H
