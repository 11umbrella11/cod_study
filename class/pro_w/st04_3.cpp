#include <iostream>
#include <string>
using namespace std;

int main(){
   /* string str=0;
    cout<<"문자열 입력>"<<endl;
    getline(cin, str, '\n');
    int ind=0;
    while(true){
        int eind =str.find(e.ind);
        int lind =str.find(l.ind);
        int oind =str.find(o.ind);
        int vind =str.find(v.ind);
        int yind =str.find(y.ind);
        if(eind == -1) break;



    }*/
    string text;
    cout<<"문자열 입력>"<<endl;
    getline(cin,text);
    int counts['z'-'a'+1]={0,}; //알파벳의 갯수를 새는 함수->해당 값을 0으로로 초기화
    int startIndex=0;//안해버리면 매번 같은 값만 체크함
    /*for( char c ='a';c <='z';c++){//8bit ui이기떄문에 아스키코드로 생각
        while(true){
            //a부터의 반복이 한번으로 끝나지 않기떄문에
            startIndex=text.find(c,startIndex);
            if(startIndex==-1) break;//더이상 없을 경우 멈춤
            counts[c-'a']++;//0번 인덱스a와 같이 알파벳을 변경시켜줌
            startIndex++;//다음번 위치부터 찾기위해
        }
        startIndex=0;//이렇게 해야 처음부터 다시 체크가 가능
    }*/
    for (int i=0; i<text.length();i++){
        if(text[i]>='a'&&text[i]<='z')//
        counts[text[i]-'a']++;
    }


    for(char c='a';c<='z';c++){
        if(counts[c-'a']!=0)
        cout<<c<<":"<<counts[c-'a']<<endl;
    }
}