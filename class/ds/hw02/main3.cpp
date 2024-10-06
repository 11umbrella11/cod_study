#include <fstream>
#include <iostream>
//#include<sstream>]
#include<vector>
#include <ctime>
#include <string>

using namespace std;

int main() {
  string name;
  clock_t startT = clock();
  ifstream rd;
  cout << "enter the txtname: "; //텍스트 파일이름 입력
  cin >> name;
  rd.open(name, ifstream::in);
  string line;
  int arr_a[100000][2];
  int arr_b[100000][2];
  string spot1, spot2; //문자열인 단어를 가져옴
  getline(rd, spot1);
  string checker_a = spot1; //배열의 크기를 정할 x의 숫자값을 정해옴
  int a_limit = stoi(spot1);
  //int jack=0;
  //while(getline(rd,line)){
    
    /*cout<<line;
    int num=stoi(line);
    k[jack]=num;
    cout<<num<<"//"
    jack++;
    cout<<jack<<"회"*/
    for(int a=0;a<a_limit;a++){
        for(int v_a=0;v_a<2;v_a++){
            
                rd>>arr_a[a][v_a];
                cout<<arr_a[a][v_a]<<"//";
        
        }
    }
    getline(rd,spot2);
    string checker_b = spot2; //배열의 크기를 정할 x의 숫자값을 정해옴
    int b_limit = stoi(spot2);

    for(int b=a_limit;b<a_limit+b_limit;b++){
        for(int v_b=0;v_b<2;v_b++){
        
                rd>>arr_b[b][v_b];
                cout<<arr_b[b][v_b]<<"//";
            
        }
    }
  //}
  /*cout << "enter the txtname: "; //텍스트 파일이름 입력
  cin >> name;
  ifstream rd;
  rd.open(name, ifstream::in);
  string spot1, a1, a2; //문자열인 단어를 가져옴
  getline(rd, spot1);
  string checker_a = spot1; //배열의 크기를 정할 x의 숫자값을 정해옴
  int a_limit = stoi(spot1);
  // cout<<spot;
  int current_n = 0;
  // cout<<a_limit;
  int com_a[1000000][2];
  while (current_n < a_limit) {
    for (int hrz_a = 0; hrz_a < a_limit; hrz_a++) {
      // for(int vert_a=0;vert_a<2;vert_a++){
      getline(rd, a1, ' ');
      if (a1 == checker_a)
        continue;
      //cout << ta << "//";
      int ta = stoi(a1);
      //cout << ta << "//";
      com_a[current_n][0] = ta;
      getline(rd, a2, '\n');
      int tb = stoi(a2);
      //cout<<tb<<"||";
      com_a[current_n][1] = tb;
      current_n++;
    }



    string spot2, b1, b2; //문자열인 단어를 가져옴
    getline(rd,spot2);
   
    //getline(rd,pipi);
    cout<<spot2<<"??"<<endl;
    //getline(rd, spot2);
    
    string checker_b = spot2; //배열의 크기를 정할 x의 숫자값을 정해옴
    int b_limit = stoi(spot2);
    b_limit+=a_limit;
     cout<<spot2<<"__";
    int current_n = a_limit;
     cout<<b_limit;
    int com_b[1000000][2];
    
    while (current_n < b_limit) {
      for (int hrz_b = a_limit; hrz_b < a_limit+b_limit; hrz_b++) {
        // for(int vert_a=0;vert_a<2;vert_a++){
        getline(rd, b1, ' ');
        if (a1 == checker_b)
          continue;
        //cout << ta << "//";
        int t1 = stoi(b1);
        cout << t1 << "//";
        com_b[current_n][0] = t1;
        getline(rd, b2, '\n');
        int t2 = stoi(b2);
        cout<<t2<<"||";
        com_b[current_n][1] = t2;
        current_n++;
      }
    }*/
    rd.close();
    return 0;

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
