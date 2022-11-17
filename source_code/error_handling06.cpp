// error_handling06.cpp
// define a new exception

#include <iostream>
#include <exception>

using namespace std;

// build my exeption
struct koukouroukou : public exception {
    const char* what() const throw ()
    {
        return "Someone pushed the wrong button...\n";
    }
};

int main() {

    try { 
        // ...
        throw koukouroukou();
    }
    catch (koukouroukou& expt) {
        cout << expt.what() << endl;
    }
   
    return 0;
}
