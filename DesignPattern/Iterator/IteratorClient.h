//
// Created by SummerFlower on 24/08/2020.
//

#ifndef DESIGNPATTERN_ITERATORCLIENT_H
#define DESIGNPATTERN_ITERATORCLIENT_H

#include "IteratorClass.h"

namespace IteratorPattern
{
    void IteratorPattern();
}

void IteratorPattern::IteratorPattern()
{
    auto* iterator = new IteratorClass(3);
    iterator->append(4);
    iterator->append(5);
    iterator->append(6);
    iterator->append(7);
    iterator->loop();

}

#endif //DESIGNPATTERN_ITERATORCLIENT_H
