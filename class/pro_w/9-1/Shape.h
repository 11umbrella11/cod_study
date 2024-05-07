#ifndef SHAPE_H
#define SHAPE_H

#include<iostream>

class shape{
    public:
    virtual void draw(){
        cout<<"Shape::draw()"<<endl;

    }
    void  paint(){
        draw();
    }
    virtual ~Shape(){
        cout<<"가상소멸자"<<endl;
    }
}