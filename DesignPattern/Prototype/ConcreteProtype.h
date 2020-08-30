//
// Created by SummerFlower on 13/08/2020.
//

#ifndef DESIGNPATTERN_CONCRETEPROTYPE_H
#define DESIGNPATTERN_CONCRETEPROTYPE_H

#include "Prototype.h"

class ConcretePrototype : public Prototype
{
    char* name;
    int nameLen;
    int size;
public:
    ConcretePrototype(const char* name, int size)
    {
        this->nameLen = strlen(name);
        this->name = new char(this->nameLen + 1);
        strcpy(this->name, name);
        this->size = size;
    }

    ConcretePrototype(const ConcretePrototype& concretePrototype)
    {
        std::cout<<"Concrete Prototype Copy Constructor Called"<<std::endl;
        this->nameLen = concretePrototype.nameLen;
        this->name = new char(this->nameLen + 1);
        strcpy(this->name, concretePrototype.name);
        this->size = concretePrototype.size;
    }

    Prototype* clone() override
    {
        return new ConcretePrototype(*this);
    }

    void getInfo() override
    {
        std::cout<<"NAME : "<<this->name<<std::endl;
        std::cout<<"MEMORY OF NAME : "<<(void*)&name<<std::endl;
        std::cout<<"SIZE : "<<this->size<<std::endl;
    }
};
#endif //DESIGNPATTERN_CONCRETEPROTYPE_H
