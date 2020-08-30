//
// Created by SummerFlower on 28/08/2020.
//

#ifndef DESIGNPATTERN_COFFEESTATUSRUN_H
#define DESIGNPATTERN_COFFEESTATUSRUN_H

#include "MachineStatus.h"

class CoffeeStatusRun : public MachineStatus
{
public:
    ~CoffeeStatusRun() {}
    void click(CoffeeMachine* coffeeMachine) override;
};

#endif //DESIGNPATTERN_COFFEESTATUSRUN_H
