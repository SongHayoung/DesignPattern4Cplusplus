//
// Created by SummerFlower on 20/08/2020.
//

#ifndef DESIGNPATTERN_PROTECTEDFILE_H
#define DESIGNPATTERN_PROTECTEDFILE_H

#include <stdexcept>
#include "File.h"

struct IllegalAccess : public std::exception
{
    const char* msg;
public:
    IllegalAccess(const char* msg) : msg(msg) {}

    const char* getMessage() const throw()
    {
        return msg;
    }
};

class ProtectedFile : public IFile
{
    File* file;

    std::string getData() override
    {
        return file->getData();
    }
public:
    ProtectedFile(File* file)
    {
        this->file = file;
    }

    std::string getData(AccessAuthority authority)
    {
        switch(authority)
        {
            case AccessAuthority::ADMIN :
                return getData();
            case AccessAuthority::GUEST :
                if(file->getAuthority() == AccessAuthority::GUEST)
                    return getData();
                else
                    throw IllegalAccess("Access Denied");
        }
        if(authority == AccessAuthority::ADMIN)
            return getData();

    }
};
#endif //DESIGNPATTERN_PROTECTEDFILE_H
