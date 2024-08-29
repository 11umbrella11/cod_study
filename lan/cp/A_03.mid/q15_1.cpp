//74.call by value 이해하기
#include<iostream>

using namespace std;

void Func(int arg){
    cout<<"변경 전 : "<<arg<<endl;             
    arg+=10;
    cout<<"변경 후 : "<<arg<<endl;
}

int main(){
    int year = 10;
     Func(year);
     //call by value의 경우, 함수이용시 내부의 인자를 이용해서 연산및 작업
     //하지만 해당변화는 내부적으로만 복사해 이용되며, 함수가 종료후 원래값이 나옴.
     cout<<"함수 종료 후: "<<year<<endl;

     return 0;
};