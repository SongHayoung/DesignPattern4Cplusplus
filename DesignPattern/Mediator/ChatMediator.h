//
// Created by SummerFlower on 25/08/2020.
//

#ifndef DESIGNPATTERN_CHATMEDIATOR_H
#define DESIGNPATTERN_CHATMEDIATOR_H

#include <cstdarg>
#include <vector>
#include "IChatMediator.h"
#include "ChatClient.h"

class ChatMediator : public IChatMediator
{
    std::vector<IChatClient*> clients;

public:
    ChatMediator() {}

    ChatMediator(int args, ...)
    {
        va_list ap;

        va_start(ap, args);
        for(int i = 0; i < args; i++)
            clients.push_back(va_arg(ap,IChatClient*));
        va_end(ap);
    }

    void addClient(IChatClient* chatClient) override
    {
        clients.push_back(chatClient);
    }

    void removeClient(IChatClient* chatClient) override
    {
        for(auto it = clients.begin(); it != clients.end(); ++it)
            if(*it == chatClient)
                clients.erase(it);
    }

    void mediate(IChatClient* chatClient, std::string message) override
    {
        for(auto client : clients)
            if(client != chatClient)
                client->display(message);
    }
};

#endif //DESIGNPATTERN_CHATMEDIATOR_H
