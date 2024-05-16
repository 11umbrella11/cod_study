#include <iostream>
using namespace std;

template <typename T>

void mySwap(T& a, T&b){
    T tmp;
    tmp =a;
    a=b;
    b=tmp;
}

class Circle{
    int radius;
public:
Circle(int radius=1){
    this->radius
}
}
int main(){
    int a=3, b=5;
    mySwap(a,b);
    cout<<"a="<<a<<",b="<<b<<endl;

    double c=1.4, d=12.5;
    mySwap(c,d);
    cout<<"c=<<c<<",d="<<d<<endl;
    
    Circle donut(5),pizza(20);
    mySwap(donut,pizza)"
    cout<<"donut="<<donut<<",pizza="<<pizza<<endl;
    }