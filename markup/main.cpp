//
// Bella
// 3/13/25
// Markup Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip> // For formatting the output
using namespace std;

// Function to calculate the retail price
double calculateRetail(double wholesaleCost, double markupPercentage) {
    return wholesaleCost + (wholesaleCost * (markupPercentage / 100.0));
}

int main() {
    double wholesaleCost, markupPercentage;

    // Input the wholesale cost
    cout << "Enter the item's wholesale cost: $";
    cin >> wholesaleCost;

    // Input the markup percentage
    cout << "Enter the markup percentage: ";
    cin >> markupPercentage;

    // Validate input (wholesale cost and markup percentage must be non-negative)
    if (wholesaleCost < 0 || markupPercentage < 0) {
        cout << "Invalid input. Wholesale cost and markup percentage must be non-negative." << endl;
        return 1;
    }

    // Calculate the retail price
    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);

    // Display the retail price
    cout << fixed << setprecision(2); // Format output to 2 decimal places
    cout << "The item's retail price is: $" << retailPrice << endl;

    return 0;
}
