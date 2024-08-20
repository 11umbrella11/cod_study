#include <iostream>
using namespace std;

//56.문자열 대소문자 변환하기
/*
#include<algorithm>//transform함수가 정의됨
#include<string>

int main(){
    string silla ="divided into the Three Kingdoms.";
    string joseon = "Yi seong-gye, established Joseon in 1392.";

    transform(silla.begin(),silla.end(), silla.begin(), toupper);
    //대소문자 변환; transform(복사문자열 시작점, 복사문자열 종료점, 복사될 문자열 시작점, 대/소문자)
    transform(joseon.begin(), joseon.end(), joseon.begin(), tolower);

    char lower_ch = 'g';
    char upper_ch = 'B';

    lower_ch = toupper(lower_ch);
    upper_ch = tolower(upper_ch);

    cout<<"문자열 대문자로 변환: "<<silla<<endl;
    cout<<"문자열 소문자로 변환: "<<joseon<<endl;
    cout<<"문자 대문자로 변환: "<<lower_ch<<endl;
    cout<<"문자 소문자로 변환: "<<upper_ch<<endl;

    return 0;
}
*/

//57.문자열 합치기
/*
#include<string>

int main(){

    string king = "조선 세종";
    string favorite1= "고기";
    string favorite2= "야근";

    string king_info = "";

    king_info+= king;
    king_info+="은";
    king_info+=favorite1;
    king_info.append("와");
    king_info.append(favorite2);
    king_info.append("을 좋아했습니다.");

    cout<<king_info<<endl;

    return 0;
}
*/

//58. 문자열 중간에 문자열 추가하기
/*
#include <string>

int main(){

    string sentence = "i coding";
    sentence.insert(2,"hate ");//문장의'2'번위치에 'hate '를 추기
    cout<<sentence<<endl;

    sentence.insert(7,"or like ");
    cout<<sentence<<endl;

    return 0;

}
*/

//59.문자열 일부 지우기
/*
#include<string>

int main(){

    string sentence = "i hate coding";

    sentence.erase(0, 7);//erase(삭제할영역의 시작인덱스, 삭제할 문자갯수)

    cout<<"i like "<<sentence<<endl;

    return 0;
}
*/

//60. 문자열 이동하기
/*
#include <string>
#include <vector>

string str1 = "i like coding";
string str2 = move(str1);
//move(빼내올 문장열):뺴내올 문자열이 있는 위치에서는 없어지고 해당함수를 사용한 곳으로 가져온다.

cout<<"str1: "<<str1<<endl;
cout<<"str2: "<<str2<<endl;

vector<int> v1 = {1, 2, 3};
vector<int> v2 = move(v2);

cout<<"v1 size: "<<v1.size()<<endl;
cout<<"v2 size: "<<v2.size()<<endl;

return 0;
*/
