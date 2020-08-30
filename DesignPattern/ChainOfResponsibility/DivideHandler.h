//
// Created by SummerFlower on 21/08/2020.
//

#ifndef DESIGNPATTERN_DIVIDEHANDLER_H
#define DESIGNPATTERN_DIVIDEHANDLER_H

#include "CalculatorHandler.h"

class DivideHandler : public CalculatorHandler
{
public:
    DivideHandler() : CalculatorHandler(DIVIDE) {}

    void calculate(int n1, int n2, Operation op) override
    {
        if(op == this->op)
            std::cout<<n1<<" / "<<n2<<" = "<<n1/n2<<std::endl;
        else if (this->calculatorHandler != nullptr)
            calculatorHandler->calculate(n1, n2, op);
    }
};

#endif //DESIGNPATTERN_DIVIDEHANDLER_H
