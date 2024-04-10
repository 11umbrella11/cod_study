#include <iostream>
using namespace std;

//46.몫과 나머지 구하기
/*
int main(){

    double x = 5.7;
    int div1 = static_cast<int>(x/5);//나누기를 하되, 선언하는 값이 정수이므로 반환값은 정수값으로 함.
    double mod1 = x-5*static_cast<int>(x/5);//원래값-(나누려는 수의 몫(*와/의 상충))=나머지

    int y =10;
    int div2 = static_cast<int>(y/2);
    double mod2 = y%2;//y를 2로 나누고 나머지~0

    cout<<"5.7/5의 몫: "<<div1<<"나머지: "<<mod1<<endl;
    cout<<"10의 몫: "<<div2<<"나머지: "<<mod2<<endl;

    return 0;
}
*/

//47.제곱근 구하기
/*
int main(){
    //제곱근: sqry()
    cout<<"4의 제곱근: "<<sqrt(4.0)<<endl;
    cout<<"16의 제곱근: "<<sqrt(16)<<endl;
    cout<<"64의 제곱근: "<<sqrt(64)<<endl;
    cout<<"256의 제곱근: "<<sqrt(256)<<endl;

    return 0;
}
*/

//48.소수점 분리하기
//modf(입력값, 몫변수의 주소값)-> 반환값: 나머지의 소수값
/*
int main(){
    double x = 1.2345;
    double div = 0.0;
    double mod = 0.0;

    mod=modf(x, &div);//mod에는 나머지소수값이 기입, div의 값에 몫이 기입됨.

    cout<<"1.2345의 몫: "<<div<<"나머지: "<<mod<<endl;

    return 0;
}
*/

//49. 난수 생성하기
/*
#include<ctime>

int main(){
    srand(static_cast<unsigned int>(time(NULL)));
    //난수의 씨앗을 심는 과정~시간을 초기화, 난수가 항상 같지않도록 함

        for(int i = 0; i<5; i++)
            cout<<"난수: "<<rand()<<endl;
        //rand()함수를 통해 임의의 수(0~32767)값을 얻음
        return 0;
        //c++에서 제공하는 난수 템플릿
        //random_device, linear_congruentila_engine
        //mersenne_twister_engine, substract_with_carry_engine
}
*/

//50. 무작위로 문자열과 섞기

#include <random>
#include <algorithm>
#include <ctime>

int main(){
    string str1 = "1a2b3c4d5e6f7g8h9i";
    string str2 = "republic of korea";
    int data1[10] = {1,2,3,4,5,6,7,8,9,10};

    srand(static_cast<unsigned int>(NULL));//난수의 준비~리셋

    random_shuffle(str1.begin(), str1.end());//각 문장의 처음과 끝까지 재배치
    random_shuffle(str2.begin(), str2.end());
    random_shuffle(data1, data1+4);//해당 값의 인덱스 0~3까지 무작위로 재배치

    cout<<"==str=="<<endl;
    for(auto i: str1)//str1가 첫번째항목부터 i에 할당된다.
                    //auto가 자동으로 자료형을 판단해주는 것_하지만 auto선언시 초기화(값지정)이 없으면 사용불가
        cout<<i <<",";
    
    cout<<endl<<"==str2=="<<endl;
    for(auto i: str2)
        cout<<i<<",";

    cout<<endl<<"==data1=="<<endl;
    for(auto i: data1)
        cout<<i<<",";

    return 0;

}
