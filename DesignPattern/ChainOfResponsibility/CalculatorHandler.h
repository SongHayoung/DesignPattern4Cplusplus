//
// Created by SummerFlower on 21/08/2020.
//

#ifndef DESIGNPATTERN_CALCULATORHANDLER_H
#define DESIGNPATTERN_CALCULATORHANDLER_H

#include <iostream>
#include "Operation.h"

class CalculatorHandler
{
protected:
    CalculatorHandler* calculatorHandler = nullptr;
    Operation op;

public:
    CalculatorHandler(Operation op) : op(op) {}

    void setNext(CalculatorHandler* calc)
    {
        if(calculatorHandler != nullptr)
            calculatorHandler->setNext(calc);
        else
            calculatorHandler = calc;
    }

    virtual void calculate(int n1, int n2, Operation op) = 0;

};

#endif //DESIGNPATTERN_CALCULATORHANDLER_H
