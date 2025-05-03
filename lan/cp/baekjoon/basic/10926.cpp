//준하는 사이트에 회원가입을 하다가 joonas라는 아이디가 이미 존재하는 것을 보고 놀랐다. 준하는 놀람을 ??!로 표현한다. 준하가 가입하려고 하는 사이트에 이미 존재하는 아이디가 주어졌을 때, 놀람을 표현하는 프로그램을 작성하시오.
//준하가 입력하는 데이터가 있을경우 아이디 + ??!를 붙여서 출력할 것

#include <iostream>
using namespace std;
int main(){
    string id;
    string data[2]={};
    cin>>id;
    data[0]="joonas";
    data[1]="baekjoon";
    if(data[0]==id||data[1]==id){
        cout<<"??!"<<endl;
    }
    else
        cout<<id<<endl;
}
/*참고용 코드

#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  string input;
  vector<string> list;
  list.push_back("joonas");
  list.push_back("baekjoon");

  try {
    cin >> input;
    for (int i = 0; i < input.size(); ++i) {
      if (!(input[i] >= 97 && input[i] <= 122))
        throw input[i];
    }
    for (int i = 0; i < list.size(); ++i) {
      if (input == list[i]) {
        cout << input << "?""?""!" << endl;
      }
    }

  } catch (char _err) {
    cout << _err << "는 아이디 조건에 맞지 않습니다." << endl;
  }
}

*/