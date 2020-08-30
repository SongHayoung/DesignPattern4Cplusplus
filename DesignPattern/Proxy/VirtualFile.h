//
// Created by SummerFlower on 20/08/2020.
//

#ifndef DESIGNPATTERN_VIRTUALFILE_H
#define DESIGNPATTERN_VIRTUALFILE_H

#include "File.h"

#include <utility>

class VirtualFile : public IFile
{
    std::string path;
    File* file;
public:
    VirtualFile(std::string path) : path(std::move(path)) {}

    std::string getData() override
    {
        if(file == nullptr) {
            file = new File("This is " + path + " file.");
            std::cout<<path<<" "<<"file loaded."<<std::endl;
        }
        return file->getData();
    }
};

#endif //DESIGNPATTERN_VIRTUALFILE_H
