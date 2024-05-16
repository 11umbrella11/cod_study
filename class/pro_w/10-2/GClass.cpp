#include"GClass.h"

template <class T1, class T2>
GClass<T1,T2>::GClass(){
    data1 =0;
    data2=0;
}
template <class T1, class T2>
void GClass<T1,T2>::set(T1 a, T2 b){
    data1=a;
    data2=b;
}
template <class T1, class T2>
GClass<T1,T2>::GClass(T1& a, T2& b){
    a=data1;
    b=data2;
}