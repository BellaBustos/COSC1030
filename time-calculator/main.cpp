//
// Bella Bustos
// 2/13/25
// Time Calculator Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int main() {
    int seconds;
    
    // Ask user to enter number of seconds
    cout << "Enter a number of seconds: ";
    cin >> seconds;
    
    // Calculate and display days if applicable
    if (seconds >= 86400) {
        int days = seconds / 86400;
        cout << seconds << " seconds is " << days << " day(s)." << endl;
    }
    // Calculate and display hours if applicable
    else if (seconds >= 3600) {
        int hours = seconds / 3600;
        cout << seconds << " seconds is " << hours << " hour(s)." << endl;
    }
    // Calculate and display minutes if applicable
    else if (seconds >= 60) {
        int minutes = seconds / 60;
        cout << seconds << " seconds is " << minutes << " minute(s)." << endl;
    }
    // If less than 60 seconds, just display the input
    else {
        cout << seconds << " seconds is less than one minute." << endl;
    }
    
    return 0;
}

