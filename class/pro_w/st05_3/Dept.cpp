#include "Dept.h"
#include<iostream>
using namespace std;
/*(2)->double free defected에러
Dept::Dept(const Dept &dept){
    //깊은 복사
    this->size = dept.size;
    //this->scores=dept.scores;//얕은복사
    this->scores = new int[size];
    for(int i=0;i<size;i++){
        this->scores[i]=dept.scores[i];
    }       
} // 복사생성자
*/    

Dept::~Dept(){
    if(scores != nullptr)
    delete [] scores;
}
int Dept::getSize() { 
    return size; 
    }
void Dept::read(){
    cout<<size<<"개 정수 입력>>";
    for(int i=0; i<size;i++)
        cin>>scores[i];
    
    
} // size 만큼 키보드에서 정수를 읽어 scores 배열에 저장
bool Dept::isOver60(int index){
    if(scores[index]>60) return true;
    else return false;

} // index의 학생의 성적이 60보다 크면 true 리턴