//
// Created by SummerFlower on 27/08/2020.
//

#ifndef DESIGNPATTERN_SUBJECT_H
#define DESIGNPATTERN_SUBJECT_H

#include "Observer.h"

class Subject
{
public:
    virtual ~Subject() {}
    virtual void attach(Observer* observer) = 0;
    virtual void detach(Observer* observer) = 0;
    virtual void notify(std::string notification) = 0;
};

#endif //DESIGNPATTERN_SUBJECT_H
