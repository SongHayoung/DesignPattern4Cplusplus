//
// Created by SummerFlower on 10/08/2020.
//

#ifndef DESIGNPATTERN_PHONE_H

#include <iostream>
#define DESIGNPATTERN_PHONE_H

class Phone
{
public:
    virtual ~Phone() {};
};

class ApplePhone : public Phone
{
public:
    ApplePhone()
    {
        std::cout<<"ApplePhone Constructed"<<std::endl;
    }
};

class SamsungPhone : public Phone
{
public:
    SamsungPhone()
    {
        std::cout<<"SamsungPhone Constructed"<<std::endl;
    }
};

#endif //DESIGNPATTERN_PHONE_H
