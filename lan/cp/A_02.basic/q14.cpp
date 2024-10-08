//66. 문자열 뒤집기
/*
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string str = "dfsbgfhs";

    reverse(str.begin(), str.end());
    cout<<"문자열 뒤집기: "<<str<<endl;
    return 0;
}
*/
//<출력> 문자열 뒤집기: shfgbsfd

//67.숫자를 문자열로 변환하기(to_string)
/*
#include <iostream>
#include<string>

using namespace std;

int main(){
    int number1 = 10;
    double number2 = 34.2;

    cout<<"바꾸기전\nnumber1: "<<number1<<endl;
    cout<<"number2: "<<number2<<endl;  

    string no_str1= to_string(number1);
    //문자열로 변경
    string no_str2=to_string(number2);

    cout<<"바꾼후\nnumber1: "<<number1<<endl;
    cout<<"number2: "<<number2<<endl;

    return 0;
}
*/
//<출력>
/*
바꾸기전
number1: 10
number2: 34.2
바꾼후
number1: 10
number2: 34.2
*/

//68. 정수와 문자의 최소/최대값 알아내기
/*
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    auto result1 = min(1,5);
    auto result2 = max('a', 'z');
    cout<<result1<<","<<result2<<endl;

    auto result3 = minmax({'l','e','k'});
    auto result4 = minmax({4, 9, 2});

    cout<<result3.first<<","<<result3.second<<endl;
    cout<<result4.first<<","<<result4.second<<endl;

    return 0;

}
*/

//69. 포인터 이해하기
/*
#include<iostream>

using namespace std;

int main(){
    int number1 = 10;
    int *pointer1 = &number1;// *pointer1에 number1의 주소값을 대입
// *(변수)->주소를 저장할 변수 
// &(변수)->해당 변수를 불러옴
    double number2 = 23.7;
    double *pointer2 = &number2;

    cout<<"number1="<<number1<<"(size="<<sizeof(number1)<<")"<<endl;
    cout<<"pointer="<<pointer1<<"(size="<<sizeof(pointer1)<<")"<<endl;

    cout<<"number2="<<number2<<"(size="<<sizeof(number2)<<")"<<endl;
    cout<<"pointer2="<<pointer2<<"(size="<<sizeof(pointer2)<<")"<<endl;

    return 0;
}
*/
//<결과>
/*
number1=10(size=4)
pointer=0x7ff7b9c822d8(size=8)
number2=23.7(size=8)
pointer2=0x7ff7b9c822c8(size=8)
*/

//70. 포인터 변수 사용하기

#include <iostream>
#include <string>
#include <vector>
//vector: 메모리를 할당하여 사용. 블록 밖으로 나가거나 return을 만나면 자동으로 메모리 해제
using namespace std;

int PointerFunc(vector<string> *info){
//함수선언~인자의 자료형: vector<string>
//함수의 인자로 전달받은 벡터의 크기를 조회해, 비어있다면 0출력 아니면 벡터의 사이즈 출력
    if (info->empty() == true)//->는 포인터 변수를 다루는 규칙
        return 0;
    else
        return sizeof(info);
}

int main(){
    vector<string> message;
    message.push_back("고려장군");
    //push_back은 vector의 마지막에 새로운 원소를 추가하기위해 
    //          임시객체를 하나 만들어서 거기에 값을 복사한 후 vector에 삽입. 삽입후 임시객체 삭제
    message.push_back("김철수!");
    message.push_back("절친이름은");
    message.push_back("sfdnslnslncsd");
    for(int i=0; i>3 ; i++){
        cout<<message[i]<<endl;
    }
    //cout<<"메세지의 내용: "<<message<<endl;
    cout<<"포인터: "<<&message<<"\n"<<"포인터의 인자크기: "<<PointerFunc(&message)<<endl;
    //포인터는 문자+숫자로 8이 출력됨
    cout<<"원래 변수 크기: "<<sizeof(message)<<endl;
    //sizeof는 타입의 크기, string문자열 4개
    cout<<"할당 갯수: "<<message.size()<<endl;
    //size()는 할당된 공간의 갯수
    return 0;

}
