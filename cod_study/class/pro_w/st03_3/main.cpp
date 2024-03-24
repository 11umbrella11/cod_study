#include <iostream>
using namespace std;
#include "Account.h"

class DataA{
    public:
     char name;
     int num;
     int cost;
    double Account();

};

int main() {
Account a(“youn”, 1, 5000); // id 1번, 잔액 5000, 이름 youn 
a.deposit(50000); //50000저금
cout << a.getOwner() << “의 잔액은 “ << a.inquiry() <<endl;
 int money = a.withdraw(20000);
cout << a.getOwner() << “의 잔액은 “ << a.inquiry() <<endl;
}