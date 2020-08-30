//
// Created by SummerFlower on 20/08/2020.
//

#ifndef DESIGNPATTERN_FILE_H
#define DESIGNPATTERN_FILE_H

#include "IFile.h"

class File : public IFile
{
public:
    File(AccessAuthority authority, std::string data) : IFile(authority, data) {}
    File(std::string data) : IFile(data) {}

    std::string getData() override
    {
        return data;
    }

    AccessAuthority  getAuthority()
    {
        return authority;
    }
};

#endif //DESIGNPATTERN_FILE_H
