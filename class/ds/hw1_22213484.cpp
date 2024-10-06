//22213484 최은정
#include <iostream>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

void DeleteDup(int arr[], int num){
    set<int> notDup(arr, arr+num);
    notDup.erase(0);
    cout<<"->"<<notDup.size()<<"개"<<"(";    
    for(int i:notDup){
        cout<<" "<<i;
    }
    cout<<")";
    
}

int* CheckPN(int arr[], int num){
    int check[10]={2,3,5,7,11,13,17,19,23,29};
    for(int i=0;i<num;i++){
        if(arr[i]==0||arr[i]==1)
            arr[i]=0;
        for(int j=0;j<10;j++){
            if(arr[i]!=check[j])
                if(arr[i]%check[j]==0)
                    arr[i]=0;
        }          
    }
        for(int i=0;i<num;i++){
        //cout<<arr[i]<<endl;
    }

    return arr;
}
    
void Pmt(int arr[], int num){
    int tm[300]={};
    int pmt[1000]={};
    int a=0;
    int m=0;
    int t=0;
    do{
        for(int f=0;f<num;f++){
            t+=arr[f]*pow(10,num-f-1);   
        }
        tm[a]=t;
        a++;
        t=0;
        
    }while(next_permutation(arr,arr+num));
    //순열생성

    for(int i=0;i<a;i++){
        for(int j=0;j<num;j++){
            //cout<<tm[i]<<"pp"<<endl;
            pmt[m]=tm[i]/pow(10,j);
            //cout<<pmt[m]<<"jj"<<endl;
            m=m+1;
            //cout<<m<<"ttt";
        }
        //cout<<m<<"yy";
    }
    //cout<<m<<"ppppp";
    //모든 경우의 순열 생성
    int* pn=CheckPN(pmt, m);
    DeleteDup(pmt, m);
    
}

int main() {

    string inp;
    cout<<"숫자를 입력하시오: ";
    cin>>inp;
    int arr[7];
    int k=inp.size();
    //cout<<k<<"k"<<endl;
    for(int m=0;m<k;m++){
        arr[m]=inp[m]-'0';
        //정수형으로 변경함
    }
    //sort(arr,arr+k);
    Pmt(arr, k);
    return 0;
}