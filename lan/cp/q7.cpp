#include <iostream>
using namespace std;

//31. 자료형의 크기 이해하기(size of)


class Temp{
    int no;
    bool is_on;
};

int main(){

    cout<<"char크기: "<<sizeof('p')<<endl;
    cout<<"int크기: "<<sizeof(10)<<endl;
    cout<<"double크기:"<<sizeof(10.0)<<endl;
    cout<<"클래스 크기: "<<sizeof(Temp)<<endl;

    return 0;

}
//결과 
/*
char크기: 1
int크기: 4
double크기:8
클래스 크기: 8
*/