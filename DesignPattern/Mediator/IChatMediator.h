//
// Created by SummerFlower on 25/08/2020.
//

#ifndef DESIGNPATTERN_ICHATMEDIATOR_H
#define DESIGNPATTERN_ICHATMEDIATOR_H

#include <iostream>
#include "IChatClient.h"

class IChatClient;
class IChatMediator
{
public:
    virtual ~IChatMediator() {}
    virtual void addClient(IChatClient* chatClient) = 0;
    virtual void removeClient(IChatClient* chatClient) = 0;
    virtual void mediate(IChatClient* chatClient, std::string message) = 0;
};

#endif //DESIGNPATTERN_ICHATMEDIATOR_H
