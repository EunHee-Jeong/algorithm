//
//  encapsulation-public_private.cpp
//  IP_review-2
//
//  Created by 정은희 on 2021/12/12.
//

#include <iostream>

using namespace std;

class Box {
private:
    double height, width, length;
    double area, volume;
public:
    Box(): height(0), width(0), length(0) { }
    void set(double h, double w, double l) {
        height = h;
        width = w;
        length = l;
        area = 2 * (h * w + w * l + l * h);
        volume = h * w * l;
    }
    void print() const {
        cout << "Box : (" << height << ", " << width << ", " << length << ")" << endl;
        cout << "Area : " << area << endl;
        cout << "Volume: " << area << endl;
    }
};

int main() {
    
    Box box1;
    box1.set(1, 2, 3);
    box1.print();
    
    /*
     만약 멤버 변수들을 public으로 선언했다면,
     box1.height = box1.width = box1.length = 30; 이런 식으로 직접 접근할 수 있지만
     box.print();를 했을 때 변수들의 값만 바뀌고 area, volume에는 적용이 안 된 것을 확인할 수 있다.
     즉 데이터 일관성을 해친 것이다... !
     인터페이스를 통해서만 접근 가능하게 하기 위해 private label를 사용한다.
     */
    box1.set(30, 30, 30);
    
    return 0;
}
