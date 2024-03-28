#ifndef CIRCLE_H
#define CIRCLE_H

#include<iostream>

class Circle{
    int radius;
    public:
    void setRadius(int radius){
        this->radius=radius;
    }
    double getArea(){
        return 3.14*radius*radius;
    }
    
};
#endif;