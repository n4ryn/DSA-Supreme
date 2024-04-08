#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 3;

    // Arithmetic operators
    cout << "Addition: " << a + b << endl;       // Addition
    cout << "Subtraction: " << a - b << endl;    // Subtraction
    cout << "Multiplication: " << a * b << endl; // Multiplication
    cout << "Division: " << a / b << endl;       // Division
    cout << "Modulus: " << a % b << endl;        // Modulus

    cout << endl;

    // Relational operators
    cout << "Greater than: " << (a > b) << endl;              // Greater than
    cout << "Lesser than: " << (a < b) << endl;               // Lesser than
    cout << "Equal to: " << (a == b) << endl;                 // Equal to
    cout << "Not equal to: " << (a != b) << endl;             // Not equal to
    cout << "Less than or equal to: " << (a <= b) << endl;    // Less than or equal to
    cout << "Greater than or equal to: " << (a >= b) << endl; // Greater than or equal to

    cout << endl;

    // Assignment operator
    int c = 3; // 3 is assigned to c
    cout << "c: " << c << endl;

    cout << endl;

    // Logical operators
    cout << "Logical AND: " << (0 && 0) << endl; // Logical AND
    cout << "Logical OR: " << (0 || 1) << endl;  // Logical OR
    cout << "Logical NOT: " << (!1) << endl;     // Logical NOT
}