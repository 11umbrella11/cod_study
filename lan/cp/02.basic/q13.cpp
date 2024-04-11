#include <iostream>
using namespace std;

//61. 문자열에서 특정문자만 제거하기
/*
#include<string>
int main(){

    string sentence = "i like coding";

    sentence.erase(remove(sentence.begin(), sentence.end(),' '),sentence.end());
    //변수명.erase(remove->특정문자의 모든인덱스를 erase에 알림(열 시작, 끝, 지울 대상),마지막위치->모든위치를 erase에 리턴)

    cout<<sentence<<endl;

    return 0;
}
*/

//62. 문자열 일부 교체하기
/*

#include <string>
int main(){

    string sentence = "i like coding";
    string find_str = "coding";//찾을 단어
    string replace_str = "history";//대체단어

    sentence.replace(sentence.find(find_str), find_str.length(),replace_str);
    //문자열.replace(문자열.find(찾을 단어)->의 위치, 찾아야할 문자열의 길이, 교체할 문자열)
    cout<<sentence<<endl;

    return 0;


}

*/

//63. 문자열을 정수로 변환
/*

#include <string>

int main(){
    string str1 = "10";
    string str2 = "2.456";
    string str3 = "456문자열";

    int num1 = stoi(str1);
    //stoi(문자열)->해당 문자열의 인자를 넘겨받아 정수로 변환(문자형의 경우 제거됨)
    int num2 = stoi(str2);
    int num3 = stoi(str3);

    cout<<num1<<","<<num2<<","<<num3<<endl;
    
    return 0;

    }
*/
/*




//64.문자열을 숫자로 변환하기
/*

#include <sstream>

int main(){
    stringstream ss;

    double number1 = 0.0;

    ss<<"1.2,2.6-3.8!4.7=8.9";

    cout<<("==string to double ==")<<endl;
    while(!ss.eof())
    {
        ss>>number1;
        ss.ignore();

        cout<<number1<<",";

    }

    ss.clear();
    ss.str("");
    ss<<"1, "<<"2"<<3<<" "<<4;

    int number2 = 0;
    
    cout<<number2<<"==string to int=="<<endl;
    cout<<endl<<"==string to int=="<<endl;
    while(!ss.eof()){
        ss>>number2;
        ss.ignore();

        cout<<number2<<",";

    }
    return 0;
}

*/

/*==string to double ==
1.2,2.6,3.8,4.7,8.9,0==string to int==

==string to int==
1,23,4,*/

//65. 문자열 정렬하기

#include <string>
