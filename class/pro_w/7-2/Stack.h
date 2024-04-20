#ifndef STACK_H
#define STACK_H

class Stack{

    int size;
    int *p;
    int tos;

public:
Stack(int sizr = 10);
~Stack();
Stack&operator<<(int n);
Stack$operator>>(int &n);
bool operator!();

}
#endif;