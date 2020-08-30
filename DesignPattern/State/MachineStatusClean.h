//
// Created by SummerFlower on 28/08/2020.
//

#ifndef DESIGNPATTERN_MACHINESTATUSCLEAN_H
#define DESIGNPATTERN_MACHINESTATUSCLEAN_H

#include "MachineStatus.h"

class MachineStatusClean : public MachineStatus
{
public:
    ~MachineStatusClean() {}
    void click(CoffeeMachine* coffeeMachine) override;
};

#endif //DESIGNPATTERN_MACHINESTATUSCLEAN_H
