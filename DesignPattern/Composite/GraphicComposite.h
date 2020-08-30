//
// Created by SummerFlower on 17/08/2020.
//

#ifndef DESIGNPATTERN_GRAPHICCOMPOSITE_H
#define DESIGNPATTERN_GRAPHICCOMPOSITE_H

#include <memory>
#include "Graphic.h"

class GraphicComposite : public Graphic
{
    std::string name;
    std::vector<Graphic*> graphicVector;
public:
    GraphicComposite(std::string name)
    {
        this->name = name;
    }

    ~GraphicComposite()
    {
        std::cout<<name<<" destructor"<<std::endl;
    }

    void show() override
    {
        std::cout<<name<<std::endl;
        for(Graphic* graphic : graphicVector)
            graphic->show();
    }

    void add(Graphic* graphic)
    {
        graphicVector.emplace_back(graphic);
    }

    std::vector<Graphic*> remove()
    {
        return graphicVector;
    }
};

#endif //DESIGNPATTERN_GRAPHICCOMPOSITE_H
