//
//  member_function.cpp
//  IP_10th
//
//  Created by 정은희 on 2021/12/07.
//

#include <iostream>

using namespace std;

// 멤버함수로 구현!

class Point {
public:
    int xpos, ypos;
    Point(int x=0, int y=0): xpos(x), ypos(y) { }
    
    void ShowPosition() const {
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }
    
    Point operator+(const Point& ref) {
        // operator overloading
        Point pos(xpos+ref.xpos, ypos+ref.ypos);
        return  pos;
    }
};

int main() {
    
    Point pos1(3, 4);
    Point pos2(10, 20);
    Point pos3 = pos1.operator+(pos2);  // Point pos3 = pos1+pos2;
    /*
     pos2 -> (const Point& ref) => 포인터형으로 들어감
     pos1 -> Point operator+ => 각각의 pos들을 더해서 새로운 객체 만들고 return
     pos3 -> 각각을 더한 return value
     */
    pos3.ShowPosition();    // 제대로 더해졌는지 확인
    
    return 0;
}
