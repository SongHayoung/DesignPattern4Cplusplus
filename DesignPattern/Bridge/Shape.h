//
// Created by SummerFlower on 16/08/2020.
//

#ifndef DESIGNPATTERN_SHAPE_H
#define DESIGNPATTERN_SHAPE_H

class Shape
{
public:
    virtual ~Shape() {};
    virtual void draw() = 0;
};

#endif //DESIGNPATTERN_SHAPE_H
