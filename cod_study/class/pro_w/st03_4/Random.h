#ifndef RANDOM_H
#define RANDOM_H

#include<IOSTREAM>
using namespace std;

class Random{
    public:
    Random();
    int next();
    int nextInRange(int start, int end);
};
#endif