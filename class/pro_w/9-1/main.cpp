#include<iostream>
#include"Point.h"
#include"ColorPoint.h"
using namespace std;


int main(){
Point p;
p.set(10,20);
p.showPoint();
Point p2(200,300);
p2.showPoint();
ColorPoint cp;
cp.set(15,45);
cp.showPoint();
cp.setColor("RED");
cp.showColorPrint();
//upcounting
ColorPoint *pDer = &cp;
pDer->showColotPoint();

//upcasting
Point *pBase = pDer;
pBase->showPoint();
//이건 안됨(데이터 타입이 다름) pBase->showColorPoint();

//down casting
pDer = (ColorPoint *)pBase;
//명시적으로 형변환을 하지않으면 에러발생
pDer->showColorPrint();

pDer = (ColorPoint *)&p;
pDer ->showPoint();
pDer ->showColorPrint();//이건 포인팅하는 컬러가 없기떄문에 엉뚱한 결과가 나옴
}