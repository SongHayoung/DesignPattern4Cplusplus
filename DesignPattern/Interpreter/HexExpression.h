//
// Created by SummerFlower on 23/08/2020.
//

#ifndef DESIGNPATTERN_HEXEXPRESSION_H
#define DESIGNPATTERN_HEXEXPRESSION_H

#include <sstream>
#include "Expression.h"

class HexExpression : public Expression
{
public:
    std::string interpret(std::string line) override
    {
        int value = StringParser::getValue(line);
        std::stringstream stream;
        stream << std::hex << value;
        return stream.str();
    }
};

#endif //DESIGNPATTERN_HEXEXPRESSION_H
