//
// Created by SummerFlower on 25/08/2020.
//

#ifndef DESIGNPATTERN_MEDIATORCLIENT_H
#define DESIGNPATTERN_MEDIATORCLIENT_H

#include "ChatClient.h"
#include "ChatMediator.h"

namespace MediatorPattern
{
    void MediatorPattern();
}

void MediatorPattern::MediatorPattern()
{
    IChatClient* client1 = new ChatClient("Client1");
    IChatClient* client2 = new ChatClient("Client2");
    IChatClient* client3 = new ChatClient("Client3");
    IChatClient* client4 = new ChatClient("Client4");
    IChatClient* client5 = new ChatClient("Client5");
    IChatMediator* mediator = new ChatMediator(4, client1, client2, client3, client4);

    client1->setMediator(mediator);
    client2->setMediator(mediator);
    client3->setMediator(mediator);
    client4->setMediator(mediator);

    client1->send("Hello");
    client2->send("Hi Client1");
    client3->send("Bye");

    client3->quit();

    mediator->addClient(client5);
    client5->setMediator(mediator);

    client5->send("I`m noob");
}

#endif //DESIGNPATTERN_MEDIATORCLIENT_H
