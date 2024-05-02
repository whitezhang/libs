#ifndef CONCRETE_HANDLER_H
#define CONCRETE_HANDLER_H

#include "handler.h"

class ConcreteHandlerA : public Handler {
private:
    Handler* nextHandler;

public:
    void setNext(Handler* next) override;
    void handleRequest(int request) override;
};

class ConcreteHandlerB : public Handler {
private:
    Handler* nextHandler;

public:
    void setNext(Handler* next) override;
    void handleRequest(int request) override;
};

class ConcreteHandlerC : public Handler {
private:
    Handler* nextHandler;

public:
    void setNext(Handler* next) override;
    void handleRequest(int request) override;
};

#endif  // CONCRETE_HANDLER_H
