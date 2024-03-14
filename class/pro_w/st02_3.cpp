#include <iostream>
//#include <string>
using namespace std;
int main() {
  int a=0 , b=0;
  
  cout <<" **중국집**";
  cout << "짬뽕:1, 짜장:2, 탕수육: 3, 종료:4>> ";
  cin >> a;
  if (a==1) {
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
    }
}