//
// Bella Bustos
// 4/27/25
// String Length Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

// Function to count characters in a C-string
int countChars(const char* str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    const int SIZE = 100;
    char input[SIZE];

    cout << "Enter a string: ";
    cin.getline(input, SIZE);

    int numChars = countChars(input);

    cout << "The number of characters in the string is: " << numChars << endl;

    return 0;
}

