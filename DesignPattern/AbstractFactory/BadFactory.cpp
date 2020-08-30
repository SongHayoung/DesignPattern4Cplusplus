//
// Created by SummerFlower on 10/08/2020.
//

#include "BadFactory.h"

Phone* BadFactory::createPhone(Company company)
{
    if(company == APPLE)
        return new ApplePhone;
    if(company == SAMSUNG)
        return new SamsungPhone;
    throw std::bad_exception();
}

Earphone* BadFactory::createEarphone(Company company)
{
    if(company == APPLE)
        return new AppleEarphone;
    if(company == SAMSUNG)
        return new SamsungEarphone;
    throw std::bad_exception();
}