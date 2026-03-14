//시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
//첫째 줄에 시험 점수가 주어진다. 시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

#include <iostream>
using namespace std;

int main(){

    int scr = 0;
    cin>>scr;

    if((0<=scr)&&(scr<=100)){

//0<=scr<=100와 같이 작성은 오류가 발생
//연산자 우선순위나 연쇄비교에 의해서 오류가 발생 -> 끊어서 비교를 해야함
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
/*
//자바
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		
		int N = Integer.parseInt(br.readLine());
		if (N >= 90) {
			System.out.println("A");
		}
		else if (N >= 80) {
			System.out.println("B");
		}
		else if (N >= 70) {
			System.out.println("C");
		}
		else if (N >= 60) {
			System.out.println("D");
		}
		else {
			System.out.println("F");
		}
	}
}

//파이썬
A=int(input())
if A>=90:
    print("A")
elif A>=80:
    print("B")
elif A>=70:
    print("C")
elif A>=60:
    print("D")
else:
    print("F")
*/
