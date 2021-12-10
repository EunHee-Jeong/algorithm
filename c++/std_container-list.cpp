//
//  list_review.cpp
//  IP_11th
//
//  Created by 정은희 on 2021/12/09.
//

/*
 객체들을 하나로 묶어주는 holder인 Container Class 중 Sequence Container에 속하는 list에 대해 정리해보자!
 1. Sequence Container의 특징 - Access, Add, Remove
  - 접근 : front(), back()
  - 추가, 삭제 : push_back(), push_front(), pop_back(), pop_front()
 2. list
  - doubled linked list (연결되어 있는 각각의 개체들)
  - 메모리상의 불연속적인 공간에 위치.
  - 가장 앞이나, 가장 뒤에서 접근한다.
  - 순회하며 찾아볼 수 있다.
  - 가리키는 것들만 바꾸고 데이터를 넣어주면 되기 때문에, 중간에서 넣고 빼기 편하다.
  - 관련된 함수들: begin, end, push_front, push_back, pop_front, pop_back, front, back, clear, empty, size, sort
 */

#include <iostream>
#include <list>

using namespace std;

class Item {
public:
    int ItemID, BuyMoney;
    Item(int itemID, int buyMoney) {
        ItemID = itemID;
        BuyMoney = buyMoney;
    }
};

int main() {
    
    list<Item> ItemList;    // list<자료형> 객체명;
    
    Item item1(1, 1000);    // item1 객체 생성
    ItemList.push_front(item1); // 1
    
    Item item2(2, 2000);
    ItemList.push_front(item2); // 2 1
    
    Item item3(3, 3000);
    ItemList.push_back(item3);  // 2 1 3
    
    Item item4(4, 4000);
    ItemList.push_back(item4);  // 2 1 3 4
    
    /*
     Iterator
        - 각각의 객체들에 접근
        - 연결된 객체들을 순회할 수 있게 해줌
        - 포인터와 비슷한 개념
     */
    list<Item>::iterator iterEnd = ItemList.end();
    
    for (list<Item>::iterator iterPos = ItemList.begin(); iterPos != iterEnd; ++ iterPos) {
        cout << "Item code: " << iterPos->ItemID << endl;
    }
    
    ItemList.pop_front();   // 1 3 4
    Item front_item = ItemList.front();
    cout << "Item ID: " << front_item.ItemID << endl;  // 1
    
    ItemList.pop_back();    // 1 3
    Item back_item = ItemList.back();
    cout << "Item ID: " << back_item.ItemID << endl;    // 3
    
    if (!ItemList.empty()) {
        list<Item>::size_type count = ItemList.size();
        cout << "The number of Items: " << count << endl;  // 2
    }
    
    ItemList.clear();
    list<Item>::size_type count = ItemList.size();
    cout << "The number of Items: " << count << endl;   // 0
    
    return 0;
}
