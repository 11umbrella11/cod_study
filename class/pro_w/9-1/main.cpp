#include<iostream>
#include"Shape.h"
#include"Circle.h"
using namespace std;

int main(){
    Shape *pShape=new Shape();
    pShape->paint();
    delete pShape;
    pShape=new Circle();
    pShape->paint;
    delete pShape;
    pShape=new Rect();
    pShape->paint;

    delete pShape;
}