//
//  virtual_destructor.cpp
//  IP_review-2
//
//  Created by 정은희 on 2021/12/13.
//

#include <iostream>

using namespace std;

class First {
private:
    char* strone;
public:
    First(const char* str) {
        cout << "First()" << endl;
        strone = new char[strlen(str) + 1]; // str 크기만큼 strone에 동적할당 해줌.
    }
    virtual ~First() {
        cout << "~First()" << endl;
        delete [] strone;   // 메모리 해제
    }
};
class Second: public First {
private:
    char* strtwo;
public:
    Second(const char* str1, const char* str2): First(str1) {
        cout << "Second()" << endl;
        strtwo = new char[strlen(str2)+1];
    }
    ~Second() {
        cout << "~Second()" << endl;
        delete [] strtwo;
    }
};

int main() {
    
    First* ptr = new Second("simple", "complex");
    delete ptr;
    
    return 0;
}
