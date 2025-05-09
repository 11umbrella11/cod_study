#include<iostream>
using namespace std;

int main(){
    int num1=0, num2=0;
    int fst=0, snd=0, trd=0;
    cin>>num1;
    cin>>num2;
    fst=num2/100;
    snd=(num2/10)%10;
    trd=num2%10;
    cout<<num1*trd<<"\n"<<num1*snd<<"\n"<<num1*fst<<"\n"<<num1*num2<<endl;
    
}