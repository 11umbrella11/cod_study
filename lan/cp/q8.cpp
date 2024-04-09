#include <iostream>
using namespace std;

//36. 순환문으로 홀수 짝수 찾기
/*
int main(){
    int data[10]={5,9,76,3,10,89,54,43,2,17};

    for(int i=0; i<10;i++){
        if (data[i]%2==0)
            cout<<i<<":"<<data[i]<<"는 짝수 입니다."<<endl;
        else
            cout<<i<<":"<<data[i]<<"는 홀수 입니다."<<endl;
    }
}*/
/*
결과값
0:5는 홀수 입니다.
1:9는 홀수 입니다.
2:76는 짝수 입니다.
3:3는 홀수 입니다.
4:10는 짝수 입니다.
5:89는 홀수 입니다.
6:54는 짝수 입니다.
7:43는 홀수 입니다.
8:2는 짝수 입니다.
9:17는 홀수 입니다.

*/

//37.조건 선택문 이해하기(switch)
/*
int main(){
    int number = 2;

    switch (number)
    {
    case 1:
        cout<<"number은 1입니다"<<endl;
        break;
    case 2:
        cout<<"number은 2입니다"<<endl;
        break;
    case 3:
        cout<<"number은 3입니다"<<endl;
        break; 
    case 4:
        cout<<"number은 4입니다"<<endl;
        break;  
    default:
        cout<<"number의 값을 알 수 없습니다"<<endl;
        break;
    }
    return 0;
}*/
//결과값
//number은 2입니다

//38. 조건순환문 이해하기(while~continue~break)
/*
int main(){
    int number =0;
    while(number < 10){
        //10보다 같거나 커질 떄까지
        number++;
        if(number%3==0)
            continue;
        else
            cout<<"number값: "<<number<<endl;
    }
    return 0;
}*/
/*
결과값
number값: 1
number값: 2
number값: 4
number값: 5
number값: 7
number값: 8
number값: 10*/

//39. 조건 순환문 이해하기(do~while, continue, break)
/*
int main(){

int number = 0;
//while문과 다르게 do while문은 무조건 한번은 실행됨
//근래에는 for, switch, while을 권장
do{
    number++;

    if(number%3 == 0)
        continue;
    else
        cout<<"number 값:"<<number<<endl;
}while(number<10);
return 0;
}
*/

/*
결과값
number 값:1
number 값:2
number 값:4
number 값:5
number 값:7ß
number 값:8
number 값:10
*/

//40. 반복문을 이용하여 구구단 출력하기
/*
int main(){
    int offset = 0;

    //for(int i = 1; i <=15; offset++){//이걸쓰면 피라미드식 곱셈식
    for(int i=1; i<16; i++)//일반적인 곱셈식
        for(int j = 1; j<=9 ; j++){
            cout<<i<<"*"<<j<<"="<<i*j<<endl;
            //for(int k = 0; k<offset;k++){
            //    cout<<"\t";
            //   cout<<(i+k+1)<<"*"<<j<<"="<<(i+k+1)*j;

            //}
            cout<<endl;//하나의 단수가 끝이날때

        }
        cout<<endl;//
        //offset++;
    }
    return 0;
}
*/
