//
// Created by SummerFlower on 26/08/2020.
//

#ifndef DESIGNPATTERN_CARETAKER_H
#define DESIGNPATTERN_CARETAKER_H

#include <list>
#include "Memento.h"

class Caretaker
{
    std::list<Memento*> mementos;
public:
    void save(Memento* memento)
    {
        mementos.push_back(memento);
    }

    Memento* undo()
    {
        Memento* memento = mementos.back();
        mementos.pop_back();
        return memento;
    }
};

#endif //DESIGNPATTERN_CARETAKER_H
