#include <iostream>
using namespace std;

template <typename T1, typename T2>//typename이든 class든 같다.

void mySwap(T1& a, T2& b){
    T1 tmp;
    tmp =a;
    a=b;
    b=tmp;
}

class Circle{
    int radius;
public:
Circle(int radius=1){
    this->radius=radius;
}
int getRadius {return radius;}
}
int main(){
    int a=3, b=5;
    mySwap(a,b);
    cout<<"a="<<a<<",b="<<b<<endl;

    double c=1.4, d=12.5;
    mySwap(c,d);
    cout<<"c=<<c<<",d="<<d<<endl;
    
    Circle donut(5),pizza(20);//다른타입의 경우 에러가 남
    mySwap(donut,pizza)"
    cout<<"donut="<<donut<<",pizza="<<pizza<<endl;
    }