#ifndef HANDLER_H
#define HANDLER_H

#include <stdlib.h>

class Handler {
public:
    virtual void setNext(Handler* next) = 0;
    virtual void handleRequest(int request) = 0;
};

#endif  // HANDLER_H
