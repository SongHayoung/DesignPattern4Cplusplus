#include "DesignPattern/AbstractFactory/AbstractFactoryClient.h"
#include "DesignPattern/FactoryMethod/FactoryMethodClient.h"
#include "DesignPattern/Prototype/PrototypeClient.h"
#include "DesignPattern/Singleton/SingletonClient.h"
#include "DesignPattern/Adapter/AdapterClient.h"
#include "DesignPattern/Bridge/BridgeClient.h"
#include "DesignPattern/Composite/CompositeClient.h"
#include "DesignPattern/Decorator/DecoratorClient.h"
#include "DesignPattern/Facade/FacadeClient.h"
#include "DesignPattern/FlyWeight/FlyWeightClient.h"
#include "DesignPattern/Proxy/ProxyClient.h"
#include "DesignPattern/Builder/BuilderClient.h"
#include "DesignPattern/ChainOfResponsibility/ChainOfResponsibilityClient.h"
#include "DesignPattern/Command/CommandClient.h"
#include "DesignPattern/Interpreter/InterpreterClient.h"
#include "DesignPattern/Iterator/IteratorClient.h"
#include "DesignPattern/Mediator/MediatorClient.h"
#include "DesignPattern/Memento/MementoClient.h"
#include "DesignPattern/Observer/ObserverClient.h"
#include "DesignPattern/State/StateClient.h"
#include "DesignPattern/Strategy/StrategyClient.h"
#include "DesignPattern/TemplateMethod/TemplateMethodClient.h"
#include "DesignPattern/Visitor/VisitorClient.h"

void visitorPattern()
{
    VisitorPattern::VisitorPattern();
}

void templateMethodPattern()
{
    TemplateMethodPattern::TemplateMethodPattern();
}

void strategyPattern()
{
    StrategyPattern::StrategyPattern();
}

void statePattern()
{
    StatePattern::StatePattern();
}

void observerPattern()
{
    ObserverPattern::ObserverPattern();
}

void mementoPattern()
{
    MementoPattern::MementoPattern();
}

void mediatorPattern()
{
    MediatorPattern::MediatorPattern();
}

void iteratorPattern()
{
    IteratorPattern::IteratorPattern();
}

void interpreterPattern()
{
    InterpreterPattern::InterpreterPattern();
}

void commandPattern()
{
    CommandPattern::CommandPattern();
}

void chainOfResponsibilityPattern()
{
    ChainOfResponsibilityPattern::ChainOfResponsibilityPattern();
}

void builderPattern()
{
    BuilderPattern::BuilderPattern();
}

void proxyPattern()
{
    ProxyPattern::ProxyPattern();
}

void flyWeightPattern()
{
    FlyWeightPattern::FlyWeightPattern();
}

void facadePattern()
{
    FacadePattern::FacadePattern();
}

void decoratorPattern()
{
    DecoratorPattern::DecoratorPattern();
}

void compositePattern()
{
    CompositePattern::CompositePattern();
}

void bridgePattern()
{
    BridgePattern::BridgePattern();
}

void adapterPattern()
{
    AdapterPattern::AdapterPattern();
}

void singletonPattern()
{
    SingletonPattern::SingletonPattern();
}

void prototypePattern()
{
    PrototypePattern::PrototypePattern();
}

void factoryMethodPattern()
{
    FactoryMethodPattern::FactoryMethodPattern();
}

void abstractFactoryPattern()
{
    AbstractFactoryPattern::AbstractFactoryPattern();
}

int main() {
    visitorPattern();
    return 0;
}