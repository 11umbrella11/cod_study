#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    string inp;
    cout<<"숫자를 입력하시오: ";
    cin>>inp;
    int arr[7]={};
    int a, t=0;
    int k=inp.size();
    t=stoi(inp);
    cout<<"k:"<<k<<"inp:"<<inp;
    for(int m=0;m<k;m++){
        
    }
    for(int i=1;i<k;i++){
        do {
		for (int j = 0; j < i; j++) {
			cout << arr[i];    
		}
		cout << endl;
        a++;
        
    	} while (next_permutation(arr, arr + i));
    cout<<a;
    }
    return 0;
}