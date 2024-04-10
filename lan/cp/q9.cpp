#include<iostream>
using namespace std;

//41. 피보나치수열~반복문***
/*
int main(){

    int f =0;
    int g =0;
    int h =0;

    for(int i =0;i<10;i++){
        //총 길이를 9줄로 한정함
        int f = 0;
        int g = 1;//초기값을 제시
        for(int j=1; j<=i;j++){
            //하단의 for문의 내용을 피라미드 식으로 출력한다
            cout<<g<<",";
            //피보나치배열은 왼쪽의 두 숫자의 합을 표시하는 것으로 함.
            h=g;//h에 g의 원래값을 기입_h=1,1,2,3
            g+=f;//g에 f와 합한 값을 기입_g=1+0,1+1,2+1,
            f=h; //f에 g의 원래값인 h를 기입_f=1,1,2,3
            //h에 lefe2값을 저장하고
            //다음줄에서 left1(f)+left2(g)를 더함
            //f(left1)에 left2의 값을 기입
        }
        cout<<endl;//한 행이 끝나면 줄바꿈
    }
    return 0;
}
*/
/*
결론
1,
1,1,
1,1,2,
1,1,2,3,
1,1,2,3,5,
1,1,2,3,5,8,
1,1,2,3,5,8,13,
1,1,2,3,5,8,13,21,
1,1,2,3,5,8,13,21,34,
*/

//42.피라미드 만들기~반복문
/*
int main(){
int offset =4;//높이의 한도
    
        for(int i =1, j=0;i<=offset;i++, j=0){
            //i는 세로출력, j는 가로 출력이기때문에 한번 문장이 끝나면 리셋시켜줌
            for(int k=0;k<=offset-i;k++)
            cout<<" ";
            //단이 하나씩 내려올 때마다 스페이스바의 크기를 줄임.

            while(j!=2*i-1){
                //*가 출력되는 길이(1,3,5,7)
            cout<<"*";
            j++;
            //위의 스페이스 출력이 종료되면 출력
            }
            cout<<endl;
        }
    return 0;
}
*/
/*
    *
   ***
  *****
 *******
 */

//43.실수, 소수점버리기(floor, ceil)
//실수의 소수점을 무조건 버리는 함수: floor
//실수의 소수점을 무조건 올리는 함수: ceil
/*
#include<cmath>
int main(){
cout<<"==========소수점 버리기=========="<<endl;
cout<<"floor(1.4): "<<floor(1.4)<<endl;
cout<<"floor(3.8): "<<floor(3.8)<<endl;
cout<<"floor(13.2): "<<floor(13.92)<<endl;
cout<<"floor(54.1): "<<floor(52.33)<<endl;
cout<<"floor(100.7): "<<floor(100.7)<<endl;

cout<<"==========소수점 올리기=========="<<endl;
cout<<"ceil(3.2): "<<ceil(3.2)<<endl;
cout<<"ceil(8.2): "<<ceil(8.2)<<endl;
cout<<"ceil(19.3): "<<ceil(19.32)<<endl;
cout<<"ceil(49.5): "<<ceil(49.25)<<endl;
cout<<"ceil(99.7): "<<ceil(99.27)<<endl;

return 0;
}
*/

//44. 실수 반올림하기
//실수를 반올림하는 함수 :round
/*int main(){
    cout<<"round(1.9): "<<round(1.9)<<endl;
    cout<<"round(-2.6): "<<round(-2.6)<<endl;
    cout<<"round(38.1): "<<round(38.1)<<endl;
    cout<<"round(-72.5): "<<round(-72.5)<<endl;
    cout<<"round(100.3): "<<round(100.3)<<endl;

    return 0;

}*/

//45.절댓값과 제곱수 구하기(abs, fabs, pow)
#include<cmath>
int main(){
    cout<<"===절대값 구하기===="<<endl;
    cout<<"-10의 절대값"<<abs(-10)<<endl;//정수의 절대값
    cout<<"-5.42의 절대값"<fabs(5.72)<<endl;//실수의 절대값

    cout<<"==제곱수 구하기=="<<endl;
    cout<<"2의 2승: "<<pow(2,2)<<endl;
    cout<<"3의 4승: "<<pow(3,4)<<endl;
    cout<<"4의 6승: "<<pow(4,6)<<endl;
    cout<<"8의 3승: "<<pow(8,3)<<endl;
    
    return 0;

}