#include <iostream>
using namespace std;

//31. 자료형의 크기 이해하기(size of)

/*
class Temp{
    int no;
    bool is_on;
};

int main(){

    cout<<"char크기: "<<sizeof('p')<<endl;
    cout<<"int크기: "<<sizeof(10)<<endl;
    cout<<"double크기:"<<sizeof(10.0)<<endl;
    cout<<"클래스 크기: "<<sizeof(Temp)<<endl;
    //4+1이 아닌, 데이터 버스개념~4비트단위로 5비트이기떄문에 2번 반복~ 8비트


    return 0;

}
*/
//결과 
/*
char크기: 1
int크기: 4
double크기:8
클래스 크기: 8
*/

//32. 중첩조건문
/*int main(){
    int number1 = 100;
    int number2 = 6;

    if (number1<number2)
        cout<<"number1보다 number2가 더 큽니다."<<endl;
    else if (number1>number2)
        cout<<"number1보다 number2가 더 작습니다."<<endl;
    else
        cout<<"number1과 number2는 같습니다."<<endl;

    if (number2<7){
        if(number2>3){
            if(number2 == 4)
            cout<<"number2는 4입니다"<<endl;
            else if(number2 == 5)
                cout<<"number2는 5입니다."<<endl;
            else
                cout<<"number2는 6입니다."<<endl;
        }
        else{
            if(number2 == 3)
            cout<<"number2는 3입니다"<<endl;
            else if(number2 == 2)
                cout<<"number2는 2입니다."<<endl;
            else
                cout<<"number2는 1이하입니다."<<endl;
        }
    }
    return 0;    
}
*/
/*
결과
number1보다 number2가 더 작습니다.
number2는 6입니다.
*/

//33.중첩 조건믄으로 가장 큰 수 찾기
/*
#include<string>

int main(){
    int number1 = 100;
    int number2 = 200;
    int number3 = 300;

    if(number1>number2 && number1 > number3)
        cout<<"가장 큰 수 number 1:"<<number1<<endl;
    else if(number2>number1&&number2>number3)
        cout<<"가장 큰 수 number2:"<<number2<<endl;
    else if(number3>number1&&number3>number2)
        cout<<"가장 큰 수 number3: "<<number3<<endl;
    else
        cout<<"찾을 수 없습니다."<<endl;

        return 0;
}*/
//결과
//가장 큰 수 number3: 300

//34.중첩 순환문 이해하기
/*
int main(){
    int number = 7;

    for(int i=0; i<10; i++) 
    {
        if (i%3 ==0)continue;//3의 배수일 경우에는 i++만 하고 넘어감
        else if (i==number) break;//해당 루프 종료
        else cout<<"현재 i값:"<<i<<endl;
    }
    return 0;
}*/
/*
결과값

현재 i값:1
현재 i값:2
현재 i값:4
현재 i값:5*/

//35. 순환문으로 특정 문자개수 구하기
/*
#include<string>

int main(){

    string str ="Thr Jin State was formed in southern korea by the 3th century BC";
    //찾을 기본 문장
    char find = 'a';//찾을 문자

    int size = str.size();//문자열의 크기만큼 반복해야 하므로
    int count=0;// 찾는 단어의 갯수 카운트

    for(int i =0; i < size;i++){
        if(str[i]==find) count++; 
    }
    cout<<"문장의 a갯수는 "<<count<<"개 입니다"<<endl;

    return 0;
}*/
/*
결과값

문장의 a갯수는 3개 입니다
*/

