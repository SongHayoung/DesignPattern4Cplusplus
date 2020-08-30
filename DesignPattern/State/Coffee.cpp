//
// Created by SummerFlower on 28/08/2020.
// 순환 종속성 문제 해결을 위한 cpp 파일

#include "CoffeeMachine.h"
#include "MachineStatusClean.h"
#include "MachineStatusEmpty.h"
#include "MachineStatusRun.h"

CoffeeMachine::CoffeeMachine()
{
    this->status = new CoffeeStatusRun();
    cup = 15;
}

int CoffeeMachine::getCup()
{
    return cup;
}

void CoffeeMachine::useCup()
{
    --cup;
}

void CoffeeMachine::setCoffeeStatus(MachineStatus *status) {
    delete this->status;
    this->status = status;
}

void CoffeeMachine::getCoffee() {
    status->click(this);
}

bool CoffeeMachine::isClean() {
    return cup % 10 == 0;
}

bool CoffeeMachine::isEmpty() {
    return getCup() == 0;
}

void MachineStatusClean::click(CoffeeMachine *coffeeMachine) {
    std::cout << "청소중입니다!" << std::endl;
    coffeeMachine->setCoffeeStatus(new CoffeeStatusRun());
}

void MachineStatusEmpty::click(CoffeeMachine *coffeeMachine) {
    std::cout << "커피가 없습니다!" << std::endl;
}

void CoffeeStatusRun::click(CoffeeMachine *coffeeMachine) {
    std::cout << "커피를 뽑습니다." << std::endl;
    coffeeMachine->useCup();
    std::cout << "남은 커피수 : " << coffeeMachine->getCup() << std::endl;

    if (coffeeMachine->isEmpty())
        coffeeMachine->setCoffeeStatus(new MachineStatusEmpty());
    else if (coffeeMachine->isClean())
        coffeeMachine->setCoffeeStatus(new MachineStatusClean());
}