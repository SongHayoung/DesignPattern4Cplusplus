//
// Created by SummerFlower on 27/08/2020.
//

#ifndef DESIGNPATTERN_CONCRETESUBJECT_H
#define DESIGNPATTERN_CONCRETESUBJECT_H

#include "Subject.h"
#include <set>

class ConcreteSubject : public Subject
{
    std::set<Observer*> observers;
public:
    void attach(Observer* observer) override
    {
        observers.insert(observer);
    }

    void detach(Observer* observer) override
    {
        observers.erase(observers.find(observer));
    }

    void notify(std::string notification) override
    {
        for(Observer* observer : observers)
            observer->update(notification);
    }
};

#endif //DESIGNPATTERN_CONCRETESUBJECT_H
