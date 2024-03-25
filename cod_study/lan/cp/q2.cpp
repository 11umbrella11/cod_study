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

    return 0;
    
}