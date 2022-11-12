// error_handling02.cpp
//

#include <stdexcept>
#include <iostream>

using namespace std;

void check_grade(int c)
{
    if (c < 0 || c >10)
        throw invalid_argument("Something isn't right...\n");
}

int main()
{
    try
    {
        check_grade(20);
    }

    catch (invalid_argument& inpt)
    {
        cerr << inpt.what() << endl;
        //return -1;
    }
   
    return 0;
}
