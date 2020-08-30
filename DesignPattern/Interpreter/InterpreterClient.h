//
// Created by SummerFlower on 23/08/2020.
//

#ifndef DESIGNPATTERN_INTERPRETERCLIENT_H
#define DESIGNPATTERN_INTERPRETERCLIENT_H

#include "IntegerConverterExpression.h"

namespace InterpreterPattern
{
    void InterpreterPattern();
    void interpret();
}

void InterpreterPattern::InterpreterPattern()
{
    interpret();
}

void InterpreterPattern::interpret()
{
    Expression* expression = new IntegerConverterExpression();
    std::string line1 = "Binary 1234";
    std::string line2 = "Hex 1234";
    std::string line3 = "Binary                         1234";
    std::string line4 = "Hex1234fakjwefakljhfawekljh";
    std::string line5 = "What did i say?";
    std::string line6 = "Hex 987654321";
    std::cout<<expression->interpret(line1)<<std::endl;
    std::cout<<expression->interpret(line2)<<std::endl;
    std::cout<<expression->interpret(line3)<<std::endl;
    std::cout<<expression->interpret(line4)<<std::endl;
    std::cout<<expression->interpret(line5)<<std::endl;
    std::cout<<expression->interpret(line6)<<std::endl;
}

#endif //DESIGNPATTERN_INTERPRETERCLIENT_H
