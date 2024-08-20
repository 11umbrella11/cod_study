#include<iostream>
#include"MyQueue.h"
using namespace std;

int main() {
    MyQueue mQ(3);//100에서 3으로 바꾸면 앞의 세값만 들어감.
    int n;
    cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
    for(int i=0; i<5; i++) {
        cin >> n;
        mQ.enqueue(n); // 큐에 삽입
    }
    cout << "큐의 용량:"<< mQ.capacity() << ", 큐의 크기:" << mQ.length() <<endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
    while(mQ.length() != 0) {
        cout<< mQ.dequeue() << ' '; // 큐에서 제거하여 출력
    }
    cout << endl << "큐의 현재 크기 : "<< mQ.length() << endl;

    int main() {
    MyStack mStack(100);
    int n;
    cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
    for(int i=0; i<5; i++) {
    cin >> n;
    mStack.push(n); // 스택에 푸시
    }
    cout << "스택 용량:" << mStack.capacity() << ", 스택 크기:" <<mStack.length() << endl;
    cout << "스택의 모든 원소를 팝하여 출력한다>> ";
    while(mStack.length() != 0) {
    cout << mStack.pop() << ' '; // 스택에서 팝
    }
    cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
    }
}

size_t prev_cap = m_capacity;
    if (m_capacity < DEFAULT_CAP)
      m_capacity = DEFAULT_CAP;
    else
      m_capacity *= 2;
    T *t_arr = new T[m_capacity];
    for (size_t i = 0; i < m_size; i++)
      t_arr[i] = arr[(head + i) % prev_cap];
    head = 0;
    tail = m_size;
    delete[] arr;
    arr = t_arr;
  }
    if(m_size >= m_capacity)
      increaseCapacity();
    arr[tail] = val;
    tail = (tail + 1) % m_capacity;
    m_size++;