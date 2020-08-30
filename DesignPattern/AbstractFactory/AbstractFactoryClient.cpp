#include "AbstractFactoryClient.h"
//
// Created by SummerFlower on 10/08/2020.
//
namespace AbstractFactoryPattern
{
    void CreateDevice(AbstractDeviceFactory* fac)
    {
        Phone* phone = fac->createPhone();
        Earphone* earphone = fac->createEarphone();
    }

    void AbstractFactoryPattern()
    {
        CreateDevice(new SamsungDeviceFactory);
        CreateDevice(new AppleDeviceFactory);
    }

    void BadFactoryPattern()
    {
        BadFactory badFactory;
        Phone* phone = badFactory.createPhone(SAMSUNG);
        Earphone* earphone = badFactory.createEarphone(SAMSUNG);
    }
}