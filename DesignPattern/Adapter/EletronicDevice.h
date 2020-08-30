//
// Created by SummerFlower on 15/08/2020.
//

#ifndef DESIGNPATTERN_ELETRONICDEVICE_H
#define DESIGNPATTERN_ELETRONICDEVICE_H

#include "SmartPhone.h"
#include "Camera.h"

class ElectronicDevice : public SmartPhone, Camera
{
public:
    ElectronicDevice()
    {
        std::cout<<"Electronic Device Constructed"<<std::endl;
    }

    void videoCall() override
    {
        std::cout<<"Electronic Device can call to someone"<<std::endl;
    }

    void shoot() override
    {
        std::cout<<"Electronic Device can shoot photo also"<<std::endl;
    }
};

#endif //DESIGNPATTERN_ELETRONICDEVICE_H
