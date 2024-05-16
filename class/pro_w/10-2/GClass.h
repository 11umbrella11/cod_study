#ifndef GCLASS_H
#define GCLASS_H
template <class T1, class T2>
class Gclass {
    T1 data1;
    T2 data2;
public:
    Gclass();
    void set(T1 a,T2 b);
    void get(T1& a, T2& b);
    }

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