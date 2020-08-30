//
// Created by SummerFlower on 22/08/2020.
//

#ifndef DESIGNPATTERN_INPUTCOMMANDCOMPOSITE_H
#define DESIGNPATTERN_INPUTCOMMANDCOMPOSITE_H

#include "CommandComposite.h"
#include "InputCommand.h"

class InputCommandComposite : public CommandComposite
{
    InputCommand* command;
public:
    InputCommandComposite(InputCommand* clickCommand) : command(clickCommand) {}

    void execute() override
    {
        command->execute();
    }
};

#endif //DESIGNPATTERN_INPUTCOMMANDCOMPOSITE_H
