//연습문제1. 동적크기 배열 구현하기
//학생정보를 관리하는 간단한 응용프로그램
#include <iostream>
#include <sstream>
#include <algorithm>

template <typename T>
class dynamic_array
{
    //주요 멤버변수 선언
    T* data;
    size_t n;
    //size_t: 어떤 객체나 상관없이 포함할 수 있는 최대크기의 데이터(unsigned)

public:
    dynamic_array(int n)
    {
        //배열크기를 인자로 받는 생성자
            this->n=n;
            data=new T[n];
    }

    dynamic_array(const dynamic_array<T>& other)
    {
        //복사생성자
            n=other.n;
            data= new T[n];

            for(int i=0;i<n;i++)
                data[i]=other[i];
    }
    T& operator[](int index){
        return data[index];
    }
    const T& operator[](int index) const{
        return data[index];
    }
    T& at(int index){
        if(index < n)
            return data[index];
        throw "index out of range";
    }
    
};
