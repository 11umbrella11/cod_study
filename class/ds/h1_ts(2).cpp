#include<iostream>
#include<algorithm>


using namespace std;

int main(){
    int num[7]={3,5,2,1,6,5,7};
    sort(num, num+7);
    for(int i=0; i<7;i++){
        cout<<num[i];
    }
}