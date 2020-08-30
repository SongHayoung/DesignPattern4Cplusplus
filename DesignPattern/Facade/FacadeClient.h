//
// Created by SummerFlower on 18/08/2020.
//

#ifndef DESIGNPATTERN_FACADECLIENT_H
#define DESIGNPATTERN_FACADECLIENT_H

#include "Robot.h"

namespace FacadePattern
{
    void FacadePattern();
    void runRobot();
}

void FacadePattern::FacadePattern()
{
    runRobot();
}

void FacadePattern::runRobot()
{
    Robot* robot = new Robot();
    robot->runRobot();
    robot->offRobot();
}

#endif //DESIGNPATTERN_FACADECLIENT_H
