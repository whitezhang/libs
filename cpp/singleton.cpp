#include "singleton.h"
#include <iostream>

Singleton& Singleton::getInstance() {
    static Singleton instance;
    return instance;
}

void Singleton::printMessage() {
    std::cout << "Hello, I am a singleton instance!" << std::endl;
}

Singleton::Singleton() {}
