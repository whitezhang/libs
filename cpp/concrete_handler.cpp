#include <iostream>

#include "concrete_handler.h"

void ConcreteHandlerA::setNext(Handler* next) {
    nextHandler = next;
}

void ConcreteHandlerA::handleRequest(int request) {
    if (request <= 10) {
        // 处理请求的逻辑
        std::cout << "RequestA " << request << std::endl;
    } else if (nextHandler != NULL) {
        nextHandler->handleRequest(request);
    } else {
        // 无法处理请求的逻辑
    }
}

void ConcreteHandlerB::setNext(Handler* next) {
    nextHandler = next;
}

void ConcreteHandlerB::handleRequest(int request) {
    if (request > 10 && request <= 20) {
        // 处理请求的逻辑
        std::cout << "RequestB " << request << std::endl;
    } else if (nextHandler != NULL) {
        nextHandler->handleRequest(request);
    } else {
        // 无法处理请求的逻辑
    }
}

void ConcreteHandlerC::setNext(Handler* next) {
    nextHandler = next;
}

void ConcreteHandlerC::handleRequest(int request) {
    if (request > 20 && request <= 30) {
        // 处理请求的逻辑
        std::cout << "RequestC " << request << std::endl;
    } else if (nextHandler != NULL) {
        nextHandler->handleRequest(request);
    } else {
        // 无法处理请求的逻辑
    }
}
