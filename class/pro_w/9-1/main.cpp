#include<iostream>
#include"Shape.h"
#include"Circle.h"
using namespace std;

int main(){
    Shape *pShape=new Shape();
    pShape->paint();

    pShape=new Circle();
    pShape->paint;

    pShape=new Rect();
    pShape->paint;

    delete p;
}