//아래의 예제와 같은 고양이를 출력하라
/*
\    /\
 )  ( ')
(  /  )
 \(__)|
*/

#include <iostream>
using namespace std;

int main(){
    //다른 것은 그대로 입력해도 괜찮으나 \의경우에는 줄바꿈에 쓰이므로
    //해당 \를 두번써야 문자 그대로의 \가 출력됨
    string fst="\\    /\\";
    string snd=" )  ( ')";
    string trd="(  /  )";
    string frt=" \\(__)|";
    cout<<fst<<'\n'<<snd<<'\n'<<trd<<'\n'<<frt<<endl;
    return 0;
   
}