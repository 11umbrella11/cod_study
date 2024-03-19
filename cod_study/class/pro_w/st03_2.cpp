#include <iostream>
using namespace std;

/*class Rectangle{
public:
int width;
int height;
int getArea();
};

int Rectangle::getArea(){
  return width*height;
}

int main(){
  Rectangle rect1, rect2;
  rect1.width =3;
  rect1.height = 9;
  //int area=rect1.getArea();
  //cout <<"rect1:"<<area<<endl;
  //Rectangle rect2;
  rect2.width =6;
  rect2.height = 7;
  int area1=rect1.getArea();
  int area2 =rect2.getArea();
  cout <<"rect1:"<<area1<<endl;
  cout <<"rect2:"<<area2<<endl;
}*/
class Circle {
public:
  int radius;
  double getArea();
  Circle();
  Circle(int r);

};
Circle::Circle() : Circle(1) {
  //위임생성자: 코드 중복을 줄임
}
//클래스 구현부
/*Circle::Circle() {
  radius=1;
  cout <<"반지름"<<radius<<"생성"<<endl;
  //return 3.14*radius*radius;
}*/

Circle::Circle(int r){
  radius=r;
  cout <<"반지름"<<radius<<"생성"<<endl;
}

double Circle::getArea(){
  return 3.14*radius*radius;
}
int main(){
  Circle donut;//객체 donut생성
  donut.radius=1;
  double area =donut.getArea();
  cout<<"donut:"<<area<<endl;
  //Circle pizza;//객체 pizza
  Circle pizza(35);
  //pizza.radius=40;
  area=pizza.getArea();
  cout<<"pizza:"<<area<<endl;
  
  

}
