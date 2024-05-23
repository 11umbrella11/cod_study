#ifndef BASEARRAY_H
#define BASEARRAY_H

class BaseArray {
private:
int capacity; // 동적 할당된 메모리 용량
int *mem;
protected:
BaseArray(int capacity=100) {
this->capacity = capacity; mem = new int [capacity];
}
~BaseArray() { delete [] mem; }
void put(int index, int val) { mem[index] = val; }
int get(int index) { return mem[index]; }
int getCapacity() { return capacity; }
};
#endif