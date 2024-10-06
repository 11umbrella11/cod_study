#include<iostream>
#include<fstream>
//#include<sstream>
#include<string>
#include<ctime>

using namespace std;

int main(){
  string name;
  clock_t startT=clock();
  
  cout<<"enter the txtname: ";//텍스트 파일이름 입력
  cin>>name;
  ifstream rd;
  rd.open(name, ifstream::in);
  string spot,a1,a2;//문자열인 단어를 가져옴
  getline(rd,spot);
  string checker=spot;//배열의 크기를 정할 x의 숫자값을 정해옴
  int a_limit=stoi(spot);
  //cout<<spot;
  int current_n=0;
  //cout<<a_limit;
  int com_a[1000000][2];
  while(current_n<a_limit){
    for(int hrz_a=0;hrz_a<a_limit;hrz_a++){
        //for(int vert_a=0;vert_a<2;vert_a++){
            getline(rd,a1,' ');
            if(a1==checker)
                continue;
            //cout<<a1<<"//";
            int ts=stoi(a1);
            com_a[current_n][0]=ts;
            cout<<com_a[current_n][0]<<endl;
            getline(rd,a2,'\n');
            //cout<<a2<<"<<";
            int ts=stoi(a2);
            com_a[current_n][1]=ts;

            //cout<<ts<<"//"<<current_n<<"||"<<vert_a<<endl;
        //}
        
        //cout<<com_a[current_n][0]<<">>"<<current_n<<endl;
      current_n++;
    }
   
  rd.close(); 

  clock_t endT=clock();
  clock_t duration = (double)endT-startT;
  cout<<"해당 코드의 소요시간은 "<<duration<<"초 입니다";
    /*
    double timeInSecond = (double)(elapsed / CLOCKS_PER_SEC); 

  cout << "Elapsed: " << timeInSecond << "s(" << elapsed << "ms)" << "\n";

  return 0;
    */
}
