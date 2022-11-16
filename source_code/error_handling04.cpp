// error_handling04.cpp
//

#include <iostream>
#include <limits> // for function numeric_limits<T>::max()

using namespace std;

int main()
{
    float input1, input2;
    
    cout << "Give an integer:\n";
    cin >> input1;
    cout << "Give another integer to divide " << input1 << endl;
    cin >> input2;

    try
    {
        if (input2 != 0) {
            cout << "\nThe result is: " << input1 / input2;
        }
        else throw(invalid_argument("You should not divide anything with zero...\n"));
    }

    catch (invalid_argument& inpt)
    {
        cerr << inpt.what() << endl;
    }

    // continue code

    return 0;
}
