//71.포인터 배열 사용하기
/*
#include<iostream>

using namespace std;

int main(){
    const int kSize = 3; // const로 선언되면 변수가 아닌 상수호 인식됨
    //const를 멤버변수로 써야할 경우에는 초기화 하지않으면 컴파일에러 발생(class, struct)

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
        // *pointer배열의 내용값을 순서대로 출력
    }
}
*/

//<출력>
/*
Pointer1[0]= 30
Pointer1[1]= 22
Pointer1[2]= 18
Pointer2[0]= 1
Pointer2[1]= 2
Pointer2[2]= 3
*/
/*
//72. 지역변수 이해하기 ~ 특정 영역에서만 쓰이는 함수

using namespace std;

int Temp1(const int arg){
    int number = 20;
    
    return (number+7)/3;
}

int Temp2(const int arg){
    int number = arg;

    return sqrt(number+2);
}

int main(){
    int number = 23;

    int rtn1 = Temp1(number);
    int rtn2 = Temp2(number);

    cout<<"메인함수 number : "<<number<<endl;
    cout<<"Temp1 number : "<<rtn1<<endl;
    cout<<"Temp2 number : "<<rtn2<<endl;

    return 0;

}
*/
//<출력>
/*
메인함수 number : 23
Temp1 number : 9
Temp2 number : 5
*/

//73. 전역함수 이해하기

#include<iostream>

using namespace std;

int g_number = 100;
//책에서는 int앞에 extern 을 붙이라고 했으나 안 붙여도 정상작동
//붙일경우 warning: 'extern' variable has an initializer에러 발생
//하지만 변수의 경우, 해당 변수를 가져다 쓰는 파일에서 재정의시 extern을 반드시붙여야한다.
int Func1(){
    return g_number++;
}

int Func2(){
    return g_number++;
}

int main(){
    int number = g_number++;

    cout<<"메인 number : "<<number<<endl;
    cout<<"Func1 number : "<<Func1()<<endl;
    cout<<"Func2 number : "<<Func2()<<endl;

    return 0;
}

/*
<출력>
메인 number : 100
Func1 number : 101
Func2 number : 102
*/