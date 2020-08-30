//
// Created by SummerFlower on 23/08/2020.
//

#ifndef DESIGNPATTERN_BINARYEXPRESSION_H
#define DESIGNPATTERN_BINARYEXPRESSION_H

#include <sstream>
#include "Expression.h"

class BinaryExpression : public Expression
{
public:
    std::string interpret(std::string line) override
    {
        int value = StringParser::getValue(line);
        std::stringstream stream;
        while(value)
        {
            stream << (value & 1);
            value >>= 1;
        }
        return stream.str();
    }
};

#endif //DESIGNPATTERN_BINARYEXPRESSION_H
