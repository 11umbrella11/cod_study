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
//#include <iostream>
////#include <vector>//


std::array<int, 10>arr1;
//크기가 10인 arr1을 생성
arr1[0] = 1;
std::cout<<"arr1 배열의 첫번째 원소: "<<arr1[0]<<std::endl;

