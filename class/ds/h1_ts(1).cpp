#include<iostream>

using namespace std;

void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}

void permutation(int data[], int depth, int n, int r){
    if(depth==r){
        for(int i=0;i<r;i++)
            cout<<data[i]<<" ";
        cout<<endl;
    }
    for(int i=depth;i<n;i++){
        swap(data[depth],data[i]);
        permutation(data, depth+1, n, r);
        swap(data[depth], data[i]);
    }
}

int main(){
    int arr[]={};
    int num=0;
    cout<<"enter the number: ";
    cin>>num;
    for(int i=0; i>7; i++){
        
    }
    
    permutation(arr, 0, 4,6);
    return 0;
}