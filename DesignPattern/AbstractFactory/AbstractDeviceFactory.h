//
// Created by SummerFlower on 10/08/2020.
//

#ifndef DESIGNPATTERN_ABSTRACTDEVICEFACTORY_H
#define DESIGNPATTERN_ABSTRACTDEVICEFACTORY_H

#include "Earphone.h"
#include "Phone.h"

class AbstractDeviceFactory
{
public:
    virtual ~AbstractDeviceFactory() {};
    virtual Phone* createPhone() = 0;
    virtual Earphone* createEarphone() = 0;
};

class AppleDeviceFactory : public AbstractDeviceFactory
{
public:
    Phone* createPhone() override
    {
        return new ApplePhone();
    }

    Earphone* createEarphone() override
    {
        return new AppleEarphone();
    }
};

class SamsungDeviceFactory : public AbstractDeviceFactory
{
public:
    Phone* createPhone() override
    {
        return new SamsungPhone();
    }

    Earphone* createEarphone() override
    {
        return new SamsungEarphone();
    }
};

#endif //DESIGNPATTERN_ABSTRACTDEVICEFACTORY_H