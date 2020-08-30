//
// Created by SummerFlower on 13/08/2020.
//

#ifndef DESIGNPATTERN_PROTOTYPE_H
#define DESIGNPATTERN_PROTOTYPE_H

#include <iostream>

class Prototype
{
public:
    virtual Prototype* clone() = 0;
    virtual void getInfo() = 0;
};

#endif //DESIGNPATTERN_PROTOTYPE_H
