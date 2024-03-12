#include <iostream>
using namespace std;//이걸 씀으로 std가 생략되었기때문
//using std::endl;

int main() {
  cout << "Hello World!\n";
  cout << "영남대학교" <<endl;

  cout << "너비를 입력하세요>>";
  int width;
  cin >> width; // 키보드로부터 너비를 읽는다.
  cout << "높이를 입력하세요>>";
  int height;//실행문 중간에 변수 선언
  cin >> height; // 키보드로부터 높이를 읽는다.
  // 너비와 높이로 구성되는 사각형의 면적을 계산한다.
  int area = width*height;
  cout << "면적은 " << area << "\n"; // 면적을 출력하고 한 줄 띈다.
    /*  cout << "너비";
  int width;
  cin >> width; // 키보드로부터 너비를 읽어 width 변수에 저장
  cout << "높이"; 
  int height;
  cin >> height; // 키보드로부터 높이를 읽어 height 변수에 저장
  //int area = width*height; // 사각형의 면적 계산
  cout << "면적은 " << width*height << "\n"; */// 면적을 출력하고 다음 줄로 넘어감
}