//
// Created by SummerFlower on 30/08/2020.
//

#ifndef DESIGNPATTERN_TEMPLATEMETHODCLIENT_H
#define DESIGNPATTERN_TEMPLATEMETHODCLIENT_H

#include "Coffee.h"
#include "Tea.h"

namespace TemplateMethodPattern
{
    void TemplateMethodPattern();
    void getCoffee();
    void getTea();
}

void TemplateMethodPattern::TemplateMethodPattern()
{
    getCoffee();
    getTea();
}

void TemplateMethodPattern::getCoffee()
{
    Drinks* coffee = new Coffee();
    coffee->prepareDrinks();
}

void TemplateMethodPattern::getTea()
{
    Drinks* tea = new Tea();
    tea->prepareDrinks();
}

#endif //DESIGNPATTERN_TEMPLATEMETHODCLIENT_H
