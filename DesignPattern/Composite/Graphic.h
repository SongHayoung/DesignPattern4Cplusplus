//
// Created by SummerFlower on 17/08/2020.
//

#ifndef DESIGNPATTERN_GRAPHIC_H
#define DESIGNPATTERN_GRAPHIC_H

#include <iostream>
#include <vector>
#include <string>

class Graphic
{
public:
    virtual ~Graphic() {};
    virtual void show() = 0;
};

#endif //DESIGNPATTERN_GRAPHIC_H
