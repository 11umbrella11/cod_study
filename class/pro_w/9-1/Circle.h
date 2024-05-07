#ifndef CIRCLE_H
#define CIRCLE_H
#include<iostream>

class Circle : public Shape{
    public:
virtual void paint(){
        cout<<"Shape::paint()"<<endl;

    }    
}