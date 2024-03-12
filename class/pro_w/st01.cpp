#include <iostream>
using namespace std;//이걸 씀으로 std가 생략되었기때문
//using std::endl;

int main() {
  cout << "Hello World!\n";
  cout << "영남대학교" <<endl;

  cout << "너비";
  int width;
  cin >> width; // 키보드로부터 너비를 읽어 width 변수에 저장
  cout << "높이"; 
  int height;
  cin >> height; // 키보드로부터 높이를 읽어 height 변수에 저장
  //int area = width*height; // 사각형의 면적 계산
  cout << "면적은 " << width*height << "\n"; // 면적을 출력하고 다음 줄로 넘어감
}