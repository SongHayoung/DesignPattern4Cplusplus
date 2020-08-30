//
// Created by SummerFlower on 26/08/2020.
//

#ifndef DESIGNPATTERN_MEMENTO_H
#define DESIGNPATTERN_MEMENTO_H

#include "State.h"

class Memento
{
    State state;
public:
    Memento(State state) : state(state) {}

    void setState(State state)
    {
        this->state = state;
    }

    State getState()
    {
        return state;
    }
};

#endif //DESIGNPATTERN_MEMENTO_H
