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
}