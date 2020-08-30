//
// Created by SummerFlower on 18/08/2020.
//

#ifndef DESIGNPATTERN_ROBOTARM_H
#define DESIGNPATTERN_ROBOTARM_H

#include <iostream>

class RobotArm
{
public:
    RobotArm() {}

    void run()
    {
        std::cout<<"Robot Arm Shaking"<<std::endl;
    }

    void off()
    {
        std::cout<<"Robot Arm off"<<std::endl;
    }
};

#endif //DESIGNPATTERN_ROBOTARM_H
