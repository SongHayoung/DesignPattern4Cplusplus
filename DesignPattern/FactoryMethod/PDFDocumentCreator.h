//
// Created by SummerFlower on 11/08/2020.
//

#ifndef DESIGNPATTERN_PDFDOCUMENTCREATOR_H
#define DESIGNPATTERN_PDFDOCUMENTCREATOR_H

#include "DocumentCreator.h"
#include "PDFDocument.h"

class PDFDocumentCreator : public DocumentCreator
{
public:
    ~PDFDocumentCreator() override {};

    Document* create() override
    {
        return new PDFDocument();
    }
};

#endif //DESIGNPATTERN_PDFDOCUMENTCREATOR_H
