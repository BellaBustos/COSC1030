//
// Bella
// 1/24/25
// Fix the Errors #2 Programming Project
// COSC 1030
//

// This program will take a number and divide it by 2.


#include <iostream>
using namespace std;

int main()
{
    float number;
    float divider = 2.0; // Changed to 2.0 to calculate half of the number

    cout << "Hi there" << endl;
    cout << "Please input a number and then hit return" << endl;
    cin >> number;

    number = number / divider;

    cout << "Half of your number is " << number << endl;

    return 0;
}
