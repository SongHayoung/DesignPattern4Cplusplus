//
// Created by SummerFlower on 22/08/2020.
//

#ifndef DESIGNPATTERN_COMMAND_H
#define DESIGNPATTERN_COMMAND_H

#include <iostream>

class Command
{
public:
    virtual ~Command() {}
    virtual void execute() = 0;
};

#endif //DESIGNPATTERN_COMMAND_H
