#include<iostream>
#include"GClass.h"
using namespace std;

int main(){[
    int a;
    double b;
    GClass<int, double> X;
    X.set(2,1.5);
    X.get(a,b);
    cout<<"a="<<a<<",b="<<b<<endl;
    char c;
    float f;
    GClass<char, float> y;
    y.set('m',12.5);
    y.get(c,f);
]}