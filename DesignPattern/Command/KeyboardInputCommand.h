//
// Created by SummerFlower on 22/08/2020.
//

#ifndef DESIGNPATTERN_KEYBOARDINPUTCOMMAND_H
#define DESIGNPATTERN_KEYBOARDINPUTCOMMAND_H

#include "InputCommand.h"

class KeyboardInputCommand : public InputCommand
{
    std::string cmd;
public:
    KeyboardInputCommand(std::string cmd) : cmd(cmd) {}

    void execute() override
    {
        std::cout<<"execute keyboard command "<<cmd<<std::endl;
    }
};

#endif //DESIGNPATTERN_KEYBOARDINPUTCOMMAND_H
