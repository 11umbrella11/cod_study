#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>
using namespace std;

class Account{
    string name;
    int id;
    int balance;
public:
    Account(string n, int i, int b);
    void deposit(int dep);
    string getOwnwer();
    int getId();
    int withdraw(int wd);
    int inquiry();
};
#endif