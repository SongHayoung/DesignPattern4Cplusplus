//
// Created by SummerFlower on 13/08/2020.
//

#ifndef DESIGNPATTERN_SINGLETONCLIENT_H
#define DESIGNPATTERN_SINGLETONCLIENT_H

#include "EagerInitializationSingleton.h"
#include "LazyInitializationSingleton.h"
#include "TemplateSingleton.h"
#include "PhoenixSingleton.h"

namespace SingletonPattern
{
    void SingletonPattern();
    void getEagerInitializationSingletonPattern();
    void getLazyInitializationSingletonPattern();
    void getPhoenixSingleton();
}

void SingletonPattern::SingletonPattern()
{
    getPhoenixSingleton();
}

void SingletonPattern::getLazyInitializationSingletonPattern()
{
    LazyInitializationSingleton::someStaticFunction();
    LazyInitializationSingleton* instance = LazyInitializationSingleton::getInstance();
}

void SingletonPattern::getEagerInitializationSingletonPattern()
{
    EagerInitializationSingleton::someStaticFunction();
    EagerInitializationSingleton* callFirst = EagerInitializationSingleton::getInstance();
    EagerInitializationSingleton* callSecond = EagerInitializationSingleton::getInstance();
    std::cout<<"MEMORY OF FIRST : "<<(void*)&callFirst<<std::endl;
    std::cout<<"MEMORY OF SECOND : "<<(void*)&callSecond<<std::endl;
}

void SingletonPattern::getPhoenixSingleton()
{
    PhoenixSingleton& phoenixSingleton = PhoenixSingleton::GetInstance();
    std::cout<<"MEMORY OF FIRST : "<<(void*)&phoenixSingleton<<std::endl;

}

#endif //DESIGNPATTERN_SINGLETONCLIENT_H
