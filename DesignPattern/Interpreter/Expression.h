//
// Created by SummerFlower on 23/08/2020.
//

#ifndef DESIGNPATTERN_EXPRESSION_H
#define DESIGNPATTERN_EXPRESSION_H

#include <iostream>
#include "StringParser.h"

class Expression
{
public:
    virtual std::string interpret(std::string line) = 0;
};

#endif //DESIGNPATTERN_EXPRESSION_H
