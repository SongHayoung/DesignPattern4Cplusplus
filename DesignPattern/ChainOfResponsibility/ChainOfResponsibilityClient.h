//
// Created by SummerFlower on 21/08/2020.
//

#ifndef DESIGNPATTERN_CHAINOFRESPONSIBILITYCLIENT_H
#define DESIGNPATTERN_CHAINOFRESPONSIBILITYCLIENT_H

#include "PlusHandler.h"
#include "MinusHandler.h"
#include "MultiHandler.h"
#include "DivideHandler.h"

namespace ChainOfResponsibilityPattern
{
    void ChainOfResponsibilityPattern();
    void calculate();
}

void ChainOfResponsibilityPattern::ChainOfResponsibilityPattern()
{
    calculate();
}

void ChainOfResponsibilityPattern::calculate()
{
    CalculatorHandler* calculatorHandler = new PlusHandler();
    calculatorHandler->setNext(new MinusHandler());
    calculatorHandler->setNext(new MultiHandler());
    calculatorHandler->setNext(new DivideHandler());

    calculatorHandler->calculate(5, 5, PLUS);
    calculatorHandler->calculate(5, 5, MINUS);
    calculatorHandler->calculate(5, 5, MULTI);
    calculatorHandler->calculate(5, 5, DIVIDE);
}
#endif //DESIGNPATTERN_CHAINOFRESPONSIBILITYCLIENT_H
