//
// Created by SummerFlower on 27/08/2020.
//

#ifndef DESIGNPATTERN_OBSERVER_H
#define DESIGNPATTERN_OBSERVER_H

#include <iostream>

class Observer
{
public:
    virtual ~Observer() {}
    virtual void update(std::string notification) = 0;
};

#endif //DESIGNPATTERN_OBSERVER_H
