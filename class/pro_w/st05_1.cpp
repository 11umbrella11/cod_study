#include<iostream>
using namespace std;

void half(double &n){//&로 참조를 하여야 바뀐값을 밑의 메임에 대입가능하다.
    n=n/2;
}

int main(){
    double n =20;
    half(n);
    cout<<n<<endl;
}