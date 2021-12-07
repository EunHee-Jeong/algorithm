//
//  main.cpp
//  IP_Review
//
//  Created by 정은희 on 2021/11/27.
//


#include <iostream>

using namespace std;

void initialize(int list[], int size, int value) {
    for (int i=0; i<size; i++)
        list[i] = value;
}

void print(int list[], int size) {
    cout << "[ ";
    for (int i=0; i<size; i++)
        cout << list[i] << " ";
    cout << "]" << endl;
}

int* addElement(int list[], int& size, int value) {
    int* newList = new int[size + 1];   // 새로운 배열 생성
    
    if (newList == 0) { // 메모리 할당이 잘못 되었다면 (널포인터에 저장 되었다면)
        cout << "Memory allocation error for addElement!" << endl;
        exit(-1);    // 프로그램 종료
    }
    
    for (int i=0; i<size-1; i++)    // 기존 배열 복사
        newList[i] = list[i + 1];
    if (size)   // size가 0이 아니라면
        delete[] list; // 기존 리스트 지워줌
    newList[size] = value;
    size++;
    return newList;
}

int* deleteFirst(int list[], int& size) {
    if (size <= 1) {
        if (size) delete list;
        size = 0;
        return NULL;
    }
    int* newList = new int[size - 1];
    if (newList == 0) {
        cout << "Memory allocation error for delete First!" << endl;
        exit(-1);
    }
    for (int i=0; i<size-1; i++)    // 기존 배열 복사, 삭제
        newList[i] = list[i+1];
    delete[] list;
    size--;
    return newList;
}

int main() {
    
    cout << "Enter list size: ";
    int n;
    cin >> n;
    
    int* A = new int[n];    // int형 배열을 동적할당해 시작 주소를 A에 넣어줌.
    
    if (n <= 0) {
        cout << "bad size" << endl;
        return 0;
    }
    
    initialize(A, n, 0);    // 배열 A의 값들을 0으로 초기화
    print(A, n);
    A = addElement(A, n, 5);    // 배열 A의 마지막 값으로 5를 추가
    print(A, n);
    A = deleteFirst(A, n);  // 배열 A의 첫번째 요소를 제거
    print(A, n);
    
    delete [] A;    // 동적할당했기 때문에 array를 종료하려면 메모리 해제가 필요함!
    
    return 0;
}
