//
//  copy_constructor.cpp
//  IP_review-2
//
//  Created by 정은희 on 2021/12/12.
//

#include <iostream>

using namespace std;

class SoSimple {
private:
    int num1, num2;
public:
    SoSimple(int n1, int n2): num1(n1), num2(n2) {
        cout << "생성자 SoSimple(int n1, int n2) 호출" << endl;
    }
    SoSimple(const SoSimple& copy): num1(copy.num1), num2(copy.num2) {
        cout << "생성자 SoSimple(const SoSimple& copy) 호출" << endl;
    }
    void ShowSimpleData() {
        cout << num1 << endl;
        cout << num2 << endl;
    }
};

int main() {
    
    SoSimple sim1(15, 30);
    cout << "Copy Constructor 생성 및 초기화 직전" << endl;
    SoSimple sim2 = sim1;
    cout << "Copy Constructor 생성 및 초기화 직후" << endl;

    sim2.ShowSimpleData();
    
    return 0;
}
