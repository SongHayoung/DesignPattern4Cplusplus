//
// Created by SummerFlower on 31/08/2020.
//

#include "GundamVisitor.h"

void GundamVisitor::activate(RobotElementArm* arm)
{
    std::cout<<"Gundam Arm on Activation"<<std::endl;
}

void GundamVisitor::activate(RobotElementLeg* leg)
{
    std::cout<<"Gundam Leg on Activation"<<std::endl;
}

void GundamVisitor::activate(RobotElementBody* body)
{
    std::cout<<"Gundam Body on Activation"<<std::endl;
}

void GundamVisitor::activate(RobotElementSuit* suit)
{
    std::cout<<"Gundam Robot on Activation"<<std::endl;
    std::cout<<"アムロ行きます！！"<<std::endl;
}