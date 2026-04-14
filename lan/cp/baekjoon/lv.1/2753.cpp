/*
연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.

윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.

예를 들어, 2012년은 4의 배수이면서 100의 배수가 아니라서 윤년이다. 

1900년은 100의 배수이고 400의 배수는 아니기 때문에 윤년이 아니다. 

하지만, 2000년은 400의 배수이기 때문에 윤년이다.

첫째 줄에 연도가 주어진다. 연도는 1보다 크거나 같고, 4000보다 작거나 같은 자연수이다.

첫째 줄에 윤년이면 1, 아니면 0을 출력한다.
*/


#include <iostream>
using namespace std;

int main(){

    int yr, inp=0;
    cin>>yr;

    if(1<=yr&&yr<=4000){
        if((yr%4==0)&&((yr%100!=0)||(yr%400==0))){
            inp=1; }
        else inp=0;
    }else inp=0;
    
    if(inp==1) cout<<"1"<<endl;
    else cout<<"0"<<endl;

    return 0;

}

/*
//자바
import java.util.Scanner;

public class Main {

    

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int year = sc.nextInt();

        if (year % 4 == 0)

            if (year % 100 == 0 && year % 400 == 0)
                System.out.println('1');
            else if (year % 100 == 0 && year % 400 != 0)
                System.out.println('0');
            else
                System.out.println("1");
        else 
            System.out.println('0');

    }
}
//c++ 함수버전
#include <stdio.h>

// [함수] 주소를 받아서 그 방에 있는 연도를 결과값(1 또는 0)으로 바꿔버리는 함수
void updateToLeapResult(int *pYear) {
    // *pYear: pYear 주소로 가서 실제 연도를 확인합니다.
    if ((*pYear % 4 == 0 && *pYear % 100 != 0) || (*pYear % 400 == 0)) {
        *pYear = 1; // 윤년이면 해당 주소의 값을 1로 변경
    } else {
        *pYear = 0; // 아니면 0으로 변경
    }
}

int main() {
    int y;
    scanf("%d", &y);

    // y의 '주소(&)'를 넘겨주어 함수가 직접 값을 고치게 합니다.
    updateToLeapResult(&y);

    // 함수 실행 후 y 자체가 결과값으로 변해있습니다.
    printf("%d\n", y);
    return 0;
}
*/