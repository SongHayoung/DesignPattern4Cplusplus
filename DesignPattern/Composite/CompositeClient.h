//
// Created by SummerFlower on 17/08/2020.
//

#ifndef DESIGNPATTERN_COMPOSITECLIENT_H
#define DESIGNPATTERN_COMPOSITECLIENT_H

#include "GraphicCircle.h"
#include "GraphicSquare.h"
#include "GraphicComposite.h"

namespace CompositePattern
{
    void CompositePattern();
    void makeComposite();
}

void CompositePattern::CompositePattern()
{
    makeComposite();
}

void CompositePattern::makeComposite()
{
    auto* compositeRoot = new GraphicComposite("compositeRoot");
    auto* compositeChild1 = new GraphicComposite("compositeChild1");
    auto* compositeChild2 = new GraphicComposite("compositeChild2");

    auto* graphicCircle1 = new GraphicCircle("graphicCircle1");
    auto* graphicCircle2 = new GraphicCircle("graphicCircle2");

    auto* graphicSquare1 = new GraphicSquare("graphicSquare1");
    auto* graphicSquare2 = new GraphicSquare("graphicSquare2");

    compositeChild1->add(graphicCircle1);
    compositeChild1->add(graphicCircle2);

    compositeChild2->add(graphicSquare1);
    compositeChild2->add(graphicSquare2);

    compositeRoot->add(compositeChild1);
    compositeRoot->add(compositeChild2);

    compositeRoot->show();

    /*
    auto vec = compositeRoot->remove();
    delete compositeRoot;
    for(auto* g : vec)
        g->show();
    */
}

#endif //DESIGNPATTERN_COMPOSITECLIENT_H
