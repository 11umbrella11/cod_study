include<iostream>
using namespace std;

class Account{
    string name=n;
    int id=i;
    inr balance=b;



void Account::deposit(int dep){

}

string Account::getOwner(){
    return n;

}

int Account:: withdraw(int wd){
    if (balance >=wd){
        balance-=wd;
        return wd;
    }
    else{
        return 0;
    }
}

int inquiry(){
    return balance;
}