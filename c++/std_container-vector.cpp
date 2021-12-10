//
//  std_container-vector.cpp
//  IP_11th
//
//  Created by 정은희 on 2021/12/09.
//

/*
 Container Class - 객체들을 하나로 묶어주는 holder
 vector - Sequence Container
 (array와 비슷함)
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> vector1;
    vector1.push_back(20);   // 20
    vector1.push_back(30);   // 20 30
    
    // 벡터에는 front를 쓸 수 없어서 첫 번째 요소로 넣으려면 insert를 사용해야 한다.
    cout << "First Insert Test" << endl;
    vector<int>::iterator iterInsertPos = vector1.begin();  // iterator를 사용해 첫 번째 위치를 가져옴
    vector1.insert(iterInsertPos, 100); // 100 20 30
    
    for (vector<int>::iterator iterPos = vector1.begin(); iterPos != vector1.end(); iterPos++) {
        cout << "vector1: " << *iterPos << endl;    // 100 20 30
            // 포인터형으로도 쓸 수 있다
    }
    
    cout << "Second Insert Test" << endl;
    iterInsertPos = vector1.begin();
    ++iterInsertPos;    // 두 번째 위치로 이동
    vector1.insert(iterInsertPos, 2, 200);   // iterInsertPosr가 가리키고 있는 위치에 item 200을 두 번 넣음
    // 100 200 200 20 30
    
    for (vector<int>::iterator iterPos = vector1.begin(); iterPos != vector1.end(); iterPos++) {
        cout << "vector1: " << *iterPos << endl;
    }
    
    cout << "Third Insert Test" << endl;
    vector<int> vector2;
    vector2.push_back(1000);    // 1000
    vector2.push_back(2000); // 1000 2000
    vector2.push_back(3000);    // 1000 2000 3000
    
    iterInsertPos = vector1.begin();
    vector2.insert(++iterInsertPos, vector2.begin(), vector2.end());    // 1000 2000 100 200 200 20 30
    
    // 벡터는 메모리상의 연속적인 공간에 위치하기 때문에, random access가 가능하다. (list와의 차이점) -> 속도 빠름
    cout << "Random Access[2]: " << vector1[2] << endl; // 2000
    
    return 0;
}
