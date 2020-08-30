//
// Created by SummerFlower on 31/08/2020.
//

#ifndef DESIGNPATTERN_ROBOTELEMENTSUIT_H
#define DESIGNPATTERN_ROBOTELEMENTSUIT_H

#include <list>
#include "RobotElement.h"
#include "RobotElementArm.h"
#include "RobotElementLeg.h"
#include "RobotElementBody.h"

class RobotElementSuit : public RobotElement
{
    std::list<RobotElement*> robotElements;
public:
    RobotElementSuit ();

    void activate(RobotVisitor* visitor) override;
};

#endif //DESIGNPATTERN_ROBOTELEMENTSUIT_H
