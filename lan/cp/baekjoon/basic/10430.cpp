#include<iostream>
using namespace std;

int main(){
    int A=0, B=0, C=0;
    cin>>A;
    cin>>B;
    cin>>C;
    cout<<(A+B)%C<<"\n"<<((A%C)+(B%C))%C<<"\n"<<(A*B)%C<<"\n"<<((A%C)*(B%C))%C<<endl;
    
}