//
// Created by SummerFlower on 11/08/2020.
//

#ifndef DESIGNPATTERN_DOCUMENT_H
#define DESIGNPATTERN_DOCUMENT_H

class Document
{
public:
    virtual ~Document() {};
    virtual void context() = 0;
};

#endif //DESIGNPATTERN_DOCUMENT_H
