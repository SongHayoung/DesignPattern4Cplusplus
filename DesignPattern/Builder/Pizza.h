//
// Created by SummerFlower on 20/08/2020.
//

#ifndef DESIGNPATTERN_PIZZA_H
#define DESIGNPATTERN_PIZZA_H

#include <iostream>

class Pizza
{
    std::string topping;
    std::string dough;
    std::string sauce;

public:
    static class Builder
    {
    private:
        std::string topping;
        std::string dough;
        std::string sauce;

    public:
        static Builder builder()
        {
            Builder builder;
            return builder;
        }

        Builder setTopping(std::string topping)
        {
            this->topping = std::move(topping);
            return *this;
        }

        Builder setDough(std::string dough)
        {
            this->dough = std::move(dough);
            return *this;
        }

        Builder setSauce(std::string sauce)
        {
            this->sauce = std::move(sauce);
            return *this;
        }

        std::string getTopping()
        {
            return topping;
        }

        std::string getDough()
        {
            return dough;
        }

        std::string getSauce()
        {
            return sauce;
        }

        Pizza* build()
        {
            return new Pizza(*this);
        }
    };

public:
    Pizza(Builder builder) :
    topping(builder.getTopping()),
    dough(builder.getDough()),
    sauce(builder.getSauce()) {}

    void showPizzaInfo()
    {
        std::cout<<"Dough : "<<dough<<std::endl;
        std::cout<<"Sauce : "<<sauce<<std::endl;
        std::cout<<"Topping : "<<topping<<std::endl;
    }
};

#endif //DESIGNPATTERN_PIZZA_H
