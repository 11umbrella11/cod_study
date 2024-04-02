#include <iostream>
using namespace std;

//26.조건부 삼항 연산자 이해하기
/*
int main(){

    int x = 1;
    int y = 2;
    int z = 0;

    z=x>y?x:y;
    cout<<"x와 y중 더 큰값은: "<<z<<endl;
    
    return 0;
}//결과 값은 2가 나옴 -> 해당되는 변수명이 출력되는 것이 아닌 값이 출력.

*/

//27. 쉼표 연산자 이해하기(,)

int main(){

    int goguryeo = 37, baekjae = 18, silla = 57;

    printf("삼국 건국연도\n");
    printf("고구려bc%d년, 백제 bc%d년, 신라 bc%d년\n", goguryeo, baekjae, silla);

    return 0;

}

