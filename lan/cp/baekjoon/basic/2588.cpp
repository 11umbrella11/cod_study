//(세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.
// 계산을 하는 과정에서 일의자릿수(1),십의자릿수(2),백의자릿수(3)연산과 결과값(4)를 차례대로 출력하는 코드를 작성할 것

#include<iostream>
using namespace std;

int main(){
    int num1=0, num2=0;
    int fst=0, snd=0, trd=0;
    cin>>num1;
    cin.ignore();//cin에서 쓰이지않는 입력버퍼를 지워줌
    //입력한 두 값을 줄바꿈하여 입력되는 것을 전제함
    cin>>num2;
    fst=num2/100;
    snd=(num2/10)%10;
    trd=num2%10;
    cout<<"-----------"<<endl;
    cout<<num1*trd<<"\n"<<num1*snd<<"\n"<<num1*fst<<"\n"<<num1*num2<<endl;
    
}