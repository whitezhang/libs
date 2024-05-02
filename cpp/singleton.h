#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
public:
    static Singleton& getInstance();

    void printMessage();

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

private:
    Singleton();
};

#endif // SINGLETON_H
