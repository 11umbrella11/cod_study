//22213484 최은정
#include<iostream>
#include<algorithm>
#include<list>

using namespace std;

void Print(const list<int> &lst){
    cout<<"{"<<"inp"<<"}->"<<endl;
    for(auto list_num=lst.begin();list_num!=lst.end();++list_num){
        cout<< *list_num << ",";
    }
    cout<<endl;
}
int main(){
    int i=0;
    list<int> inp(7);
    cout<<"Enter the number(limit=7): "<<endl;
    for(int num=0;num<7;num++){
        inp.push_back(i); 
    }
    inp.sort();
    Print(inp);

    return 0;
}

