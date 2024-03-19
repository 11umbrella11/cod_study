#include <iostream>
using namespace std;

class Circle {
public:
  int radius;
  double getArea();
};

//클래스 구현부
double Circle::getArea(){
  return 3.14*radius*radius;
}

int main(){
  Circle donut;//객체 donut생성
  donut.radius=1;
  double area =donut.getArea();
  cout<<"donut:"<<area<<endl;
  Circle pizza;//객체 pizza생성
  pizza.radius=40;
  area=pizza.getArea();
  cout<<"pizza:"<<area<<endl;
  

}