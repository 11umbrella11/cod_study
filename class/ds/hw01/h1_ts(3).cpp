#include<iostream>
#include<algorithm>

using namespace std;
int temp = 0;

int main(){
    string inp;
    cout<<"enter the number:";
    cin>>inp;
    for(int i=0;i<inp.size(); i++){
        temp+=inp[i]-'0';
    }
    return 0;

}