#include <iostream> 
#include <string> 
using namespace std;

int main(){
    string input;

    cout<<"문자열:"<<endl;
    getline(cin, input, '\n');
    int len = input.length();
    for(int i=0;i<len;i++){
        string first = input.substr(0,2);//맨ㅇ앞의 문자 1개를 문자열로 분리
        string last = input.substr(2,len-2);//first를 제외한 문장
        input =last+first;//맨 뒤문장과 앞글자를 합침
        cout<<input<<endl;

    }

}
