#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout<<"size:"<<v.size<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;
    v.push_back(40);
    v.push_back(50);
    cout<<"size:"<<v.size<<endl;
    cout<<"capacity:"<<v.capacity()<<endl;

    for(int i=0;i<v;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    v[0]=1004;
    v.at(2)=20004;

    
    
          
}