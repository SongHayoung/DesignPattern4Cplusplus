//
// Created by SummerFlower on 13/08/2020.
//

#include "PrototypeClient.h"

namespace PrototypePattern
{
    void PrototypePattern()
    {
        getConcretePrototype();
    }

    void getConcretePrototype()
    {
        Prototype* prototypeOrigin = new ConcretePrototype("Coke", 100);
        Prototype* prototypeClone = prototypeOrigin->clone();
        std::cout<<"MEMORY OF ORIGIN : "<<(void*)&prototypeOrigin<<std::endl;
        prototypeOrigin->getInfo();
        std::cout<<"MEMORY OF CLONE : "<<(void*)&prototypeClone<<std::endl;
        prototypeClone->getInfo();
    }
}
