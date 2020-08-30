//
// Created by SummerFlower on 30/08/2020.
//

#ifndef DESIGNPATTERN_COFFEE_H
#define DESIGNPATTERN_COFFEE_H

#include "Drinks.h"

class Coffee : public Drinks
{
    void brew() override
    {
        std::cout<<"Brewing Coffee Beans..."<<std::endl;
    }

    //훅 함수의 구현
    bool needExtraToppings()
    {
        std::cout<<"Need Extra Toppings?"<<std::endl;
        std::string input = getInput();
        return input == "YES";
    }

    void addExtraToppings()
    {
        std::cout<<"Add Some Milk..."<<std::endl;
    }

    std::string getInput()
    {
        std::string input;
        std::cin>>input;
        return input;
    }

    void preparedDrink() override
    {
        std::cout<<"Your Coffee is Ready!!"<<std::endl<<std::endl;
    }
};

#endif //DESIGNPATTERN_COFFEE_H
