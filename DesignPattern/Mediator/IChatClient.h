//
// Created by SummerFlower on 25/08/2020.
//

#ifndef DESIGNPATTERN_ICHATCLIENT_H
#define DESIGNPATTERN_ICHATCLIENT_H

#include <iostream>
#include "IChatMediator.h"

class IChatMediator;
class IChatClient
{
public:
    virtual ~IChatClient() {}
    virtual void setMediator(IChatMediator* mediator) = 0;
    virtual void display(std::string message) = 0;
    virtual void send(std::string message) = 0;
    virtual void quit() = 0;
};

#endif //DESIGNPATTERN_ICHATCLIENT_H
