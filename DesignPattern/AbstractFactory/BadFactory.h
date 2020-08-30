//
// Created by SummerFlower on 10/08/2020.
//

#ifndef DESIGNPATTERN_BADFACTORY_H
#define DESIGNPATTERN_BADFACTORY_H

#include "Company.h"
#include "Earphone.h"
#include "Phone.h"

class BadFactory
{
public:
    Phone* createPhone(Company company);
    Earphone* createEarphone(Company company);
};

#endif //DESIGNPATTERN_BADFACTORY_H
