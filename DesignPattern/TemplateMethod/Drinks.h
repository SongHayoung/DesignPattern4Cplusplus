//
// Created by SummerFlower on 30/08/2020.
//

#ifndef DESIGNPATTERN_DRINKS_H
#define DESIGNPATTERN_DRINKS_H

#include <iostream>

class Drinks
{
    void boilWater()
    {
        std::cout<<"Boiling Water..."<<std::endl;
    }

    //하위 클래스에서 반드시 재정의해야 하는 알고리즘 함수
    virtual void brew() = 0;

    void pouringDrinks()
    {
        std::cout<<"Pouring Drinks..."<<std::endl;
    }

    //상황에 따라 서브 클래스에서 구현 가능한 훅 함수
    virtual bool needExtraToppings()
    {
        return false;
    }

    virtual void addExtraToppings() {}

    virtual void preparedDrink() = 0;
public:
    ~Drinks() {}

    void prepareDrinks()
    {
        boilWater();
        brew();
        pouringDrinks();
        if(needExtraToppings())
            addExtraToppings();
        preparedDrink();
    }
};

#endif //DESIGNPATTERN_DRINKS_H
