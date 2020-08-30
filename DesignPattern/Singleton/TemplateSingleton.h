//
// Created by SummerFlower on 13/08/2020.
//

#ifndef DESIGNPATTERN_TEMPLATESINGLETON_H
#define DESIGNPATTERN_TEMPLATESINGLETON_H

#include <stdlib.h>
#include <mutex>

template <typename T>
class TemplateSingleton
{
    static T* instance;
    static std::mutex Mutex;

    static void destroy()
    {
        if(instance != nullptr)
            delete instance;
    }

protected:
    TemplateSingleton() {}
    virtual ~TemplateSingleton() {}
    TemplateSingleton(const TemplateSingleton &singleton) = delete;

public:
    static T* getInstance()
    {
        if(instance == nullptr)
        {
            std::lock_guard<std::mutex> lock(Mutex);
            if(instance == nullptr)
            {
                instance = new T();
                atexit(destroy);
            }
        }

        return instance;
    }
};

template <typename T> T* TemplateSingleton <T>::instance = nullptr;
template <typename T> std::mutex TemplateSingleton <T>::Mutex;
#endif //DESIGNPATTERN_TEMPLATESINGLETON_H
