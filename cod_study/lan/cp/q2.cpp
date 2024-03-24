#include <iostream>
using namespace std;

int main(){
    int one=3;
    int two=5;
    int sum1=6;
    int sum2=2;

    sum1=sum1+two;
    sum2+=one;

    cout <<"sum1 = " <<sum1<<endl;
    cout<<"sum2="<<sum2<<endl;

    sum1=6;
    sum2=8;
    sum1*=one;
    sum2/=two;

    cout << "re_sum1="<<sum1<<endl;
    cout<<"re_sum2="<<sum2<<endl;

    return 0;

    
}