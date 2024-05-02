#include<iostream>
#include "Point.h"
using namespace std;

int main(){
    Point::Point(){
        x=y=0;
        cout<<"Point생성자:";
        showPoint();
    }
    Point::Point(int x, int y){
        this->x =x;
        this->y=y;

    }
    Point::~Point(){
        cout<<"point 소멸자: ";
        showPoint();

    }
    Point::void set(int x, int y){
        this->x=x;
        this->y=y;

    }
    Point::void showPoint(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
}