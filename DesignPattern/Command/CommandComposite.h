//
// Created by SummerFlower on 22/08/2020.
//

#ifndef DESIGNPATTERN_COMMANDCOMPOSITE_H
#define DESIGNPATTERN_COMMANDCOMPOSITE_H

class CommandComposite
{
public:
    virtual ~CommandComposite() {}
    virtual void execute() = 0;
};

#endif //DESIGNPATTERN_COMMANDCOMPOSITE_H
