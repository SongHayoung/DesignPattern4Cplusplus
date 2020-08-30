//
// Created by SummerFlower on 24/08/2020.
//

#ifndef DESIGNPATTERN_ITERATOR_H
#define DESIGNPATTERN_ITERATOR_H

template <class T>
class Iterator
{
    T data;
    Iterator<T>* next;
public:
    Iterator(T data): data(data), next(NULL) {}

    void append(T item)
    {
        next = new Iterator(item);
    }

    bool hasNext()
    {
        return next != NULL;
    }

    T getData()
    {
        return data;
    }

    Iterator<T>* getNext()
    {
        return next;
    }
};

#endif //DESIGNPATTERN_ITERATOR_H
