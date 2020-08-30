//
// Created by SummerFlower on 31/08/2020.
//

#include "IronManVisitor.h"

void IronManVisitor::activate(RobotElementArm* arm)
{
    std::cout<<"Iron Man Arm on Activation"<<std::endl;
}

void IronManVisitor::activate(RobotElementLeg* leg)
{
    std::cout<<"Iron Man Leg on Activation"<<std::endl;
}

void IronManVisitor::activate(RobotElementBody* body)
{
    std::cout<<"Iron Man Body on Activation"<<std::endl;
}

void IronManVisitor::activate(RobotElementSuit* suit)
{
    std::cout<<"Iron Man Suit on Active"<<std::endl;
    std::cout<<"Let's Roll!!"<<std::endl;
}