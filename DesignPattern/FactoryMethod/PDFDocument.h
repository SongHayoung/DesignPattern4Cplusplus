//
// Created by SummerFlower on 11/08/2020.
//

#ifndef DESIGNPATTERN_PDFDOCUMENT_H
#define DESIGNPATTERN_PDFDOCUMENT_H

#include <iostream>

#include "Document.h"

class PDFDocument : public Document
{
public:
    ~PDFDocument() override
    {
        std::cout<<"PDF Document close"<<std::endl;
    };

    void context() override
    {
        std::cout<<"PDF Document"<<std::endl;
    }
};

#endif //DESIGNPATTERN_PDFDOCUMENT_H

