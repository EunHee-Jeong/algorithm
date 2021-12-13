//
//  operator_overloading.cpp
//  IP_review-2
//
//  Created by 정은희 on 2021/12/13.
//

#include <iostream>

using namespace std;

class Complex {
private:
    double val1, val2;
public:
    Complex(double val1, double val2): val1(val1), val2(val2) { }   // 생성자
    
    // 연산자 오버로딩 (선언)
    Complex operator+(Complex& other);
    Complex operator-(Complex& other);
    Complex operator*(Complex& other);
    
    void Display() {
        cout << val1 << ", " << val2 << endl;
    }
};

// 구현
Complex Complex::operator+(Complex& other) {
    cout << other.val1 << ", " <<other.val2 << endl;
    return Complex(val1+other.val1, val2+other.val2);
}

int main() {
    
    Complex a = Complex(1, 3);
    Complex b = Complex(5, 6);
    Complex c = Complex(0.0, 0.0);
    
    a.Display();
    b.Display();
    
    c = a + b;
    c.Display();
    
    return 0;
}
