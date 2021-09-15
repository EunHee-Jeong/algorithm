//
//  3-2.cpp
//  IP2_2nd
//
//  Created by 정은희 on 2021/09/14.
//

#include <iostream>

using namespace std;

int main() {
    
    // 첫 번째 피라미드 (밑으로 퍼짐)
    int i = 0;  // 초기화
    while (i < 5) { // 총 5줄 출력
        
        // 왼쪽 공백 출력하는 반복문
        for (int j=i; j<=5; j++) {  // 5부터 시작해서 한 칸씩 줄어듦
            cout << " ";
        }
        // 별과 중간 공백을 출력하는 반복문
        cout << "*";    // 왼쪽 별
        for (int j=2*i-1; j>0; j--) {   // 중간 공백 (아래로 갈수록 퍼짐)
            cout << " ";
        }
        if (i>0) cout << "*";   // 오른쪽 별 (첫 번째 줄은 1개)
        
        cout << endl;   // 개행
        i++;    // updating
    }
    
    // 두 번째 피라미드 (밑으로 좁아짐)
    int k = 0;  // 초기화
    while (k < 6) { // 총 6줄 출력
         
        // 왼쪽 공백 출력하는 반복문
        for (int j=0; j<=k; j++) {     // 아래로 갈수록 한 칸씩 커짐
            cout << " ";
        }
        // 별과 중간 공백을 출력하는 반복문
        cout << "*";   // 왼쪽 별
        for (int j=2*k; j<9; j++) {  // 중간 공백 (10칸부터 시작해서 두 칸씩 좁아짐)
            cout << " ";
        }
        if (k<5) cout << "*";  // 오른쪽 별 (마지막 줄은 1개)
         
        cout << endl;   // 개행
        k++;    // updating
    }
    
    
    
    return 0;
}
