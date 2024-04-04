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
int main(){
    int number1 = 100;
    int number2 = 6;

    if (number1<number2)
        cout<<"number1보다 number2가 더 큽니다."<<endl;
    else
        cout<<"number1보다 number2가 더 작거난 같습니다."<<endl;
}