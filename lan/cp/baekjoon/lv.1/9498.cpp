//시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
//첫째 줄에 시험 점수가 주어진다. 시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

#include <iostream>
using namespace std;

int main(){

    int scr = 0;
    cin>>scr;

    if((0<=scr)&&(scr<=100)){

        if(90<=scr){
            cout<<"A"<<endl;
        }
        else if((80<=scr)&&(scr<90)){
            cout<<"B"<<endl;
        }
        else if((70<=scr)&&(scr<80)){
            cout<<"C"<<endl;
        }
        else if((60<=scr)&&(scr<70)){
            cout<<"D"<<endl;
        }
        else cout<<"F"<<endl;
    }else
        return 0;
}
