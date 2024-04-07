#include<iostream>
#include"MyIntStack.h"

MyIntStack::MyIntStack(){
    int tos =0;//reset
};

bool MyIntStack::push(int n){
    if(tos ==10)//네 스택의 값이 가득찼을때
    {
        //stack full
        return false;
    }
    p[tos++]=n;//후위연산
    //tos++;
    return true;
}; // 정수 n 푸시. 꽉 차 있으면 false, 아니면 true 리턴
bool MyIntStack::pop(int &n){
    if(tos==0){
        //stack empty
         return false;

    }
    //tos--;
    n = p[tos--];
    return true;

};