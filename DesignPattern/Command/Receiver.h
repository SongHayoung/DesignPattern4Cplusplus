//
// Created by SummerFlower on 22/08/2020.
//

#ifndef DESIGNPATTERN_RECEIVER_H
#define DESIGNPATTERN_RECEIVER_H

#include <vector>
#include "CommandComposite.h"

class Receiver
{
    std::vector<CommandComposite*> command;
public:
    void addMacro(CommandComposite* composite)
    {
        command.emplace_back(composite);
    }

    void removeMacro()
    {
        command.pop_back();
    }

    void action()
    {
        for(CommandComposite* composite : command)
            composite->execute();
    }
};

#endif //DESIGNPATTERN_RECEIVER_H
