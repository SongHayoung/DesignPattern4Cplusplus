//
// Created by SummerFlower on 20/08/2020.
//

#ifndef DESIGNPATTERN_CHARACTER_H
#define DESIGNPATTERN_CHARACTER_H

class Character
{
    char c;
public:
    Character(char c)
    {
        this->c = c;
    }

    char getChar()
    {
        return this->c;
    }
};

#endif //DESIGNPATTERN_CHARACTER_H
