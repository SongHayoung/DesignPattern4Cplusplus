//
// Created by SummerFlower on 30/08/2020.
//

#ifndef DESIGNPATTERN_TIMESALEPRICESTRATEGY_H
#define DESIGNPATTERN_TIMESALEPRICESTRATEGY_H

#include "PriceStrategy.h"

class TimeSalePriceStrategy : public PriceStrategy
{
public:
    ~TimeSalePriceStrategy() {}
    int pricePolicy(int price) override
    {
        return price * 0.9;
    }
};

#endif //DESIGNPATTERN_TIMESALEPRICESTRATEGY_H
