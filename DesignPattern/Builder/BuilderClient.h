//
// Created by SummerFlower on 20/08/2020.
//

#ifndef DESIGNPATTERN_BUILDERCLIENT_H
#define DESIGNPATTERN_BUILDERCLIENT_H

#include "Pizza.h"

namespace BuilderPattern
{
    void BuilderPattern();
    void build();
}

void BuilderPattern::BuilderPattern()
{
    build();
}

void BuilderPattern::build()
{
    Pizza* pepperoniPizza = Pizza::Builder::builder()
            .setDough("Flour").setSauce("Tomato").setTopping("Pepperoni").build();
    Pizza* pineapplePizza = Pizza::Builder::builder()
            .setDough("Flour").setTopping("PineApple").build();
    pepperoniPizza->showPizzaInfo();
    pineapplePizza->showPizzaInfo();

}

#endif //DESIGNPATTERN_BUILDERCLIENT_H
