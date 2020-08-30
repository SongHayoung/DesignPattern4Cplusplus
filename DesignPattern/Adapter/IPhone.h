//
// Created by SummerFlower on 15/08/2020.
//

#ifndef DESIGNPATTERN_IPHONE_H
#define DESIGNPATTERN_IPHONE_H

#include "SmartPhone.h"
#include "SonyCamera.h"

class IPhone : public SmartPhone
{
    Camera* camera;
public:
    IPhone()
    {
        std::cout<<"IPhone Constructed"<<std::endl;
        camera = new SonyCamera();
    }

    ~IPhone() override {};

    void videoCall() override
    {
        std::cout<<"IPhone Calling"<<std::endl;
        camera->shoot();
    }
};

#endif //DESIGNPATTERN_IPHONE_H
