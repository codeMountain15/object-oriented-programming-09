// f_override_overload01.cpp
//

#include<iostream>
using namespace std;

class Animal {
public:
    virtual void speak() { cout << "The Animal speaks\n"; }

    void sing() { cout << "The Animal sings\n"; }
};

class Bird : public Animal {
public:
    // function overriding
    void speak() { cout << "The Bird speaks\n"; }

    // function overloading
    using Animal::sing;     // compile error without this code
                            // void sing() { Animal::sing(); } // <- alternately
    void sing(int a) { for (int i = 0; i < a; i++) cout << "The Bird sings\n"; }
};


int main() {

    Bird parrot1;

    parrot1.speak();
    parrot1.sing(3);
    parrot1.sing();

    return 0;
}
