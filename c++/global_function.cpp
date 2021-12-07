//
//  global_function.cpp
//  IP_10th
//
//  Created by 정은희 on 2021/12/07.
//

#include <iostream>

using namespace std;

// 전역함수로 구현!

class Point {
private:
    int xpos, ypos;
public:
    Point(int x=0, int y=0): xpos(x), ypos(y) { }
    
    void ShowPosition() const {
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }
    
    Point operator+(const Point& ref) {
        // operator overloading
        Point pos(xpos+ref.xpos, ypos+ref.ypos);
        return  pos;
    }
    
    Point operator+(const int n) {
        Point pos(xpos+n, ypos+n);
        return pos;
    }
    
    friend Point operator-(const Point &pos1, const Point &pos2);
    friend Point operator+(const int n, const Point &pos2);
};

Point operator-(const Point &pos1, const Point &pos2) {
    Point pos(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
    return pos;
}

Point operator+(const int n, const Point &pos2) {
    Point pos(n + pos2.xpos, n + pos2.ypos);
    return pos;
}

int main() {
    
    Point pos1(3, 4);
    Point pos2(10, 20);
    Point pos4 = pos1 - pos2;
    pos4.ShowPosition();
    
    // 전역함수를 사용하는 이유
    Point pos5 = pos1 + 20;
    Point pos6 = 10 + pos2;
    pos5.ShowPosition();
    pos6.ShowPosition();
    /*
     멤버함수로 하려면 위의 Point operator+(const int n)처럼 만들어주면 된다.
     하지만 인자 순서 바뀌었을 때의 정의가 안 되어있어서 오류 발생함
    */
    
    return 0;
}
