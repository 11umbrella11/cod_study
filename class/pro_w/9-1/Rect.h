#ifndef RECT_H
#define RECT_H
#include<iostream>

class Rect : public Shape{
    public:
    virtual void draw(){
        cout<<"Rect::draw()"<<endl;

    }
    ~Rect(){
        cout<<"Rect::소멸자"<<endl;
    }
}