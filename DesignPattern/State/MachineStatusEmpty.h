//
// Created by SummerFlower on 28/08/2020.
//

#ifndef DESIGNPATTERN_MACHINESTATUSEMPTY_H
#define DESIGNPATTERN_MACHINESTATUSEMPTY_H

#include "MachineStatus.h"

class MachineStatusEmpty : public MachineStatus
{
public:
    ~MachineStatusEmpty() {}
    void click(CoffeeMachine* coffeeMachine) override;
};

#endif //DESIGNPATTERN_MACHINESTATUSEMPTY_H
