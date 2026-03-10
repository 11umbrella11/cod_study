//꼬마 정민이는 이제 A + B 정도는 쉽게 계산할 수 있다. 이제 A + B + C를 계산할 차례이다!
//첫 번째 줄에 A, B, C (1 ≤ A, B, C ≤ 10^12)이 공백을 사이에 두고 주어진다.

#include <iostream>
using namespace std;

int main(){
    //위의 문제의 함정은 정수값의 범위가 int로는 감당되지않을만큼 크다는 것
    //int(4byte)=-2,147,483,648 ~ 2,147,483,647 , 대략 10의 9승 정도
    //long long(8byte)=-9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807 , 대략 10의 19승 정도
    //java에서는 long은 8byte, c/c++에서는 32bit는 4byte고 64bit에선 8byte
    //
    long num1=0;
    long num2=0;
    long num3=0;
    long long num4=0;
    
   cin>>num1>>num2>>num3;
   num4=num1+num2+num3;
    cout<<num4;
    return 0;
   
}