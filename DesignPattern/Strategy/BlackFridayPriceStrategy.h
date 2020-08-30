//
// Created by SummerFlower on 30/08/2020.
//

#ifndef DESIGNPATTERN_BLACKFRIDAYPRICESTRATEGY_H
#define DESIGNPATTERN_BLACKFRIDAYPRICESTRATEGY_H

#include "PriceStrategy.h"

class BlackFridayPriceStrategy : public PriceStrategy
{
public:
    ~BlackFridayPriceStrategy() {}
    int pricePolicy(int price) override
    {
        return price * 0.5;
    }
};

#endif //DESIGNPATTERN_BLACKFRIDAYPRICESTRATEGY_H
