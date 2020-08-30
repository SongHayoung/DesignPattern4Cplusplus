//
// Created by SummerFlower on 17/08/2020.
//

#ifndef DESIGNPATTERN_GRAPHICCIRCLE_H
#define DESIGNPATTERN_GRAPHICCIRCLE_H

#include "Graphic.h"

class GraphicCircle : public Graphic
{
    std::string name;
public:
    GraphicCircle(std::string name)
    {
        this->name = name;
    }

    ~GraphicCircle()
    {
        std::cout<<name<<" destructor"<<std::endl;
    }

    void show() override
    {
        std::cout<<name<<std::endl;
    }
};

#endif //DESIGNPATTERN_GRAPHICCIRCLE_H
