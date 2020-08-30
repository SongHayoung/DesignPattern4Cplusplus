//
// Created by SummerFlower on 20/08/2020.
//

#ifndef DESIGNPATTERN_IFILE_H
#define DESIGNPATTERN_IFILE_H

#include <iostream>
#include <utility>

enum AccessAuthority
{
    ADMIN,
    GUEST,
};

class IFile
{
protected:
    std::string data;
    AccessAuthority authority;
public:
    IFile() {}
    IFile(std::string data) : data(std::move(data)) {}
    IFile(AccessAuthority authority, std::string data) : data(std::move(data)), authority(authority) {}

    virtual ~IFile() {}
    virtual std::string getData() = 0;
};

#endif //DESIGNPATTERN_IFILE_H
