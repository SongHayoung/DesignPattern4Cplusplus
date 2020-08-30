//
// Created by SummerFlower on 13/08/2020.
//

#ifndef DESIGNPATTERN_LAZYINITIALIZATIONSINGLETON_H
#define DESIGNPATTERN_LAZYINITIALIZATIONSINGLETON_H

#include <iostream>

class LazyInitializationSingleton
{
    static LazyInitializationSingleton* instance;
protected:
    LazyInitializationSingleton()
    {
        std::cout<<"LazyInitializationSingleton Instance Constructed"<<std::endl;
    }
public:
    static LazyInitializationSingleton* getInstance();
    static void someStaticFunction();
};

LazyInitializationSingleton* LazyInitializationSingleton::instance = nullptr;

LazyInitializationSingleton* LazyInitializationSingleton::getInstance()
{
    if(instance == nullptr)
        instance = new LazyInitializationSingleton();
    return instance;
}

void LazyInitializationSingleton::someStaticFunction()
{
    std::cout<<"LazyInitializationSingleton Some Static Function Called"<<std::endl;
}


#endif //DESIGNPATTERN_LAZYINITIALIZATIONSINGLETON_H
