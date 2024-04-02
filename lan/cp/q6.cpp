#include <iostream>
using namespace std;

//26.조건부 삼항 연산자 이해하기
/*
int main(){

    int x = 1;
    int y = 2;
    int z = 0;

    z=x>y?x:y;
    cout<<"x와 y중 더 큰값은: "<<z<<endl;
    
    return 0;
}//결과 값은 2가 나옴 -> 해당되는 변수명이 출력되는 것이 아닌 값이 출력.

*/

//27. 쉼표 연산자 이해하기(,)
/*
int main(){

    int goguryeo = 37, baekjae = 18, silla = 57; 
    //이건 printf의경우에만 가능!!

    printf("삼국 건국연도\n");
    printf("고구려bc%d년, 백제 bc%d년, 신라 bc%d년\n", goguryeo, baekjae, silla);

    return 0;

}
*/
//비트 연산자 이해하기
/*
#include<bitset>

int main(){
    bitset<8> bit1;//bitset의 변수를 선언하며 크기는 8로 할당합니다.
    bit1.reset(); //0000 0000 
    bit1=127; //0111 1111

    bitset<8> bit2;
    bit2.reset();//0000 0000
    bit2=0x20; //32=0010 0000

    bitset<8> bit3 = bit1 & bit2;//AND연산
    bitset<8> bit4 = bit1 | bit2;//OR연산
    bitset<8> bit5 = bit1 ^ bit2;//XOR연산
    bitset<8> bit6 = ~bit1;//REVERSE
    bitset<8> bit7 = bit2 << 1;//A>>n:A의 모든 비트를 n만큼 오른쪽 시프트
    bitset<8> bit8 = bit2 >> 1;//A>>n:A의 모든 비트를 n만큼 왼쪽 시프트

    cout<<"bit1&bit2 :"<<bit3<<","<<bit3.to_ulong()<<endl;
    cout<<"bit1|bit2 :"<<bit4<<","<<bit4.to_ulong()<<endl;
    cout<<"bit1^bit2 :"<<bit5<<","<<bit5.to_ulong()<<endl;
    cout<<"~bit1 :"<<bit6<<","<<bit6.to_ulong()<<endl;
    cout<<"bit2<<1 :"<<bit7<<","<<bit7.to_ulong()<<endl;
    cout<<"bit2>>1 :"<<bit8<<","<<bit8.to_ulong()<<endl;

    return 0;

}
*/
/*결과값:
bit1&bit2 :00100000,32
bit1|bit2 :01111111,127
bit1^bit2 :01011111,95
~bit1 :10000000,128
bit2<<1 :01000000,64
bit2>>1 :00010000,16
*/

//29. 캐스트 연산자 이해하기(static_cast)

int main(){

    int x = 2;
    double y = 4.4;

    int i = static_cast<int>(y/x);//형변환 에러를 막기위한 변환 연산자
    int j = (int)y/x;//타입지정
    double k = y / x;

    cout << "4.4/2 = (static_cast<int>)"<<i<<endl;
    cout << "4.4/2 = (int)"<<j<<endl;
    cout << "4.4/2 = "<<k<<endl;

    return 0;
}
//static_cast<>: 기본적인 cast
//dynamic_cast<>: 객체지향언어의 다형성을 이용하여 모호한 타입의 캐스트오류를 막아줌
//const_cast: 자료혀이 갖고있는 상수속성을 제거
//reinterpret_cast<>: 포인터타입끼리도 변환할 수 있게 도와줌
/*
결과값
4.4/2 = (static_cast<int>)2
4.4/2 = (int)2
4.4/2 = 2.2
*/