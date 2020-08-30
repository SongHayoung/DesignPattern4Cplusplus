//
// Created by SummerFlower on 27/08/2020.
//

#ifndef DESIGNPATTERN_CONCRETEOBSERVER_H
#define DESIGNPATTERN_CONCRETEOBSERVER_H

#include "Observer.h"

class ConcreteObserver : public Observer
{
    std::string name;
public:
    ConcreteObserver(std::string name) : name(name) {}
    ~ConcreteObserver() {}
    void update(std::string notification) override
    {
        std::cout<<name<<" received : "<<notification<<std::endl;
    }
};

#endif //DESIGNPATTERN_CONCRETEOBSERVER_H
