#include<iostream>
using namespace std;

//11. 함수배우기
/*void Minus(const int x, const int y){
    cout<<"x-y="<<x-y<<endl;
}

int Plus(const int x, const int y){
    return x+y;
}

int main(){
    Minus(19, 3);
    cout << "x+y="<<Plus(19, 3)<<endl;

    return 0; //이게 없으면, "오류 (4716 'Plus': 값을 반환해야합니다.) 출력"
}*/

//13.네임스페이스 배우기

namespace silla{
    int year =935;
    void CentralArea(){
        cout<<"경상도"<<endl;
    }
}