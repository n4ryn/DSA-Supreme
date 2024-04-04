#include <iostream>  // Iostream is file where implementation of cout is place here
using namespace std; // So that we don't have to write std:: again and again in main function

int main() // Similar to the start of flowchart
{
    // std::cout<<"Hello world"; // Print "Hello world" on the screen
    cout << "Hello world"; // Strings are enclosed inside double inverted commas
    cout << endl;          // move cursor to new line - new way of using
    cout << '\n';          // move cursor to new line - old way of using
    cout << 2 << endl;     // Inverted commas can be avoided incase of numbers
    cout << "2" << endl;   // String 2 is printed
    cout << '2' << endl;   // Character 2 is printer
}