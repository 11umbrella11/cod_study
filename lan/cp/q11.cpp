#include <iostream>
using namespace std;

//51.날짜와 시간을 문자열로 변환하기***
#include <ctime>

int main(){
    time_t now = time(NULL);//날짜와 시간을 얻을 수 있는 time_t변수를 선언(비어있는)
    tm* ptm = localtime(&now);//tm은 구조체로 localtime()함수를 이용해서 int날짜와 시간값을 대입

    char buffer[64];
    strftime(buffer, 64, "예제 만드는 지금은 %Y년 %m월 %d일, %H시 %M분 %S초입니다.(%p)\n",ptm);
    //3번쨰 문장의 문자열에 2번쨰인자의 크기만큼 1번째 배열(buffer)에 할당하는 하는 역할
    cout<<buffer;

    return 0;

}



//52. 지나간 기간 알아내기 *****
#include <ctime>

int main(){
    time_t start = time(NULL);//time_t변수를 선언하고 초기화
    time_t finish = time(NULL);

    int pass_int = 1;//시작시간을 설정

    time(&start);//타임워치의 처음작동시간 = start할당

    for(int i = 1; i<100000; i++){//정수1에 1을 더하는 작업을 10만번 반복
        for(int j =1 ; j <100000 ; j++)
        pass_int+=1;
    }
    time(&finish);

    cout<<"1을 10만번 더하는 시간: "<<difftime(finish, start)<<"초\n";

    return 0;
}

//53. 문자열 비교하기
int main(){
    string seven_war = "임진왜란";
    string korea_war = "한국전쟁";

    if(seven_war.compare(korea_war)==0)//A.compare(B)~A에 B를 넘겨 값이 같을경우 0 return/ 다르다면 1 return
        cout<<"다른 문자열입니다.\n";
    else
        cout<<"같은 문자열입니다\n";

        return 0;

}

//54.문자열 조회하기
#include <string>

int main(){
    string backhap_war = "백합벌 전투 : 백제왕자 부여창의 일기토로 유명한 전투";

    int rtn = backhap_war.find("부여창");//찾지못하면 -1을 리턴, 찾으면 해당 문자열의 시작위치가 리턴

    if(rtn >0)
        cout<<"문자열을 찾았습니다. 위치는 "<<rtn<<"입니다."<<endl;
    else
        cout<<"문자열을 찾을 수 없습니다."<<endl;

    return 0;
}

//55.문자열 길이 구하기
#include <string>

int main(){

    string jinduk_name="김승만";
    string jinsung_name = "kim man";

    cout<<"진덕여왕의 이름 길이: "<<jinduk_name.length()<<endl;
    cout<<"진성여왕의 이름 길이: "<<jinsung_name.length()<<endl;

    return 0;
}