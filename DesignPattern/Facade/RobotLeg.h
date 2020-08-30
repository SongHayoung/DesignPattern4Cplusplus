//
// Created by SummerFlower on 18/08/2020.
//

#ifndef DESIGNPATTERN_ROBOTLEG_H
#define DESIGNPATTERN_ROBOTLEG_H

#include <iostream>

class RobotLeg
{
public:
    RobotLeg() {}

    void run()
    {
        std::cout<<"Robot Leg Walking"<<std::endl;
    }

    void off()
    {
        std::cout<<"Robot Leg off"<<std::endl;
    }
};

#endif //DESIGNPATTERN_ROBOTLEG_H
