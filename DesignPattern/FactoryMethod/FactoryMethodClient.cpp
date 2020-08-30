//
// Created by SummerFlower on 11/08/2020.
//

#include "FactoryMethodClient.h"

namespace FactoryMethodPattern
{
    void FactoryMethodPattern()
    {
        callPdfDocument();
        callWordDocument();
    }

    void callPdfDocument()
    {
        DocumentCreator* creator = new PDFDocumentCreator();
        Document* document = creator->create();
        document->context();
        creator->close(document);
    }
    
    void callWordDocument()
    {
        DocumentCreator* creator = new WordDocumentCreator();
        Document* document = creator->create();
        document->context();
        creator->close(document);
    }
}