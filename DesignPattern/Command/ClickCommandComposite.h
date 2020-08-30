//
// Created by SummerFlower on 22/08/2020.
//

#ifndef DESIGNPATTERN_CLICKCOMMANDCOMPOSITE_H
#define DESIGNPATTERN_CLICKCOMMANDCOMPOSITE_H

#include "CommandComposite.h"
#include "ClickCommand.h"

class ClickCommandComposite : public CommandComposite
{
    ClickCommand* command;
public:
    ClickCommandComposite(ClickCommand* clickCommand) : command(clickCommand) {}

    void execute() override
    {
        command->execute();
    }
};

#endif //DESIGNPATTERN_CLICKCOMMANDCOMPOSITE_H
