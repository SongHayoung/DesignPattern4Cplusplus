//
// Created by SummerFlower on 28/08/2020.
//

#ifndef DESIGNPATTERN_COFFEEMACHINE_H
#define DESIGNPATTERN_COFFEEMACHINE_H

#include "MachineStatusRun.h"
#include "MachineStatusEmpty.h"
#include "MachineStatusClean.h"

class CoffeeMachine
{
    int cup;
    MachineStatus* status;
public:
    CoffeeMachine();
    int getCup();
    void useCup();
    void setCoffeeStatus(MachineStatus* status);
    void getCoffee();
    bool isClean();
    bool isEmpty();
};


#endif //DESIGNPATTERN_COFFEEMACHINE_H
