// error_handling03.cpp
//
 
#include <iostream>
#include <limits> // for function numeric_limits<T>::max()

using namespace std;

int main()
{
    int input;

    try
    {
        cout << "How many push-ups can you do?\n";
        cin >> input;
        if (input <= numeric_limits<short int>::max()) {
            cout << "Well done!\n"; 
        }
        else throw(invalid_argument("The number is out of range\n"));
    }

    catch (invalid_argument& inpt)
    {
        cerr << inpt.what() << endl;
    }

 return 0;
}
