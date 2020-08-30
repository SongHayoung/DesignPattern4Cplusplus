//
// Created by SummerFlower on 18/08/2020.
//

#ifndef DESIGNPATTERN_PANEL_H
#define DESIGNPATTERN_PANEL_H

#include <iostream>

class Panel
{
public:
    virtual ~Panel() {};
    virtual void show() = 0;
};

#endif //DESIGNPATTERN_PANEL_H
