//
// Created by SummerFlower on 10/08/2020.
//

#ifndef DESIGNPATTERN_ABSTRACTFACTORYCLIENT_H
#define DESIGNPATTERN_ABSTRACTFACTORYCLIENT_H

#include "AbstractDeviceFactory.h"
#include "BadFactory.h"

namespace AbstractFactoryPattern
{
    void CreateDevice(AbstractDeviceFactory* fac);
    void AbstractFactoryPattern();
    void BadFactoryPattern();
}

#endif //DESIGNPATTERN_ABSTRACTFACTORYCLIENT_H
