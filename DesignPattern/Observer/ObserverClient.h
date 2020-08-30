//
// Created by SummerFlower on 27/08/2020.
//

#ifndef DESIGNPATTERN_OBSERVERCLIENT_H
#define DESIGNPATTERN_OBSERVERCLIENT_H

#include "ConcreteSubject.h"
#include "ConcreteObserver.h"

namespace ObserverPattern
{
    void ObserverPattern();
}

void ObserverPattern::ObserverPattern()
{
    Subject* concreteSubject = new ConcreteSubject();
    Observer* observer1 = new ConcreteObserver("observer1");
    Observer* observer2 = new ConcreteObserver("observer2");
    Observer* observer3 = new ConcreteObserver("observer3");
    Observer* observer4 = new ConcreteObserver("observer4");

    concreteSubject->attach(observer1);
    concreteSubject->attach(observer2);
    concreteSubject->attach(observer3);

    concreteSubject->notify("Notification 1");

    concreteSubject->detach(observer1);

    concreteSubject->attach(observer4);

    concreteSubject->notify("Notification 2");
}

#endif //DESIGNPATTERN_OBSERVERCLIENT_H
