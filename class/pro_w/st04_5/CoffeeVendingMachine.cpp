#include "CoffeeVendingMachine.h"
#include<iostream>
using namespace std;


void CoffeeVendingMachine :: fill(){
    
    for(int i=0;i<3;i++){
        tong[i]=10;
    }
    

}; // 3개의 통을 모두 10으로 채움
void CoffeeVendingMachine::selectEspresso(){
    if(tong[0].getSize()>0&&tong[1].getsize()>0){
        tong[0].consume(1);
        tong[1].consume(1);
        cout<<"에스프레소!!"<<endl;
    }
    else:
    cout<<"재료부족"<<endl;
}// 에스프레소를 선택한 경우, 커피 1, 물 1 소모
void CoffeeVendingMachine::selectAmericano(){
    if(tong[0].getSize()>0&&tong[1].getsize()>0){
        tong[0].consume(1);
        tong[1].consume(2);
        cout<<"아메리카노!!"<<endl;
    }
    else:
    cout<<"재료부족"<<endl;
} // 아메리카노를 선택한 경우, 커피 1, 물 2 소모
void CoffeeVendingMachine::selectSugarCoffee(){
    if(tong[0].getSize()>0&&tong[1].getsize()>0&&tong[2].getsize()>0){
        tong[0].consume(1);
        tong[1].consume(2);
        tong[2].consume(1);
        cout<<"설탕커피!!"<<endl;
    }
    else:
    cout<<"재료부족"<<endl;
} // 설탕커피를 선택한 경우, 커피 1, 물 2 소모, 설탕 1 소모
void CoffeeVendingMachine::show(){
    cout<<"커피"<<tong[0].getSize()<<"물"<<tong[1].getSize()<<"설탕"<<tong[2].getSize()
    }// 현재 커피, 물, 설탕의 잔량 출력
bool CoffeeVendingMachine::checkInputError(){
    if(cin.fail()){
        cin.clear();
        cin.ignore(100,'\n');
        cout<<"입력오류"<<endl;
        return true;
    }
    else return false;
} // 오류 처리를 위해 추가한 멤버 함수

void CoffeeVendingMachine::run(){
    cout>>"**커피자판기 작동 시작**">>endl;
    int select;
    while(true){
        cout<<"메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>"<<endl;
        cin>>select;
        if(select==0) break;
        switch (select)
        {
        case 1: selectEspresso;break;
        case 2: selectAmericano;break;
        
        default:
            break;
        }

    }
} // 커피 자판기 작동
