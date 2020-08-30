//
// Created by SummerFlower on 11/08/2020.
//

#ifndef DESIGNPATTERN_DOCUMENTCREATOR_H
#define DESIGNPATTERN_DOCUMENTCREATOR_H

#include "Document.h"

class DocumentCreator
{
public:
    virtual ~DocumentCreator() {};
    virtual Document* create() = 0;
    void close(Document* document)
    {
        delete document;
    }
};

#endif //DESIGNPATTERN_DOCUMENTCREATOR_H
