//1. 리스트, 스택, 큐

//1-2)연속된 자료구조와 연결된 자료구조
//<연속된 자료구조> = 배열
//시작주소=ba(base address)//이후 주소=ba+N(추가원소갯수)*sizeof(type)
//~~위의 수식을 이용해서 모든 원소에 접근이 가능 -> 데이터 접근시간은 언제나 일정 =>빅오표기법, O(1)
//정적배열: 선언된 블록이 끝나면 소멸, int arr[size];
//동적배열: 생성시점과 해제할 시점을 자유롭게 정할 수 있다
//        , int* arr = (int*)malloc(size*sizeif(int)); <c>
//        , int* arr= new int[size];                   <c++>

//<연결된 자료구조>
//데이터는 노드에 저장, 각 노드의 next(pointer)값에 위치한 다음 노드로 접근
//다음노드로 접근해야만 캐시를 저장가능-> 연속된 자료구조보다 성능이 떨어짐

//1-3)std::array
//std::array는 원소의 타입과 배열의 크기를 매개변수로 사용하는 클래스 템플릿

#include <iostream>
#include <array>

template <size_t N>
//다양한 크기의 객체에대해 작동하는 범용적인 배열 출력함수를 위해 배열크기를 template로 선언
void print(const std::array<int, N>& arr){
    std::cout<<"원소의 갯수: "<< N <<std::endl;
}
/*void print(std::array<int,5> arr){
    for(auto ele : arr)
    //범위기반 for loop and reference: for(element : array)
    //array의 각 요소가 반복되어 element에 복사됨
        std::cout<<ele<<", ";
}*/
int main(){

    std::array<int,10> arr1;
//크기가 10인 arr1을 생성
    arr1[0]= 1;
    std::cout<<"arr1 배열의 첫번째 원소: "<<arr1[0]<<std::endl;

    std::array<int,4> arr2 = {1, 2, 3, 4};
    std::cout<<"arr2의 모든 원소: ";

    for(int i=0;i<arr2.size();i++)
        std::cout<<arr2[i]<<" ";

    std::cout<<std::endl;

    std::array<int, 4> arr3 = {2, 3, 4 ,5};

    try{
        std::cout<<arr3.at(3)<<std::endl;//수행 ok
        std::cout<<arr3.at(4)<<std::endl;//std::out_of_range발생
    }
    catch(const std::out_of_range& ex){//예외발생(exception)_out_of_range에러를 포착
        std::cerr<<ex.what()<<std::endl;//what()메서드를 이용해서 리턴되는 문자열 제공
        //cout -> cin과 같은 항목을 출력하는 함수
        //cerr -> 에러를 경고하고 콘솔에 에러를 출력하는 함수
        //clog -> 로그내용을 기록하고 콘솔에 로그를 출력하는 함수
    }
    //std::array<int,5> arr5={1,2,3,4,5};
    //print(arr5);
    std::array<int, 5> arr5={2,4,6,7,8};
    print(arr5);

}
