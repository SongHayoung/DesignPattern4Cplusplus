//
// Created by SummerFlower on 15/08/2020.
//

#ifndef DESIGNPATTERN_ADAPTERCLIENT_H
#define DESIGNPATTERN_ADAPTERCLIENT_H

#include "IPhone.h"
#include "EletronicDevice.h"

namespace AdapterPattern
{
    void AdapterPattern();
    void getIPhoneAdapter();
    void getElectronicDevice();
}

void AdapterPattern::AdapterPattern()
{
    getIPhoneAdapter();
    getElectronicDevice();
}

void AdapterPattern::getIPhoneAdapter()
{
    //Object Adapter Pattern
    SmartPhone* iPhone = new IPhone();
    iPhone->videoCall();
}

void AdapterPattern::getElectronicDevice()
{
    //Class Adapter Pattern
    ElectronicDevice* electronicDevice = new ElectronicDevice();
    electronicDevice->videoCall();
    electronicDevice->shoot();
}

#endif //DESIGNPATTERN_ADAPTERCLIENT_H
