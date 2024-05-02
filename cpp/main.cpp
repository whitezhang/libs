#include <memory>
#include "singleton.h"
#include "concrete_handler.h"

void TestHander() {
    // 创建具体处理器对象
    Handler* handlerA = new ConcreteHandlerA();
    Handler* handlerB = new ConcreteHandlerB();
    Handler* handlerC = new ConcreteHandlerC();

    // 设置处理器的下一个处理器
    handlerA->setNext(handlerB);
    handlerB->setNext(handlerC);

    // 发送请求
    handlerA->handleRequest(15); // 请求会被 ConcreteHandlerB 处理
    handlerA->handleRequest(5);  // 请求会被 ConcreteHandlerA 处理
    handlerA->handleRequest(25); // 请求会被 ConcreteHandlerC 处理
    handlerA->handleRequest(35); // 无处理器能处理该请求
}

void TestSingleton() {
    Singleton& singleton = Singleton::getInstance();
    singleton.printMessage();
}

int main() {
    TestSingleton();

    TestHander();

    return 0;
}
