//
// Created by SummerFlower on 23/08/2020.
//

#ifndef DESIGNPATTERN_INTEGERCONVERTEREXPRESSION_H
#define DESIGNPATTERN_INTEGERCONVERTEREXPRESSION_H

#include <map>
#include "HexExpression.h"
#include "BinaryExpression.h"


class IntegerConverterExpression : public Expression
{
    enum Support
    {
        HEX,
        BINARY,
    };

    std::map<Support, std::pair<std::string, Expression*>> expressionMapper;

    static const std::string UNSUPPORT;
public:
    IntegerConverterExpression()
    {
        expressionMapper[BINARY] = std::make_pair("Binary", new BinaryExpression());
        expressionMapper[HEX] = std::make_pair("Hex", new HexExpression());
    }

    std::string interpret(std::string line) override
    {
        for(auto enums : expressionMapper)
        {
            auto result = StringParser::contains(enums.second.first, line);
            if(result.has_value())
                return expressionMapper[enums.first].second->interpret(result.value());
        }

        return UNSUPPORT + line;
    }
};

const std::string IntegerConverterExpression::UNSUPPORT = "Unsupported Expression : ";

#endif //DESIGNPATTERN_INTEGERCONVERTEREXPRESSION_H
