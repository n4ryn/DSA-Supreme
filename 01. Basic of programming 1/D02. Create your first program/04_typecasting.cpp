#include <iostream>
using namespace std;

int main()
{
    // Implicit type conversion
    char ch = 97; // Integer to Character
    cout << ch << endl;

    int num = 'b'; // Character to Integer
    cout << num << endl;

    // Explicit type conversion
    double d = 5.2;
    int x = (int)d + 2; // Double to Integer
    cout << x << endl;
}