#include<iostream>
using namespace std;

//21.대입연산자 이햐하기

/*
int main(){
    int x = 1;
    int y = 9;

    int z =x+y;

    double a = 2.9;
    double b = 6.3;

    double c = a+b;

    //cout<<"a+b="<<c<<"x+y="<<z<<endl;//이렇게 되버리면 둘다 정수값으로 출력됨
    cout<<"a+b="<<c<<endl;
    cout<<"x+y="<<z<<endl;

}
*/

//22. 부호 연산자 이해하기
/*
int main(){

    int x=9;
    int y= -3;
    int z=-4;

    cout << "9+(-3)="<<x+y<<endl;
    cout << "(-4)+(-3)="<<y+z<<endl;

    return 0;

}
*/

//23. 증감연산자 이해하기
/*
int main(){

    int x =8;

    cout <<"x="<<x++<<endl;//+1,x를 사용한뒤 1 증가
    cout <<"x="<<x++<<endl;//+1
    cout <<"x="<<++x<<endl;//+2, 1을 추가한 뒤 사용
    cout <<"x="<<x--<<endl;//-1
    cout <<"x="<<x--<<endl;//-1
    cout <<"x="<<--x<<endl;//-2
    
    return 0;
}
*/

//24.관계연산자 이해하기

#include<string>

int main(){

    string publisher = "정보문화사";
    string language = "c++";

    int x = 20;
    int y = 20;

    if (publisher != language) cout <<"두 문장은 같지않습니다"<<endl;
    else cout <<"두 문장은 같습니다"<<endl;

    if (x>=y) cout <<"x는 y보다 크거나 같습니다."<<endl;
    else cout <<"x는 y보다 작거나 같지않습니다."<<endl;

    if (x<=y) cout <<"x는 y보다 작거나 같습니다."<<endl;
    else cout <<"x는 y보다 크거나 같지않습니다."<<endl;

    return 0;

}