#include <iostream>
#include <string>
using namespace std;
int main() {
  string nam, ad, age;
  cout << "이름:";
  //cin >> nam;
  getline(cin, nam); 
  //getline의 경우에는 입력되는 순서와 출력순서가 달라질경우에는 입력시 오류가 발생가능
  //cin에는 버퍼가 있음 \n으로 끊어짐, getline의 경우 내부에는 저장되지않고 버퍼를 비워둠
  //이를 해결하기위해 cin.ignore(10, "\n") 버퍼에서 \n을 만날때까지 버퍼를 비워둠 
  cout << "주소";
  //cin >> ad;
  getline(cin, ad);
  cout << "나이";
  //cin >> age;
  getline(cin, age);
  cout << nam << "(" << age << ")" << ad;
}