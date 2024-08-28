//71.포인터 배열 사용하기
#include<iostream>

using namespace std;

int main(){
    const int kSize = 3;

    int numbers[kSize] = { 30, 22, 18};
    int *pointer1 = numbers;
    //해당 number배열의 주소값을 pointer에 저장
    int no1=1;
    int no2=2;
    int no3=3;
    int *pointer2[kSize]={&no1, &no2, &no3};
    //no1부터 no3까지의 내용을 *pointer 배열에 입력

    for(int i=0; i<kSize; i++){
        cout<<"Pointer1["<<i<<"]= "<<*(pointer1+i)<<endl;
        //저장된 주소값의 다음에 위치한 배열 순서대로 출력
    }
    for(int i=0; i<kSize; i++){
        cout<<"Pointer2["<<i<<"]= "<<*pointer2[i]<<endl;
        //*pointer배열의 내용값을 순서대로 출력
    }
}