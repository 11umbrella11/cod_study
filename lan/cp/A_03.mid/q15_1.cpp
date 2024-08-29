//74.call by value 이해하기
/*
#include<iostream>

using namespace std;

void Func(int arg){
    cout<<"변경 전 : "<<arg<<endl;             
    arg+=10;
    cout<<"변경 후 : "<<arg<<endl;
}

int main(){
    int year = 10;
     Func(year);
     //call by value의 경우, 함수이용시 내부의 인자를 이용해서 연산및 작업
     //하지만 해당변화는 내부적으로만 복사해 이용되며, 함수가 종료후 원래값이 나옴.
     cout<<"함수 종료 후: "<<year<<endl;

     return 0;
};
*/
/*
<출력>
변경 전 : 10
변경 후 : 20
함수 종료 후: 10
*/

//75.call by reference
#include<iostream>
#include<string>

using namespace std;

void Func1(int &arg){
    //인자로 자료형의 주소를 가르키는 포인터를 받음
    cout<<"변경전: "<<arg<<endl;
    arg+=10;
    cout<<"변경 후: "<<arg<<endl;
}
void Func2(string &info){
    //인자로 자료형의 주소를 가르키는 포인터를 받음
    info+="981년";
}

int main(){
    int year = 10;
    Func1(year);
    cout<<"함수 종료 후: "<<year<<endl;
    string king_info = "고려 성종 즉위년: ";
    Func2(king_info);
    cout<<king_info;
    //call by value와 다르게 포인터를 사용해서 직접 바꾸기 떄문에 함수종료 후에도 같음
    return 0;

};

/*
<결과>
변경전: 10
변경 후: 20
함수 종료 후: 20
고려 성종 즉위년: 981년% 
*/