// f_override01.cpp
//

#include<iostream>
using namespace std;

class Bird {
public:
    // pure virtual
    virtual void speak() = 0;
};

class Chicken : public Bird {
public:
    // function overriding
    void speak() { cout << "Ko ko ko koooo\n"; }
};

class Raven : public Bird {
public:
    // function overriding
    void speak() { cout << "Kra kraaaaa\n"; }
};

class Parrot : public Bird {
public:
    // function overriding
    void speak() { cout << "$@!#%$&*(Q@!\n"; } // Kati gallika
};

class Canary : public Bird {
public:
    // function overriding
    void speak() { cout << "Tsiou tsiou\n"; }
};

int main() {
    
    int input = 0; // keyboard input

    Bird* a = NULL;
    Chicken a1;
    Parrot a2;
    Raven a3;
    Canary a4;

    cout << "Give a number from 1 to 4 (or 0 to exit):\n";
    cin >> input;

    while (input != 0) {
        switch (input){
        case 1:
            a = &a1;
            break;
        case 2:
            a = &a2;
            break;
        case 3:
            a = &a3;
            break;
        case 4:
            a = &a4;
        }

        a->speak();
        cin >> input;
    }

    return 0;
}
