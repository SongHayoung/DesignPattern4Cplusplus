//
// Created by SummerFlower on 24/08/2020.
//

#ifndef DESIGNPATTERN_ITERATORCLASS_H
#define DESIGNPATTERN_ITERATORCLASS_H

#include <iostream>
#include "Iterator.h"

template <class T>
class IteratorClass
{
    Iterator<T>* first;
public:
    IteratorClass(T item) {
        first = new Iterator(item);
    }
    IteratorClass() {}

    Iterator<T> get()
    {
        return first;
    }

    void append(T iterator) {
        if (iterator == NULL)
            first = new Iterator<T>(iterator);
        else {
            Iterator<T> *it = first;
            while (it->hasNext())
                it = it->getNext();
            it->append(iterator);
        }
    }

    void loop()
    {
        Iterator<T>* it = first;
        while(it->hasNext())
        {
            std::cout<<it->getData()<<std::endl;
            it = it->getNext();
        }
    }
};

#endif //DESIGNPATTERN_ITERATORCLASS_H
