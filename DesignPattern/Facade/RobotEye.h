//
// Created by SummerFlower on 18/08/2020.
//

#ifndef DESIGNPATTERN_ROBOTEYE_H
#define DESIGNPATTERN_ROBOTEYE_H

#include <iostream>

class RobotEye
{
public:
    RobotEye() {}

    void run()
    {
        std::cout<<"Robot Eye Blinking"<<std::endl;
    }

    void off()
    {
        std::cout<<"Robot Eye off"<<std::endl;
    }
};

#endif //DESIGNPATTERN_ROBOTEYE_H
