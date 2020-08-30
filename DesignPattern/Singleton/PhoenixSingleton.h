//
// Created by SummerFlower on 10/08/2020.
//

#ifndef DESIGNPATTERN_PHOENIXSINGLETON_H
#define DESIGNPATTERN_PHOENIXSINGLETON_H

#include <iostream>

class PhoenixSingleton
{
private:
    static bool bDestroyed;
    static PhoenixSingleton* pIns;

    PhoenixSingleton()
    {
        std::cout<<"PhoenixSingleton Constructor"<<std::endl;
    };

    PhoenixSingleton(const PhoenixSingleton& other);

    ~PhoenixSingleton()
    {
        std::cout<<"PhoenixSingleton Destructor"<<std::endl;
        bDestroyed = true;
    }

    static void Create()
    {
        static PhoenixSingleton ins;
        pIns = &ins;
    }

    static void KillPheonix()
    {
        pIns->~PhoenixSingleton();
    }

public:
    static PhoenixSingleton& GetInstance()
    {
        if (bDestroyed)
        {
            new(pIns) PhoenixSingleton;
            atexit(KillPheonix);
            bDestroyed = false;
        }
        else if (pIns == NULL)
        {
            Create();
        }

        return *pIns;
    }
};

bool PhoenixSingleton::bDestroyed = false;
PhoenixSingleton* PhoenixSingleton::pIns = NULL;


#endif //DESIGNPATTERN_PHOENIXSINGLETON_H