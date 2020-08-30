//
// Created by SummerFlower on 11/08/2020.
//

#ifndef DESIGNPATTERN_WORDDOCUMENT_H
#define DESIGNPATTERN_WORDDOCUMENT_H

#include <iostream>

#include "Document.h"

class WordDocument : public Document
{
public:
    ~WordDocument() override
    {
        std::cout<<"Word Document close"<<std::endl;
    };

    void context() override
    {
        std::cout<<"Word Document"<<std::endl;
    }
};

#endif //DESIGNPATTERN_WORDDOCUMENT_H
