#include<iostream>
using namespace std;

//11. 함수배우기
void Minus(const int x, const int y){
    cout<<"x-y="<<x-y<<endl;
}

int Plus(const int x, const int y){
    return x+y;
}

int main(){
    Minus(19, 3);
    cout << "x+y="<<Plus(19, 3)<<endl;

    return 0;
}