#include <fstream>
#include <iostream>
//#include<sstream>
#include <ctime>
#include <string>

using namespace std;

int main() {
  string name;
  clock_t startT = clock();

  cout << "enter the txtname: "; //텍스트 파일이름 입력
  cin >> name;
  ifstream rd;
  rd.open(name, ifstream::in);
  string spot1,spot2,a1,a2,b1,b2,pass_b; //문자열인 단어를 가져옴
  getline(rd, spot1);
  string checker_a = spot1; //배열의 크기를 정할 x의 숫자값을 정해옴
  int a_limit = stoi(spot1);
  int current_n1 = 0;
  // cout<<a_limit;
  int b_limit=0;
  int com_a[1000000][2];
  int com_b[1000000][2];
  while (current_n1 < a_limit) {
    for (int hrz_a = 0; hrz_a < a_limit; hrz_a++) {
      // for(int vert_a=0;vert_a<2;vert_a++){
      getline(rd, a1, ' ');
      if (a1 == checker_a)
        continue;
      //cout << ta << "//";
      int ta = stoi(a1);
      //cout << ta << "//";
      com_a[current_n1][0] = ta;
      getline(rd, a2, '\n');
      int tb = stoi(a2);
      //cout<<tb<<"||";
      com_a[current_n1][1] = tb;
      current_n1++;
      //>cout<<current_n1<<"@@@";
      //cout<<tb<<"**"<<endl;
      /*if(current_n1==a_limit){
        getline(rd,spot2,' ');
        b_limit=stoi(spot2);
        pass_b=spot2;
        //cout<<pass_b<<"::";
        //cout<<pass_b<<"%%%%%";
        break;
      }*/
      //cout<<pass_b<<"*****";
    }



    //string spot2, b1, b2; //문자열인 단어를 가져옴
    //cout<<b_limit<<"##"<<endl;
    int t1=0, t2=0;
    getline(rd,spot2,'\n');
    b_limit=stoi(spot2);
    //cout<<spot2<<"LL"<<b_limit<<endl;
    //getline(rd, spot2);
    //cout<<spot2<<"&&";
    //int b_limit = stoi(spot2);
    //cout<<b_limit<<"##"<<endl;
    b_limit+=a_limit;
     //cout<<b_limit<<"__";
    int current_n2 = 0;
     //cout<<b_limit;
    /*getline(rd,b1,' ');
    com_b[current_n2][0]=stoi(b1);
    getline(rd,b2,'\n');
    t2=stoi(b2);
    com_b[0][1]=t2;
    cout<<com_b[0][0]<<"!!!!!!"<<com_b[0][1];
    current_n2++;*/
    while(current_n2<b_limit){
      getline(rd, b1,' ');
      cout<<b1<<"!!!!!";
      //if (b1 == checker_b)
      //  continue;
      //cout << ta << "//";
      t1 = stoi(b1);
      cout << t1 << "//";
      com_b[current_n2][0] = t1;
      getline(rd, b2, '\n');
      t2 = stoi(b2);
      cout<<t2<<"||"<<endl;
      com_b[current_n2][1] = t2;
      current_n2++;
    }
    /*
    while (current_n2 < b_limit) {
      for (int hrz_b = a_limit; hrz_b < b_limit; hrz_b++) {
        // for(int vert_a=0;vert_a<2;vert_a++){
        getline(rd, b1, ' ');
        if (a1 == checker_b)
          continue;
        //cout << ta << "//";
        int t1 = stoi(b1);
        cout << t1 << "//";
        com_b[current_n2][0] = t1;
        getline(rd, b2, '\n');
        int t2 = stoi(b2);
        cout<<t2<<"||";
        com_b[current_n2][1] = t2;
        current_n2++;
      }
    }*/
    rd.close();

    clock_t endT = clock();
    clock_t duration = (double)endT - startT;
    cout << "해당 코드의 소요시간은 " << duration << "초 입니다";
    /*
    double timeInSecond = (double)(elapsed / CLOCKS_PER_SEC);

  cout << "Elapsed: " << timeInSecond << "s(" << elapsed << "ms)" << "\n";

  return 0;
    */

  }
}
