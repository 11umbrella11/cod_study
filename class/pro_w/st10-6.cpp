#include<iostream>
#include<vector>
$include<algorithm>
using namespace std;

void printvector(vector<int> &v){
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<' ';
    cout<<endl;

}

double getAvg(vector<int> &v){
    int sum=0;
    for(auto it=v.begin());
    //vector<int>::iterator이라 쓸것을 바꿈
        sum+=*it;
    return (double) sum/v.size();

}
int main(){
    vector<int> v;
    
    while(true){
        cout<<"정수를 입력하시오(0입력시 종료):";
        int num;
        cin>>num;
        if(num==0) break;
        v.push_back(num);
//printVector
for_each(v.begin(),v.end(),[](int n){cout<<' ';});//printVector와 같이 작동함
cout<<endl;
//getAvg
int sum=0;
for_each(v.begin(),v.end(), [&sum](int n){ sum+=n;});
cout<<"평균: "<<(double)sum/v.size()<<endl;


        printVector(v);
        cout<<"평균:"<<getAvg<<endl;


    }








/*int sum=0, num=0;
    double avr=0;
    cout<<"정수를 입력하세요(0을 입력하면 종료):";
    cin>>v.push_back(1);
    num++;
    while(true){
        if(v!=0)(
            v+=sum
            avr=sum/num;

        )
        else
        break;
    
    }*/
    
}