//
// Created by SummerFlower on 20/08/2020.
//

#ifndef DESIGNPATTERN_CHARACTERFACTORY_H
#define DESIGNPATTERN_CHARACTERFACTORY_H

#include <vector>
#include "Character.h"

class CharacterFactory
{
    std::vector<Character*> charList;
    static CharacterFactory* instance;
    CharacterFactory() {};
public:
    static CharacterFactory* getInstance()
    {
        return instance;
    }

    Character* getCharacter(char c)
    {
        for(Character* character : charList)
            if(character->getChar() == c)
                return character;

        Character* character = new Character(c);
        charList.emplace_back(character);
        return character;
    }
};

CharacterFactory* CharacterFactory::instance = new CharacterFactory();

#endif //DESIGNPATTERN_CHARACTERFACTORY_H
