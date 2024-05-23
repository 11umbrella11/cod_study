#include "BaseArray.h"
#include "MyStack.h"
#include<iostream>
using namespace std;

MyStack::MyStack(int capacity):BaseArray(capacity){
    tos=0;
}
MyStack::void push(int n){
    if(tos==capacity())return;
    put(tos++, n);
}
MyStack::int pop(){
    if(tos==0) return -1;
    return get(--tos);

}
    int capacity(){
        return getCapacity();
    }
    int length(){
        return size;
    }