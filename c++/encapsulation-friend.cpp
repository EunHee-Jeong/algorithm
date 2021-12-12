//
//  encapsulation-friend.cpp
//  IP_review-2
//
//  Created by 정은희 on 2021/12/12.
//

// 필요에 의해 non-public member에 접근하고 싶은 경우, friend를 써준다.

#include <iostream>

using namespace std;

class X {
public:
    X() { } // 생성자
    friend class Y;
    friend int f(void);
private:
    int a, b, c;    // 멤버변수
};
class Y {
public:
    Y() { }
    void func(X& var) { // 파라미터로 X를 참조하는 함수 func
        var.a = var.b = var.c = 0;
    }
};
int f(void) {
    X x;
    return x.a + x.b + x.c;
}

int main() {
    
    return 0;
}
