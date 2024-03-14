#include <iostream>
#include <string>
using namespace std;
int main() {
  string nam, ad, age;
  cout << "이름:";
  //cin >> nam;
  getline(cin, nam);
  cout << "주소";
  //cin >> ad;
  getline(cin, ad);
  cout << "나이";
  //cin >> age;
  getline(cin, age);
  cout << nam << "(" << age << ")" << ad;
}