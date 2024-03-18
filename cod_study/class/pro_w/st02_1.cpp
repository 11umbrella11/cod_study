#include <iostream>
//#include <string>
using namespace std;
int main() {

  double ddd, max, min;
  cout << "실수를 입력하시오:";
  cin >> ddd;
  max = min = ddd;
  for(int i=0;i<5;i++){
    cin >> ddd;
    if (ddd>max) max = ddd;
    else if(ddd<max) max = ddd;
  }
  cout << "최대값은" <<max <<"입니다";
  cout << "최소값은"<<min<<"입니다";}
