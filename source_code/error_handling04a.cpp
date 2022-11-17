// error_handling04a.cpp
// throw exception from function

#include <iostream>
#include <limits> // for function numeric_limits<T>::max()

using namespace std;

float divide(int a, int b){
    if (b == 0) {
        throw(invalid_argument("You should not divide anything with zero...\n"));
    }
    else return a / b;
}

int main()
{
    float input1, input2;

    cout << "Give an integer:\n";
    cin >> input1;
    cout << "Give another integer to divide " << input1 << endl;
    cin >> input2;

    try
    {
        cout << "The result is: " << divide(input1, input2) << endl;
    }

    catch (invalid_argument& inpt)
    {
        cerr << inpt.what() << endl;
    }

    // continue code

    return 0;
}
