#include<cstdlib>
#include<ctime>
#include"Random.h"
Random ::Random(){
    srand((unsigned)time(0));
}

int Random :: next(){
    return rand();
}

int Random::nextInRange(int start, int end){
    return rand()%(end-start)+start;
}