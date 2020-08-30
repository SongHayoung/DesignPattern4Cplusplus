//
// Created by SummerFlower on 30/08/2020.
//

#ifndef DESIGNPATTERN_TEA_H
#define DESIGNPATTERN_TEA_H

#include "Drinks.h"

class Tea : public Drinks
{
    void brew() override
    {
        std::cout<<"Brewing Tea..."<<std::endl;
    }

    void preparedDrink() override
    {
        std::cout<<"Your Tea is Ready!!"<<std::endl<<std::endl;
    }
};

#endif //DESIGNPATTERN_TEA_H
