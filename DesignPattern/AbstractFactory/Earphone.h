//
// Created by SummerFlower on 10/08/2020.
//

#ifndef DESIGNPATTERN_EARPHONE_H

#include <iostream>
#define DESIGNPATTERN_EARPHONE_H


class Earphone
{
public:
    virtual ~Earphone() {};
};

class AppleEarphone : public Earphone
{
public:
    AppleEarphone()
    {
        std::cout<<"AppleEarphone Constructed"<<std::endl;
    }
};

class SamsungEarphone : public Earphone
{
public:
    SamsungEarphone()
    {
        std::cout<<"SamsungEarphone Constructed"<<std::endl;
    }
};


#endif //DESIGNPATTERN_EARPHONE_H
