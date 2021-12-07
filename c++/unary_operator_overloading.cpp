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
    
    Point operator++() {
        cout << "Hello" << endl;
        xpos += 1;
        ypos += 1;
        return *this;   // 자기 자신(객체)을 리턴.
    }
};

int main() {
    
    Point pos1(1, 2);
    ++pos1; // pos1.operator++();
    pos1.ShowPosition();
    
    return 0;
}
