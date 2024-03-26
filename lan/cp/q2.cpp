#include <iostream>
using namespace std;

//사칙연산 응용          

int main(){
    int one=3;
    int two=5;
    int sum1=6;
    int sum2=2;

    sum1=sum1+two;
    sum2+=one;

    cout <<"sum1 = " <<sum1<<endl;
    cout<<"sum2="<<sum2<<endl;

    sum1=6;
    sum2=8;
    sum1*=one;
    sum2/=two;

    cout << "re_sum1="<<sum1<<endl;
    cout<<"re_sum2="<<sum2<<endl;

    

    

//7.자료형 이해하기

    char character = 'C';
    int integer = 100;
    double precision = 3.14159;
    bool is_true = true;
    string word = "HELLO WORLD";

    cout <<"char: "<<character<<endl;
    cout << "integer: "<<integer<<endl;
    cout <<"double: "<<precision<<endl;
    cout <<"bool: "<<is_true<<endl;
    cout <<"string: "<<word<<endl;


//8. 조건문(if~else)

    int x =10;
    int y = 1;

        if (x>y)
            cout<<"x는 y보다 큽니다"<<endl;
        else
            cout<<"x는 y보다 작습니다"<<endl;

//9.순환문 배우기

    int s5= 0;
    int s6= 0;

    int one1 =1;
    int two2=2;

    for (int i =0;i<5;i++){
        s5+=one1;
        s6+=two2;

    }
    cout<<"합산결과-> sum1:"<<s5<<"sum2:"<<s6<<endl;

//10. 배열배우기
    const int kArraysize=3;//const: 상수, 사이즈 지정
    int founding[kArraysize];//선언
    founding[0]=918;
    founding[1]=1392;
    founding[2]=1948;

    cout<<"고려 건국 년도"<<founding[0]<<endl;
    cout<<"조선 건국 년도"<<founding[1]<<endl;
    cout<<"한국 건국 년도"<<founding[2]<<endl;

    return 0;
    
}