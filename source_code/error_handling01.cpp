// error_handling01.cpp
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
            throw (oop_grade);
        }
    }
    catch (int oop_grade) {
        cout << "Come next September...\n";
        cout << "Your grade is: " << oop_grade << endl;
    }
  
    return 0;
}
