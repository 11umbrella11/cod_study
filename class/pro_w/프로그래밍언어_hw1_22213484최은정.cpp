#include <iostream>
#include <string>

using namespace std;
int main() {
  string s;
  cout << "입력식: " << endl;
  getline(cin, s, '\n'); // 문자열 입력
  int result = 0;
  int startIndex = 0;// 문자열 내에 검색할 시작 인덱스
  int error =0;//잘 못 입력되었을 경우를 위한 변수
  
  while (true) {
    int uIndex = s.find('*', startIndex);
    int dIndex = s.find('/', startIndex);
    if (uIndex == -1 && dIndex == -1) {
      // *가 없거나 /가 없을 경우
      string part = s.substr(startIndex);
      if (part == "") {
        //연산자로 끝나는 경우
        cout << "결과 : 입력식이 잘못되었습니다.";
        error=1;
        break;
      }
      return result;
      break;
    }

    if (uIndex > 0) {
      int count = uIndex - startIndex;
      string fpart = s.substr(startIndex, count);
      string bpart = s.substr(uIndex+1);
      result = stoi(fpart)*stoi(bpart);
      startIndex = uIndex + 1;

    } else if (dIndex > 0) {
      int count = dIndex - startIndex;
      string fpart = s.substr(startIndex, count);
      string bpart = s.substr(dIndex+1);
      result = stoi(fpart)*stoi(bpart);    // 문자열을 수로 변환하여 더하기
      startIndex = dIndex + 1; // 검색을 시작할 인덱스 전진시킴
    }
  
  }
  cout<<result;

  startIndex = 0;//인덱스 리셋

  while (true) {
    int pIndex = s.find('+', startIndex);
    int mIndex = s.find('-', startIndex);
    if (pIndex == -1 && mIndex == -1) {
      // +와 -가 없을 경우
      string part = s.substr(startIndex);        
      if (part == ""){
        //연산자로 끝나는 경우
        cout << "결과 : 입력식이 잘못되었습니다.";
        error=1;
        break;
      } 
      cout << part << endl;
      if(s.substr(startIndex-1)=="+") result+=stoi(part);
      else result-=stoi(part);
      break;
    }

    if (pIndex > 0) {
      int count = pIndex - startIndex;
      string part = s.substr(startIndex,count);
      cout << part << endl;
      result += stoi(part);
      startIndex = pIndex + 1; // 검색을 시작할 인덱스 전진시킴
    } 
    else if (mIndex > 0) {
      int count = mIndex - startIndex; // 서브스트링으로 자를 문자 개수
      string part =s.substr(startIndex,count); // startIndex부터 count 개의 문자로 서브스트링 만들기
      cout << part << endl;
      result -=stoi(part);    // 문자열을 수로 변환하여 더하기
      startIndex = mIndex + 1; // 검색을 시작할 인덱스 전진시킴
    }
  }
if(error==1)//수식으로 끝이 날 경우
  return 0;
else
  cout << "결과: " << result;
  
}
