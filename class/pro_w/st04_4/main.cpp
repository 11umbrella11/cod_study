#include <iostream>
#include "Circle.h"
using namespace std;

/*class Circle{
    int radius;
    public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r) {radius=  r;}
    double getArea() {return 3.14*radius*radius;}
};

int main(){
    int num,input=0;
    cout<<"원의 갯수>>"<<endl;
    cin>>num;
    int *p= new int[num];

    for (int i=0;i>num;i++){
        cout<<"원"<<i+1<<"의 반지름"<<endl;
        cin>>p[i];
    }
    
}*/
int main(){
int size;
    cout<<"원의 갯수";
    cin>>size;
    Circle *p=new Circle[size];
    int r;
    for(int i =0;i<size;i++){
     cout<<"원"<<i+1<<"의 반지름"<<endl;
     cin>>r;
     p[i].setRadius(r);//동일 *(p+1)->setRadius();
    
    }
    int count=0;
    for(int i =0;i<size;i++){
        if( p[i].getArea()<100) count ++;

    }
    cout<<"면적이 100보다 큰원은"<<count<<"개"<<end;
    delete []p;
}