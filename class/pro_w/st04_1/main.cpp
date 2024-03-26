#include <iostream>
using namespace std;

class Circle{
    int radius;
    public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r) {radius=  r;}
    double getArea() {return 3.14*radius*radius;}
}

Circle::Circle(){
    radius = 1;
    cout<<"생성자"<<radius<<endl;

}
Circle::~Circle(){
    cout<"소멸자"<<radius<<endl;
}

int main(){
    int radius;
    int n;
    cout<<"배열크기";
    cin>>n;
    Circle *pArray = new Circle[n];
    for(int i=0;i<n ;i++){
        pArray[i].setRadius(i*10); 
    }
    for(int i=0;i<n;i++){
        cout<<"넓이: "<<(pArray+i)->getAREA()<<endl;
    }

    Circle *pArray =new Circle[3];
    while(true){
        cout<<"반지름(음수:종료):";
        cin>>radius;
        if(radius<0)break;
        Circle *p =new Circle(radius);
        cout<<"면적:"<<(*p).getArea()<<endl;
        cout<<"면적:"<<p->getArea()<<endl;
    }
}