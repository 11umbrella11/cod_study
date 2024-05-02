#ifndef POINT_H
#define POINT_H
#include<iostream>
#include "ColorPoint.h"

class Point{
    int x, y;
    public:
    Point();
    Point(int x, int y);
    ~Point();
    void set(int x, int y);
    void showPoint();
}


class Base{
    public:
    Base(){
        cout<<"Base생성자"<<endl;
    }
    ~Base(){
        cout<<"Base소멸자"<<endl;
    }


}
class Base : class Point{
    Point();
    Point(int x, int y);
    ~Point();
    void set(int x, int y);
    void showPoint();
}
#endif;