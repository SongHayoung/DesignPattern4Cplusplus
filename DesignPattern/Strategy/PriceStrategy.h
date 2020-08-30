//
// Created by SummerFlower on 30/08/2020.
//

#ifndef DESIGNPATTERN_PRICESTRATEGY_H
#define DESIGNPATTERN_PRICESTRATEGY_H

class PriceStrategy
{
public:
    virtual ~PriceStrategy() {}
    virtual int pricePolicy(int price) = 0;
};

#endif //DESIGNPATTERN_PRICESTRATEGY_H
