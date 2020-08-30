//
// Created by SummerFlower on 11/08/2020.
//

#ifndef DESIGNPATTERN_FACTORYMETHODCLIENT_H
#define DESIGNPATTERN_FACTORYMETHODCLIENT_H

#include "PDFDocument.h"
#include "PDFDocumentCreator.h"
#include "WordDocument.h"
#include "WordDocumentCreator.h"


namespace FactoryMethodPattern
{
    void FactoryMethodPattern();
    void callPdfDocument();
    void callWordDocument();
}


#endif //DESIGNPATTERN_FACTORYMETHODCLIENT_H
