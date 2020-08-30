//
// Created by SummerFlower on 11/08/2020.
//

#ifndef DESIGNPATTERN_WORDDOCUMENTCREATOR_H
#define DESIGNPATTERN_WORDDOCUMENTCREATOR_H

#include "DocumentCreator.h"
#include "WordDocument.h"

class WordDocumentCreator : public DocumentCreator
{
public:
    ~WordDocumentCreator() override {};

    Document* create() override
    {
        return new WordDocument();
    }
};

#endif //DESIGNPATTERN_WORDDOCUMENTCREATOR_H
