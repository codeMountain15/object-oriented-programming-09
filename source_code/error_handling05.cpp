// error_handling05.cpp
//

#include <iostream>
using namespace std;

int main() {
    try {
        int input;
        cout << "Enter an integer from 1-4:\n";
        cin >> input;

        switch (input) {
        case 1:
            throw 1;  // throw an int
            break;
        case 2:
            throw 2.0;  //throw a double
            break;
        case 3:
            throw "three"; //throw a const char*
            break;
        case 4:
            throw string("four"); //throw a std::string
            break;
         default:
            throw invalid_argument("Ma ti sou eipa vre koufalogo?"); //throw an object
        }
    }

    catch (int expt) { cout << "You sent me: " << expt << "\n"; }

    catch (double expt) { cout << "You sent me: " << expt << "\n"; }

    catch (const char* expt) { cout << "You sent me: " << expt << "\n"; }

    catch (const string& expt) { cout << "You sent me: " << expt << "\n"; }

    catch (const invalid_argument& expt) { cout << expt.what() << endl; }

    //catch (...) { cout << "Got something else!\n"; }

    cout << "The exception was handled successfully!\n";

    return 0;
}
