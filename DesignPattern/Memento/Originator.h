//
// Created by SummerFlower on 26/08/2020.
//

#ifndef DESIGNPATTERN_ORIGINATOR_H
#define DESIGNPATTERN_ORIGINATOR_H

#include <iostream>
#include "State.h"
#include "Memento.h"

class Originator
{
    State state;
    std::string name;

public:
    Originator(State state, std::string name) : state(state), name(name) {}

    Memento* createMemento()
    {
        return new Memento(this->state);
    }

    void setMemento(Memento* memento)
    {
        this->state = memento->getState();
        delete memento;
        std::cout<<name<<" Undo col : "<<state.col<<" row : "<<state.row<<std::endl;
    }

    void move(State state)
    {
        this->state = state;
        std::cout<<name<<" Move col : "<<state.col<<" row : "<<state.row<<std::endl;
    }
};

#endif //DESIGNPATTERN_ORIGINATOR_H
