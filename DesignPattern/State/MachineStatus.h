//
// Created by SummerFlower on 28/08/2020.
//

#ifndef DESIGNPATTERN_MACHINESTATUS_H
#define DESIGNPATTERN_MACHINESTATUS_H

#include <iostream>
#include "CoffeeMachine.h"

class CoffeeMachine;
class MachineStatus
{
public:
    virtual ~MachineStatus() {}
    virtual void click(CoffeeMachine* machine) = 0;
};

#endif //DESIGNPATTERN_MACHINESTATUS_H
