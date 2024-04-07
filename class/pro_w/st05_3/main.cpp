#include<iostream>
#include "Dept.h"
using namespace std;

int countPass(Dept &dept) { //(2) &를 붙이면 참조로 해서 에러가 나오지않음(복사생성자가 없더라도)
    // dept 학과에 60점 이상으로 통과하는 학생의 수 리턴
int count = 0;
for (int i = 0; i < dept.getSize(); i++) {
if (dept.isOver60(i)) count++;
}
return count;
}

int main() {
Dept com(10); // 총 10명이 있는 학과 com
com.read(); // 총 10명의 학생들의 성적을 키보드로부터 읽어 scores 배열에 저장
int n = countPass(com); // com 학과에 60점 이상으로 통과한 학생의 수를 리턴
cout << "60점 이상은 " << n << "명";
}