//
// Created by SummerFlower on 26/08/2020.
//

#ifndef DESIGNPATTERN_MEMENTOCLIENT_H
#define DESIGNPATTERN_MEMENTOCLIENT_H

#include "Caretaker.h"
#include "Originator.h"

namespace MementoPattern
{
    void MementoPattern();
}

void MementoPattern::MementoPattern()
{
    Caretaker* caretaker = new Caretaker();
    Originator* originator = new Originator(State{.col = 3, .row = 'A'}, "Pawn");

    caretaker->save(originator->createMemento());
    originator->move(State{.col = 4, .row = 'A'});

    caretaker->save(originator->createMemento());
    originator->move(State{.col = 5, .row = 'A'});

    caretaker->save(originator->createMemento());
    originator->move(State{.col = 5, .row = 'B'});

    originator->setMemento(caretaker->undo());
    originator->setMemento(caretaker->undo());
    originator->setMemento(caretaker->undo());
}

#endif //DESIGNPATTERN_MEMENTOCLIENT_H
