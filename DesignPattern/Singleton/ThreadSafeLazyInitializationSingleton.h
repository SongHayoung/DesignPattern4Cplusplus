//
// Created by SummerFlower on 13/08/2020.
//

#ifndef DESIGNPATTERN_THREADSAFELAZYINITIALIZATIONSINGLETON_H
#define DESIGNPATTERN_THREADSAFELAZYINITIALIZATIONSINGLETON_H
/*
#include <iostream>
#include <mutex>

class ThreadSafeLazyInitializationSingleton
{
    static ThreadSafeLazyInitializationSingleton* instance;
    static std::mutex Mutex;
protected:
    ThreadSafeLazyInitializationSingleton()
    {
        std::cout<<"ThreadSafeLazyInitializationSingleton Instance Constructed"<<std::endl;
    }
    ThreadSafeLazyInitializationSingleton(const ThreadSafeLazyInitializationSingleton&) = delete;
    ThreadSafeLazyInitializationSingleton* operator=(const ThreadSafeLazyInitializationSingleton*) = delete;
public:
    static ThreadSafeLazyInitializationSingleton* getInstance();
};

ThreadSafeLazyInitializationSingleton* ThreadSafeLazyInitializationSingleton::instance = nullptr;

ThreadSafeLazyInitializationSingleton* ThreadSafeLazyInitializationSingleton::getInstance()
{
    std::lock_guard<std::mutex> lock(Mutex);
    if(instance == nullptr)
        instance = new ThreadSafeLazyInitializationSingleton();
    return instance;
}
*/
#endif //DESIGNPATTERN_THREADSAFELAZYINITIALIZATIONSINGLETON_H
