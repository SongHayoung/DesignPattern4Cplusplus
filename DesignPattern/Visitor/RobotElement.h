//
// Created by SummerFlower on 31/08/2020.
//

#ifndef DESIGNPATTERN_ROBOTELEMENT_H
#define DESIGNPATTERN_ROBOTELEMENT_H

#include "RobotVisitor.h"

class RobotElement
{
public:
    virtual ~RobotElement() {}
    virtual void activate(RobotVisitor* visitor) = 0;
};

#endif //DESIGNPATTERN_ROBOTELEMENT_H
