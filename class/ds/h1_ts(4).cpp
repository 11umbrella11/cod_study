#include <iostream>
#include <algorithm>
#include <cmath>
#include <unordered_set>

using namespace std;

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
            m++;
        }
    }
    //모든 경우의 순열 생성
    //sort(pmt, pmt+m);
    //for(int i=0;i<m;i++){
    //    cout<<pmt[i]<<"k"<<endl;
    //}
    int o=sizeof(pmt)/sizeof(pmt[0]);
    unordered_set<int> notDup(pmt, pmt+m);
    //for(int i=0;i<o;i++){
    //    notDup.insert(pmt[i]);
    //    cout<<pmt[i]<<endl;
    //}

    //int s_size=0;
    int notDupArr[notDup.size()];
    //for(auto n=notDup.begin();n!=notDup.end();n++){
    //    notDupArr[s_size++]=*n;
        //cout<<notDupArr[s_size]<<endl;
    //}
    //for(int i:notDup){
    //    cout<<i<<endl;
    //}
    
}



void CheckPN(int arr[]){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0||arr[i]==1)
            
    }
}

void DeleteDup(int arr[]){
    //sort(pmt, pmt+m);
    //for(int i=0;i<m;i++){
    //    cout<<pmt[i]<<"k"<<endl;
    //}
    int o=sizeof(pmt)/sizeof(pmt[0]);
    unordered_set<int> notDup(pmt, pmt+m);
    //for(int i=0;i<o;i++){
    //    notDup.insert(pmt[i]);
    //    cout<<pmt[i]<<endl;
    //}

    //int s_size=0;
    int notDupArr[notDup.size()];
    //for(auto n=notDup.begin();n!=notDup.end();n++){
    //    notDupArr[s_size++]=*n;
        //cout<<notDupArr[s_size]<<endl;
    //}
    //for(int i:notDup){
    //    cout<<i<<endl;
    //}
}


int main() {

    string inp;
    cout<<"숫자를 입력하시오: "<<endl;
    cin>>inp;
    int arr[7];
    int k=inp.size();
    //cout<<k<<"k"<<endl;
    for(int m=0;m<k;m++){
        arr[m]=inp[m]-'0';
        //정수형으로 변경함
    }
    sort(arr,arr+k);
    Pmt(arr, k);
    return 0;
}