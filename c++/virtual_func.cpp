//
//  virtual_func.cpp
//  IP_review-2
//
//  Created by 정은희 on 2021/12/13.
//

#include <iostream>

using namespace std;

class Animal {
public:
    virtual void eat() {
        cout << "I eat like a generic Animal" << endl;
    }
};
class Wolf: public Animal {
    void eat() {
        cout << "I eat like a wolf" << endl;
    }
};
class Fish: public Animal {
    void eat() {
        cout << "I eat like a fish" << endl;
    }
};
class OtherAnimal: public Animal {
    
};

int main() {
    
    // 부모 클래스에 포인터를 정의하면면자식 클래스의 객체들을 한 번에 관리할 수 있다.
    Animal* anAnimal[4];
    
    anAnimal[0] = new Animal();
    anAnimal[1] = new Wolf();
    anAnimal[2] = new Fish();
    anAnimal[3] = new OtherAnimal();
    
    // 출력해서 확인
    for (int i=0; i<4; i++)
        anAnimal[i]->eat();
    
    return 0;
}
