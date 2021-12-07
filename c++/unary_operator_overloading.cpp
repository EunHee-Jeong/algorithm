//
//  unary_operator_overloading.cpp
//  IP_10th
//
//  Created by 정은희 on 2021/12/07.
//

#include <iostream>

using namespace std;

// 단항연산자 오버로딩 - 전위연산자 ++pos; 예시

class Point {
private:
    int xpos, ypos;
public:
    Point(int x=0, int y=0): xpos(x), ypos(y) { }
    
    void ShowPosition() const {
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }
    
    Point& operator++() {   // 후위연산자로 사용하려면 안에 int 써주기
        cout << "Hello" << endl;
        xpos += 1;
        ypos += 1;
        return *this;   // 자기 자신(객체)을 리턴.
    }
    
    friend Point& operator--(Point& ref);
};

// 전역 함수로 전위연산자 만들기
Point& operator--(Point& ref) {
    ref.xpos -= 1;
    ref.ypos -= 1;
    return ref; // 자기자신 리턴
}

int main() {
    
    Point pos1(1, 2);
    ++pos1; // pos1.operator++();
    
    ++(++pos1);
    
    /*
     전위 연산자는 중첩해서 쓸 수 있다.
     하지만 return value가 그냥 복사가 되기 때문에, 포인터를 참조형으로 고쳐줘야 한다.
    */
    
    --(--pos1);
    pos1.ShowPosition();
    
    return 0;
}
