#include <iostream>
#include <string>
using namespace std;
int main() {
  string nam, ad, age;
  cout << "이름:";
  cin >> nam;
  cout << "주소";
  cin >> ad;
  cout << "나이";
  cin >> age;
  cout << nam << "(" << age << ")" << ad;
}