//
// Created by SummerFlower on 18/08/2020.
//

#ifndef DESIGNPATTERN_ROBOT_H
#define DESIGNPATTERN_ROBOT_H

#include "RobotEye.h"
#include "RobotArm.h"
#include "RobotLeg.h"

class Robot
{
    RobotEye* robotEye;
    RobotArm* robotArm;
    RobotLeg* robotLeg;
public:
    Robot()
    {
        this->robotEye = new RobotEye();
        this->robotArm = new RobotArm();
        this->robotLeg = new RobotLeg();
    }

    void runRobot()
    {
        robotEye->run();
        robotArm->run();
        robotLeg->run();
    }

    void offRobot()
    {
        robotEye->off();
        robotArm->off();
        robotLeg->off();
    }
};

#endif //DESIGNPATTERN_ROBOT_H
