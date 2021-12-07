//
//  template_ex_2.cpp
//  IP_10th
//
//  Created by 정은희 on 2021/12/07.
//

#include <iostream>

// 템플릿 예제 - 타입이 2개일 때

using namespace std;

template <typename T>
T Max(T a, T b) {
    cout << "simple max" << endl;
    return a > b ? a : b;
}

template <>
char* Max(char* a, char* b) {
    cout << "char*" << endl;
    return strlen(a) > strlen(b)? a : b;
}

template <>
const char* Max(const char* a, const char* b) {
    cout << "const char*" << endl;
    return strlen(a) > strlen(b)? a : b;
}

int main() {
    
    cout << Max(10, 5) << endl;
    cout << Max(5, 10) << endl;
    
    cout << Max("constant", "test") << endl;
    
    char str1[] = "character";
    char str2[] = "test2";
    cout << Max(str1, str2) << endl;
    
    return 0;
}
