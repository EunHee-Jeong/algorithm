//
//  encapsulation-copy_constructor.cpp
//  IP_review-2
//
//  Created by 정은희 on 2021/12/12.
//

// Copy Constructor -> 1. 객체가 새롭게 생성될 때 호출  2. 함수 호출 시 전달인자로 클래스가 넘어갈 때 호출

#include <iostream>

using namespace std;

class Box {
public:
    Box(double w, double h, double l): width(w), height(h), length(l) { }
    Box(const Box& b): width(b.width), height(b.height), length(b.length) {
        cout << "Copy Constructor가 호출 되었습니당" << endl;
    }
    Box() { }   // Box box2;에 대한 생성자...!
    void print() const {
        cout << "(" << width << ", " << height << ", " << length << ")" << endl;
    }
private:
    double width, height, length;
};

void func(Box box) {
    cout << "Copy Constructor가 호출 되었습니당" << endl;
}

int main() {
    
    // copy constructor 호출
    Box box(1, 2, 3);
    Box box1(box);  // 기존의 객체를 옮기는 식으로 초기화
    box1.print();
    
    // 기본 생성자 호출
//    Box box2;
//    box2 = box;
//    Box box3;
//    box3 = box;
    
    func(box);
    
    return 0;
}
