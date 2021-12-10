//
//  std_container-set.cpp
//  IP_11th
//
//  Created by 정은희 on 2021/12/10.
//

#include <iostream>
#include <set>

using namespace std;

int main() {
    
    set<int> s;
    s.insert(40); s.insert(30); s.insert(50);
    s.insert(80); s.insert(10); s.insert(90);
    s.insert(70); s.insert(70);
    // set -> key값 기준으로 정렬 -> 자동으로 sorted 됨
    
    set<int>::iterator iter;
    for (iter=s.begin(); iter!=s.end(); ++iter)
        cout << *iter << " ";
    // 10 30 40 50 70 80 90
    cout << endl;
    
    cout << "count(70): " << s.count(70) << endl; // 1 (중복x)
    
    iter = s.find(30);
    if (iter!=s.end())  // 값을 찾았다면
        cout << *iter << endl;  // 출력
    else
        cout << "not found" << endl;
    
    return 0;
}
