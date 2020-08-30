//
// Created by SummerFlower on 28/08/2020.
//

#ifndef DESIGNPATTERN_STATECLIENT_H
#define DESIGNPATTERN_STATECLIENT_H

#include "CoffeeMachine.h"

namespace StatePattern
{
    void StatePattern();
}

void StatePattern::StatePattern()
{
    CoffeeMachine* coffeeMachine = new CoffeeMachine();
    for(int i = 0; i < 20; i++)
        coffeeMachine->getCoffee();
}

#endif //DESIGNPATTERN_STATECLIENT_H
