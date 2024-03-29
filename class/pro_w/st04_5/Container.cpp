#include<iostream>
#include"Container.h"

using namespace std;

/*
CoffeeVendingMachine::selectEspresso(){
    tong[0]-=1;
    tong[1]-=1;
}
CoffeeVendingMachine::selectAmericano(){
    tong[0]-=1;
    tong[1]-=2;
}
CoffeeVendingMachine::selectSugarCoffee(){
    tong[0]-=1;
    tong[1]-=2;
    tong[2]-=2
}*/
void Container::fill(int n){
    
} // n 만큼 채우기
     // n 만큼 소모하기
int Container::getSize(){

} 
bool Container::consume(int n){
    if(size<n) return false;
    else{
        size -= n;
        return true;
    }
}

