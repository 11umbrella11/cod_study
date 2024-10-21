#include <fstream>
#include <iostream>
#include <ctime>
#include <string>
#include<algorithm>
#include<typeinfo>


using namespace std;

/*int length_ab(int a1, int b1, int a2, int b2){
  return abs(a1-b1)+abs(a2-b2); 
}*/

/*void compare_S(int end_a,int arr_a[][2], int end_b,int arr_b[][2]){
  int min_est=100, cal_length=0, i_spot=0, p_spot=0 ;
  for(int check_a=0;check_a<end_a;check_a++){
    for(int check_b=0;check_b<end_b;check_b++){
      cal_length=length_ab(arr_a[check_a][0],arr_b[check_b][0],arr_a[check_a][1],arr_b[check_b][1]);
      if(min_est>cal_length){
        min_est=cal_length;
        i_spot=check_a;
        p_spot=check_b;
      }

    }
  }
  cout<<min_est;
  cout<<i_spot<<"00"<<p_spot;

  cout<<"단순한 방법: 최단거리 ="<<min_est<<", i = ("<<arr_a[i_spot][0]<<","<<arr_a[i_spot][1]<<"), p = ("<<arr_b[p_spot][0]<<","<<arr_b[p_spot][1]<<")"<<endl;

}*/

int main() {
  string name;
  clock_t startT = clock();

  cout << "enter the txtname: "; //텍스트 파일이름 입력
  cin >> name;

  ifstream rd;
  rd.open(name, ifstream::in);
  string spot1,spot2,a1,a2,b1,b2; //문자열인 단어를 가져옴
  getline(rd, spot1);

  string checker_a = spot1; //배열의 크기를 정할 x의 숫자값을 정해옴
  int a_limit = stoi(spot1);
  int current_n1 = 0;
  int b_limit=0;
  int com_a[1000000][2];
  int com_b[1000000][2];

  while (current_n1 < a_limit) {
    for (int hrz_a = 0; hrz_a < a_limit; hrz_a++) {
      getline(rd, a1,' ');
      if (a1 == checker_a)
        continue;

      int ta = stoi(a1);
      com_a[current_n1][0] = ta;
      getline(rd, a2);
      int tb = stoi(a2);
      com_a[current_n1][1] = tb;
      current_n1++;

    }

    getline(rd,spot2,'\n');
    b_limit=stoi(spot2);
    b_limit+=a_limit;
    int current_n2 = 0;

    while(current_n2<b_limit){
      getline(rd, b1,' ');
      int t1 = stoi(b1);
      com_b[current_n2][0] = t1;
      getline(rd, b2);
      int t2 = stoi(b2);
      com_b[current_n2][1] = t2;
      current_n2++;
    }


    rd.close();

    //cout<<"MM"<<length_ab(2,6,3,6);
    //cout<<"^^^^"<<length_ab(6,2,9,4);

    //compare_S(a_limit, com_a, b_limit, com_b);

    clock_t endT = clock();
    clock_t duration = endT - startT;
    cout << "실행시간: " << (double)(duration / CLOCKS_PER_SEC) << "초";

  }
}
