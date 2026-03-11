//두 정수 A, B가 주어졌을때 A와 B를 비교하는 프로그램을 작성하시오
//첫째줄에 A와 B가 주어진다, 공백한칸으로 구분되어 있다
//A가 B보다 큰 경우에는 '>'를 출력한다.
//A가 B보다 작은 경우에는 '<'를 출력한다.
//A와 B가 같은 경우에는 '=='를 출력한다.
//제한: -10.000<=A,B=<10,000

#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a;
    cin>>b;
    c=a-b;

    if(c>0) cout<<">"<<endl; 
    //a-b>0인 경우는 a>b이므로 >를 출력
    else if(c<0) cout<<"<"<<endl;
    //a-b<0인 경우는 a<b이므로 <를 출력
    else cout<<"=="<<endl;
    //그 외에는 동일한 경우만 존재

    return 0;
}
/*
//자바
import java.util.*;
import java.io.*;

public class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        StringBuilder sb = new StringBuilder();
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        if(a>b){
            System.out.println(">");
        }
        else if (a<b){
            System.out.println("<");
        }
        else{
            System.out.println("==");
        }
        
    }
}
//파이썬
a , b = map(int,input().split())

if(a>b) : print('>')
elif(a<b) : print('<')
else : print("==")
*/
