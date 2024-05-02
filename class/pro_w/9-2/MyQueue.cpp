#include<iostream>
#include"MyQueue.h"
#include"BaseArray.h"
using namespace std;



    MyQueue::MyQueue(int capacity): BaseArray(capacity){
       head =0;//새로운 값을 넣을 위치
       tail =-1; //값을 가져올 위치
       size =0;

    }

    void MyQueue::enqueue(int n){
        //queue full
        if(size==capacity()) return;
        put(head++, n);
        size++;
        head = head % capacity();//100까지 끝까지 가면 돌아감
    }
    int MyQueue::capacity(){
        return getCapacity();
    }
    int MyQueue::length(){
        return size;
    }
    int MyQueue::dequeue(){
        //queue empty
        if(size==0)return -1;
        size--;
        tail++;
        tail = tail % capacity();
        return get(tail);
    }
