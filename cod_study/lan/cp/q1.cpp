#include <iostream> //이걸 정의하지않으면 "식별자 cout가 정의되지않습니다"출력
using namespace std; //std::생략 (::는 스코프 설정 연산자)

int main(){
    //1. hello world 출력
    //cout<<"hello world!"; //cout<<에서 <<는 컴파일러와 약속
    //cout<<"끝"

    //2. 입력한 정수값 출력
    //int num =0 ;
    //cout<<"정수를 입력하시오:";
    //cin >> num;
    //cout<<"입력하신 정수는"<<num<<"입니다"<<endl;

    //3. 두 정수의 합을 출력
    //int fir =3;
    //int scd =8;
    //int sum =fir + scd;
    //cout<<"3+8="<<sum<<endl;

    //4.변하지않는 값(상수)출력
    const int GREAT_VICTORY_SALSU =612; //const: 상수_만약 여기에 새로 값을 할당하면"식이 수정할 수 있는 1value여야합니다"라고 출력.
    const int GREAT_VICTORY_GWIJU =1019;

    cout<<"고구려 살수대첩의 년도는 "<<GREAT_VICTORY_SALSU<<"년도 입니다\n";
    cout<<"고려 귀주대첩의 년도는" <<GREAT_VICTORY_GWIJU<<"년도 입니다"<<endl;

    return 0;//프로그램 종료 
}
