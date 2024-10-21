#include <iostream>
#include <limits>
using namespace std;

// this function finds the limits of the short and double data types
// as well as the size of them

int main() {
    
    short shortLimit;
    double doubleLimit;

    cout << "The size of the short data type is: " << sizeof(shortLimit) << " bytes." << endl;
    cout << "The size of the double data type is: " << sizeof(doubleLimit) << " bytes." << endl;

    cout << "The minimum limit for the short data type is: " << numeric_limits<short>::min() << endl;
    cout << "The maximum limit for the short data type is: " << numeric_limits<short>::max() << endl;

    cout << "The minimum limit for the double data type is: " << numeric_limits<double>::min() << endl;
    cout << "The maximum limit for the double data type is: " << numeric_limits<double>::max() << endl;

    return 0;

}
