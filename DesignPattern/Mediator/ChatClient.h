//
// Created by SummerFlower on 25/08/2020.
//

#ifndef DESIGNPATTERN_CHATCLIENT_H
#define DESIGNPATTERN_CHATCLIENT_H

#include <iostream>
#include "ChatMediator.h"

class ChatClient : public IChatClient
{
    IChatMediator* mediator;
    std::string name;
public:
    ChatClient(IChatMediator* mediator, std::string name) : mediator(mediator), name(name) {}
    ChatClient(std::string name) : name(name) {}

    void setMediator(IChatMediator* mediator) override
    {
        this->mediator = mediator;
    }

    void display(std::string message) override
    {
        std::cout<<name<<" : "<<message<<std::endl;
    }

    void send(std::string message) override
    {
        mediator->mediate(this, "From " + this->name + " : " + message);
    }

    void quit() override
    {
        mediator->removeClient(this);
    }
};

#endif //DESIGNPATTERN_CHATCLIENT_H
