//
// Created by SummerFlower on 15/08/2020.
//

#ifndef DESIGNPATTERN_CAMERA_H
#define DESIGNPATTERN_CAMERA_H

#include <iostream>

class Camera
{
public:
    virtual ~Camera() {};
    virtual void shoot() = 0;
};

#endif //DESIGNPATTERN_CAMERA_H
