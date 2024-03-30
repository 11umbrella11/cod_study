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

/*namespace silla{
    int year =935;
    void CentralArea(){
        cout<<"경상도"<<endl;
    }
}

namespace baekjae{
    int year =660;
    void CentralArea(){
        cout<<"충청도"<<endl;
    }
}

using namespace silla;
using namespace baekjae;

int main (){

    cout<<"신라의 중심지: "<<endl;
    silla::CentralArea();
    cout<<"신라 멸망년도: "<<silla::year<<endl;
    cout<<"백제의 중심지: "<<endl;
    baekjae::CentralArea();
    cout<<"백제 멸망년도: "<<baekjae::year<<endl;
 
    return 0;
}*/

//14. #include배우기
/*#include <vector>//표준 라이브러리 안에있는 파일이므로 <>로 엮음

int main(){
    vector<int> exam;//정수형 데이터를 저장할 exam이라는 벡터 생성
    exam.push_back(10);//벡터뒤에 10을 넣음
    exam.push_back(20);
    exam.push_back(30);

    for (int i=0, size=exam.size(); i<size;i++){
        cout<<"벡터값: "<<exam.at(i)<<endl;

    }
    return 0;
    
}*/
//15. 스코핑 룰 이해하기
int x = 10;

int Func1(){
    int y = x+10;
    return y;
}

int Func2(){
    int x=100;
    return x;
}

int main(){

    cout<<"y = "<<Func1()<<endl;
    cout<<"x = "<<Func2()<<endl;
    cout<<"x = "<<x<<endl;
    return 0;
}