//
// Created by SummerFlower on 15/08/2020.
//

#ifndef DESIGNPATTERN_SONYCAMERA_H
#define DESIGNPATTERN_SONYCAMERA_H

#include "Camera.h"

class SonyCamera : public Camera
{
public:
    SonyCamera()
    {
        std::cout<<"SonyCamera Constructed"<<std::endl;
    }
    ~SonyCamera() override {};
    void shoot() override
    {
        std::cout<<"SonyCamera Running"<<std::endl;
    }
};

#endif //DESIGNPATTERN_SONYCAMERA_H
