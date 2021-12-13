//
//  function_overriding.cpp
//  IP_review-2
//
//  Created by 정은희 on 2021/12/13.
//

// 컴파일러는 포인터형의 타입을 보고 실행 범위를 결정한다.
// 즉 포인터형에 따라 어떤 함수가 실행될지 결정된다...!

#include <iostream>

using namespace std;

class First {
public:
    First() { }
    void MyFunc() {
        cout << "First Func" << endl;
    }
};
class Second: public First {
public:
    Second() { }
    void MyFunc() { // overriding
        cout << "Second Func" << endl;
    }
};
class Third: public Second {
public:
    Third() { }
    void MyFunc() { // overriding
        cout << "Third Func" << endl;
    }
};

int main() {
    
    Third* tptr = new Third();
    Second* sptr = tptr;
    First* fptr = sptr;
    
    fptr->MyFunc();
    sptr->MyFunc();
    tptr->MyFunc();
    
    delete tptr;
    
    return 0;
}
