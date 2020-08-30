//
// Created by SummerFlower on 13/08/2020.
//

#ifndef DESIGNPATTERN_THREADSAFEDOUBLELOCKINGLAZYINITIALIZATIONSINGLETON_H
#define DESIGNPATTERN_THREADSAFEDOUBLELOCKINGLAZYINITIALIZATIONSINGLETON_H
/*
#include <iostream>
#include <mutex>

class ThreadSafeDoubleLockingLazyInitializationSingleton
{
    static ThreadSafeDoubleLockingLazyInitializationSingleton* instance;
    static std::mutex Mutex;
protected:
    ThreadSafeDoubleLockingLazyInitializationSingleton()
    {
        std::cout<<"ThreadSafeDoubleLockingLazyInitialization Instance Constructed"<<std::endl;
    }
    ThreadSafeDoubleLockingLazyInitializationSingleton(const ThreadSafeDoubleLockingLazyInitializationSingleton&) = delete;
    ThreadSafeDoubleLockingLazyInitializationSingleton* operator=(const ThreadSafeDoubleLockingLazyInitializationSingleton*) = delete;
public:
    static ThreadSafeDoubleLockingLazyInitializationSingleton* getInstance();
};

ThreadSafeDoubleLockingLazyInitializationSingleton* ThreadSafeDoubleLockingLazyInitializationSingleton::instance = nullptr;

ThreadSafeDoubleLockingLazyInitializationSingleton* ThreadSafeDoubleLockingLazyInitializationSingleton::getInstance()
{

    if(instance == nullptr)
    {
        std::lock_guard<std::mutex> lock(Mutex);
        if(instance == nullptr)
            instance = new ThreadSafeDoubleLockingLazyInitializationSingleton();
    }
    return instance;
}
*/
#endif //DESIGNPATTERN_THREADSAFEDOUBLELOCKINGLAZYINITIALIZATIONSINGLETON_H
