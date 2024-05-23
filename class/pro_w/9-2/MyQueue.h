#ifndef MYQUEUE_H
#define MYQUEUE_H
#include"BaseArray.h"

class MyQueue : public BaseArray{
int head, tail, size;

public:
    MyQueue(int capacity);
    void enqueue(int n);
    int capacity();
    int length();
    int dequeue();

};
#endif