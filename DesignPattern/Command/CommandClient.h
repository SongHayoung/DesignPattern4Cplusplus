//
// Created by SummerFlower on 22/08/2020.
//

#ifndef DESIGNPATTERN_COMMANDCLIENT_H
#define DESIGNPATTERN_COMMANDCLIENT_H

#include "Receiver.h"
#include "InputCommandComposite.h"
#include "KeyboardInputCommand.h"
#include "ClickCommandComposite.h"
#include "RightClickCommand.h"

namespace CommandPattern
{
    void CommandPattern();
    void buildMacro();
}

void CommandPattern::CommandPattern()
{
    buildMacro();
}

void CommandPattern::buildMacro()
{
    Receiver* receiver = new Receiver;
    CommandComposite* keyboardInput1 = new InputCommandComposite(new KeyboardInputCommand("This is new Macro"));
    CommandComposite* keyboardInput2 = new InputCommandComposite(new KeyboardInputCommand("Macro Start"));
    CommandComposite* rightClick = new ClickCommandComposite(new RightClickCommand());
    CommandComposite* keyboardInput3 = new InputCommandComposite(new KeyboardInputCommand("Macro End"));

    receiver->addMacro(keyboardInput1);
    receiver->addMacro(keyboardInput2);
    receiver->addMacro(rightClick);
    receiver->addMacro(keyboardInput3);

    receiver->action();

    receiver->removeMacro();
    receiver->removeMacro();

    receiver->action();
}

#endif //DESIGNPATTERN_COMMANDCLIENT_H
