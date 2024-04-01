#include<iostream>
using namespace std;

//16. 문자형 변수 이해하기
/*
int main(){
    char ch1 = 'c'; // 아스키코드에서 제공하는 값
    char ch2 = 200;//char의 범위: -127~127, 

    unsigned char ch3 = 'c';//unsigned를 붙안것의 범위: 0~255
    unsigned char ch4 = 200;

    printf("char ch1 = %c, %d\n", ch1, ch1);
    printf("char ch2 = %c, %d\n", ch2, ch2);
    printf("char ch3 = %c, %d\n", ch3, ch3);
    printf("char ch4 = %c, %d\n", ch4, ch4);

    return 0;
}   */

//17. 문자열형 변수 찾기(str)

/*
#include<string>//문자열 라이브러리 (이는 c언어의 char과 유사)

int main(){
    string my_country = "korea";
    string my_job = "developer";

    cout<<"Country :"<<my_country<<endl;
    cout<<"job: "<<my_job<<endl;

    string my_info = my_country+","+my_job;//문자 열 합치기

    cout <<"My Info: "<<my_info<<endl;

    return 0;
}*/

//18. 정수형 번수 이해하기(int)
/*
int main(){
    int positive = 100;
    int negative = -200;
    int ascii_value = 'a';

    cout<<"양수:"<<positive<<endl;
    cout<<"음수:"<<negative<<endl;
    cout<<"아스키코드:"<<ascii_value<<endl;

    return 0;

}
*/

//19. 실수형 변수 이해하기(double)

int main(){
    double pi_d=3.14;
    float pi_f=3.14f;

    cout<<"pi_d: "<<pi_d<<endl;
    cout<<"pi_f: "<<pi_f<<endl;//float의 경우에는 f를 붙이지않으면 오류남 C4305

    return 0;
}