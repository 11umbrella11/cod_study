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
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    auto result1 = min(1,5);
    auto result2 = max('a', 'z');
    cout<<result1<<","<<result2<<endl;

    auto result3 = minmax({'a','n','z'});
    auto result4 = minmax({1,2,3});

    cout<<result3.first<<","<<result3.second<<endl;
    cout<<result4.first<<","<<result4.second<<endl;

    return 0;

}
