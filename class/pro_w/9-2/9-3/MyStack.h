#ifndef MYSTACK_H
#define MYSTACK_H
#include "BaseArray.h"

class MyStack : public BaseArray{
    int tos;
    MyStack(int capacity);
    void push(int n);
    int pop();
    int capacity();
    int length();
    

};
#endif