#include <iostream>
using namespace std;

int main()
{
    int a = 2;         // Integer data type
    char c = 'a';      // Character data type, It can store 2^8 = 256 i.e., 0-255 diff-diff  characters
    char ch = 125;     // This give '}'  as an output
    bool flag = false; // true -> 1, false -> 0, takes 1 bytes(smallest addressable memory unit)
    float f = 1.1;     // takes 4 bytes -> 32 bits
    double d = 1.1;    // takes 8 bytes -> 64 bits
    // char ch1 = 256; // This gives us an error as 0-255 characters can be stored only and hence overflow occurs.

    cout << "Value of a is: " << a << endl;
    cout << "Value of c is: " << c << endl;
    cout << "Value of ch is: " << ch << endl;
    // cout << "Value of ch1 is: " << ch1 << endl;
    cout << "Value of flag is: " << flag << endl;
}