#include <iostream>
//#include <string>
using namespace std;
bool checkInputError(){//잘못된 타입이 입력되었을 경우를 예시
    if(cin.fail()){
        cin.clear();
        cin.ignore(128,'\n');
        cout<<"입력오류"<<endl;
        return true;
    }
    else return false;
    
}
int main() {

    

    /*
  int a=0 , b=0;
  
  cout <<" **중국집**";
  cout << "짬뽕:1, 짜장:2, 탕수육: 3, 종료:4>> ";
  cin >> a;
  /*while(true){
    cout <<"짬뽕:1, 짜장:2, 탕수육: 3, 종료:4>> ";
    cin >> menu;
    if(checkInputError())//여기서 에러가 발생했을경우를 확인
     //예를 들어 정수가 아닌 문자값을 입력했을경우 입력오류를 출력하여 확인캐함
        continue;
    if (menu <1||menu>4){
        cout << "메뉴선택";
        if (menu ==4){
            cout <<" 영업종료, 감사합니다";
            break;
        }
        그 외에는 continue;

    아니면 스위치문
    switch(menu){
        case1:
        cout~
        break;
    }

    }
  }*/
  /*if (a==1) {
    cout << "몇그릇?";
    cin >> b;
    cout <<"짬뽕"<<b<<"그릇 나왔습니다.";
    }
  else if (a==2){
    cout <<"몇 그릇?";
    cin >> b;
    cout <<"짜장" <<b<<"그릇 나왔습니다";
  }
  else if (a==3){
    cout << "몇 인분?";
    cin >> b;
    cout <<"탕수육"<<b<<"인분 나왔습니다";}
    
  else if(a==4) {
    cout << "영업종료, 감사합니다.";}
    
  else {
    cout <<" 잘못 입력하셨습니다.";
    }*/
}