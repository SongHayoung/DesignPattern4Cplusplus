//
// Created by SummerFlower on 13/08/2020.
//

#ifndef DESIGNPATTERN_EAGERINITIALIZATIONSINGLETON_H
#define DESIGNPATTERN_EAGERINITIALIZATIONSINGLETON_H

#include <iostream>

class EagerInitializationSingleton
{
    static EagerInitializationSingleton* instance;
protected:
    EagerInitializationSingleton()
    {
       std::cout<<"EagerInitializationSingleton Instance Constructed"<<std::endl;
    }
public:
    static EagerInitializationSingleton* getInstance();
    static void someStaticFunction();
};

EagerInitializationSingleton* EagerInitializationSingleton::instance = new EagerInitializationSingleton();

EagerInitializationSingleton* EagerInitializationSingleton::getInstance()
{
    return instance;
}

void EagerInitializationSingleton::someStaticFunction()
{
    std::cout<<"EagerInitializationSingleton Some Static Function Called"<<std::endl;
}

#endif //DESIGNPATTERN_EAGERINITIALIZATIONSINGLETON_H
