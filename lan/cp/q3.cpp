#include<iostream>
using namespace std;

//11. 함수배우기
/*void Minus(const int x, const int y){
    cout<<"x-y="<<x-y<<endl;
}

int Plus(const int x, const int y){
    return x+y;
}

int main(){
    Minus(19, 3);
    cout << "x+y="<<Plus(19, 3)<<endl;

    return 0; //이게 없으면, "오류 (4716 'Plus': 값을 반환해야합니다.) 출력"
}*/

//13.네임스페이스 배우기

/*namespace silla{
    int year =935;
    void CentralArea(){
        cout<<"경상도"<<endl;
    }
}

namespace baekjae{
    int year =660;
    void CentralArea(){
        cout<<"충청도"<<endl;
    }
}

using namespace silla;
using namespace baekjae;

int main (){

    cout<<"신라의 중심지: "<<endl;
    silla::CentralArea();
    cout<<"신라 멸망년도: "<<silla::year<<endl;
    cout<<"백제의 중심지: "<<endl;
    baekjae::CentralArea();
    cout<<"백제 멸망년도: "<<baekjae::year<<endl;
 
    return 0;
}*/

//14. #include배우기
#include <vector>

int main(){
    vector<int> exam;
    exam.push_back(10);
    exam.push_back(20);
    exam.push_back(30);

    for (int i=0, size =exam.size(); i<size();i++){
        
    }
}

