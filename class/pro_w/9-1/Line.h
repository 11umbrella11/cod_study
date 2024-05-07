#ifndef LINE_H
#define LINE_H
#include <iostream>

class Line::public Shape {
  public:
    visual void Line(){
      cout<<"Line::draw"<<endl;
    }
}