#include<iostream>
#include"Stack.h"
using namespace std;


Stack::Stack(int size = 10);
Stack::~Stack();{
    if(p)
    delete [] p;
}
Stack& Stack::operator<<(int n){
    //push
    if(tos ==size){
        //stack full
        return *this;
    }
    p[tos++]=n;
    return *this;

}
Stack& Stack::operator>>(int &n){
    //pop, stack empty
    if(tos==0)
    return *this;
    n=p[--tos];
    return *this;
}
bool Stack::operator!(){
if(tos==0) return true;
else  return false;
}