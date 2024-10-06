#include<>
#include<fstream>
#include<ctime>

using namespace std;

int main(){
    string name;
    ifstream rd;
    clock_t startT=clock();


    cout<<"enter the txtname: ";
    cin>>name;
    rd.open(name, ifstream::in);

    clock_t endT=clock();
    clock_t duration = (double)endT-startT;
    cout<<"해당 코드의 소요시간은 "<<duration<<"초 입니다";
    /*
    double timeInSecond = (double)(elapsed / CLOCKS_PER_SEC); 

	cout << "Elapsed: " << timeInSecond << "s(" << elapsed << "ms)" << "\n";

	return 0;
    */
}