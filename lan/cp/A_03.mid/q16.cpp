//76. call by address 이해하기
/*
#include<iostream>
#include<string>

using namespace std;

void Func1(bool *is_on){
    cout<<"Call by address: "<<sizeof(is_on)<<endl;//주소값을 출력
    cout<<"-"<<is_on<<endl;
    
}
void Func2(bool &is_on){
    cout<<"Call by reference: "<<sizeof(is_on)<<endl;
    cout<<"-"<<is_on<<endl;
}//

int main(){
    bool is_tmp = true;

    Func1(&is_tmp);
    Func2(is_tmp);

    return 0;

};
*/
//출력: 
//Call by address: 8
//-0x7ff7bab9d35b
//Call by reference: 1
//-1

//77. const 변수 이해하기
///*
#include <string>
#include <iostream>

using namespace std;

int main

//*/