//
// Created by SummerFlower on 30/08/2020.
//

#ifndef DESIGNPATTERN_NORMALPRICESTRATEGY_H
#define DESIGNPATTERN_NORMALPRICESTRATEGY_H

#include "PriceStrategy.h"

class NormalPriceStrategy : public PriceStrategy
{
public:
    ~NormalPriceStrategy() {}
    int pricePolicy(int price) override
    {
        return price;
    }
};

#endif //DESIGNPATTERN_NORMALPRICESTRATEGY_H
