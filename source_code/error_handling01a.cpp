// error_handling01a.cpp
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
    catch (int error_code) {
        cout << "Come next September...\n";
        cout << "Error No: " << error_code << endl;
    }
    return 0;
}
