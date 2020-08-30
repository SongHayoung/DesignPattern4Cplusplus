//
// Created by SummerFlower on 30/08/2020.
//

#ifndef DESIGNPATTERN_PRODUCT_H
#define DESIGNPATTERN_PRODUCT_H

#include "PriceStrategy.h"

class Product
{
    PriceStrategy* priceStrategy;
    int price;
public:
    Product(PriceStrategy* priceStrategy, int price) : priceStrategy(priceStrategy), price(price) {}

    int getPrice()
    {
        return priceStrategy->pricePolicy(this->price);
    }
};

#endif //DESIGNPATTERN_PRODUCT_H
