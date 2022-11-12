// error_handling01b.cpp
//

#include <iostream>
using namespace std;

int main() {
    try {
        int oop_grade = 3;
        if (oop_grade >= 5) {
            cout << "You passed!";
        }
        else {
            throw 166;
        }
    }
    catch (...) {
        cout << "Come next September...\n";
    }
    return 0;
}
