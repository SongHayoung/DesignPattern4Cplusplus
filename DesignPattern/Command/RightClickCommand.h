//
// Created by SummerFlower on 22/08/2020.
//

#ifndef DESIGNPATTERN_RIGHTCLICKCOMMAND_H
#define DESIGNPATTERN_RIGHTCLICKCOMMAND_H

#include "ClickCommand.h"

class RightClickCommand : public ClickCommand
{
public:
    void execute() override
    {
        std::cout<<"execute right click command"<<std::endl;
    }
};

#endif //DESIGNPATTERN_RIGHTCLICKCOMMAND_H
