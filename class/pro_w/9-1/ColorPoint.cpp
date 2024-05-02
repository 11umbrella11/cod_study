#include "ColorPoint.h"
#include<iostream>

using namespace std;

ColorPoint::ColorPoint(){
    colot = "무색";
    cout<<"ColorPoint생성지:"<<color<<endl;
}
ColorPoint::~ColorPoint(){
    cout<<"ColorPoint생성지:"<<color<<endl;
}
void ColorPoint::setColor(string color){
    this->color=color;
}
void ColorPoint::showColorPrint(){
    cout<<color;
    //cout<<"("<<x<<","<<y<<")"<<endl;
    showPoint();
}