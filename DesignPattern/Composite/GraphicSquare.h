//
// Created by SummerFlower on 17/08/2020.
//

#ifndef DESIGNPATTERN_GRAPHICSQUARE_H
#define DESIGNPATTERN_GRAPHICSQUARE_H

#include "Graphic.h"

class GraphicSquare : public Graphic
{
    std::string name;
public:
    GraphicSquare(std::string name)
    {
        this->name = name;
    }

    ~GraphicSquare()
    {
        std::cout<<name<<" destructor"<<std::endl;
    }

    void show() override
    {
        std::cout<<name<<std::endl;
    }
};


#endif //DESIGNPATTERN_GRAPHICSQUARE_H
