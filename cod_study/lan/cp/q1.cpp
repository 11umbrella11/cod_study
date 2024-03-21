#include <iostream> //이걸 정의하지않으면 "식별자 cout가 정의되지않습니다"출력
using namespace std; //std::생략 (::는 스코프 설정 연산자)

int main(){
    //cout<<"hello world!"; //cout<<에서 <<는 컴파일러와 약속
    //cout<<"끝"

    //int num =0 ;
    //cout<<"정수를 입력하시오:";
    //cin >> num;
    //cout<<"입력하신 정수는"<<num<<"입니다"<<endl;
    int fir =3;
    int scd =8;
    int sum =fir + scd;
    cout<<"3+8="<<sum<<endl;

    return 0;//프로그램 종료 
}
