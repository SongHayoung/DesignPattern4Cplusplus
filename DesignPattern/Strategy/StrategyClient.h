//
// Created by SummerFlower on 30/08/2020.
//

#ifndef DESIGNPATTERN_STRATEGYCLIENT_H
#define DESIGNPATTERN_STRATEGYCLIENT_H

#include <iostream>
#include "Product.h"
#include "NormalPriceStrategy.h"
#include "BlackFridayPriceStrategy.h"
#include "TimeSalePriceStrategy.h"

namespace StrategyPattern
{
    void StrategyPattern();
}

void StrategyPattern::StrategyPattern()
{
    Product* normalProduct = new Product(new NormalPriceStrategy, 10000);
    Product* blackFridayProduct = new Product(new BlackFridayPriceStrategy, 10000);
    Product* timeSaleProduct = new Product(new TimeSalePriceStrategy, 10000);

    std::cout<<"normal product cost : "<<normalProduct->getPrice()<<std::endl;
    std::cout<<"black friday product cost : "<<blackFridayProduct->getPrice()<<std::endl;
    std::cout<<"time sale product cost : "<<timeSaleProduct->getPrice()<<std::endl;
}

#endif //DESIGNPATTERN_STRATEGYCLIENT_H
