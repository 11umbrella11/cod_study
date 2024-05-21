#include <iostream>
#include <dtring>
#include <map>
using namespace std;

int main(){
    map<string, string> dic;

    dic.insert( make_pair("love","사랑"));
    dic.insert(make_pair("apple", "사과"));
    dic["cherry"]="체리";

    cout<<"단어수: "<<dic.size()<<endl;

    string eng;
    while (true){
        cout<<"단어:";
        getline(cin, eng);
        if(eng=="exit")
        break;
    }

    cout<<dic[ eng ]<<endl;

}