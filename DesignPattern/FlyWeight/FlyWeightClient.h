//
// Created by SummerFlower on 20/08/2020.
//

#ifndef DESIGNPATTERN_FLYWEIGHTCLIENT_H
#define DESIGNPATTERN_FLYWEIGHTCLIENT_H

#include <iostream>
#include "CharacterFactory.h"

namespace FlyWeightPattern
{
    void FlyWeightPattern();
    void addFlyWeight();
    void getFlyWeight();
}

void FlyWeightPattern::FlyWeightPattern()
{
    addFlyWeight();
    getFlyWeight();
}

void FlyWeightPattern::addFlyWeight()
{
    CharacterFactory* characterFactory = CharacterFactory::getInstance();
    characterFactory->getCharacter('a');
    characterFactory->getCharacter('b');
    characterFactory->getCharacter('c');
    characterFactory->getCharacter('a');
    characterFactory->getCharacter('d');
}

void FlyWeightPattern::getFlyWeight()
{
    CharacterFactory* characterFactory = CharacterFactory::getInstance();
    Character* a = characterFactory->getCharacter('a');
    Character* b = characterFactory->getCharacter('b');
    Character* c = characterFactory->getCharacter('c');
    Character* aPrime = characterFactory->getCharacter('a');
    Character* d = characterFactory->getCharacter('d');

    std::cout<<a<<"\t"<<a->getChar()<<std::endl;
    std::cout<<aPrime<<"\t"<<aPrime->getChar()<<std::endl;
    std::cout<<b<<"\t"<<b->getChar()<<std::endl;
    std::cout<<c<<"\t"<<c->getChar()<<std::endl;
    std::cout<<d<<"\t"<<d->getChar()<<std::endl;
}

#endif //DESIGNPATTERN_FLYWEIGHTCLIENT_H
