//
// Bella Bustos
// 2/9/25
// Woody Furniture Company Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
#include <string>

int main() {
    // Define chair styles and prices
    const int NUM_STYLES = 3;
    std::string styles[NUM_STYLES] = {"American Colonial", "Modern", "French Classical"};
    double prices[NUM_STYLES] = {85.00, 57.50, 127.75};
    
    // Variables to store sales data
    int sales[NUM_STYLES];
    double styleTotals[NUM_STYLES];
    double grandTotal = 0.0;

    // Input sales for each style
    for (int i = 0; i < NUM_STYLES; ++i) {
        std::cout << "Enter the number of " << styles[i] << " chairs sold: ";
        std::cin >> sales[i];
        styleTotals[i] = sales[i] * prices[i];
        grandTotal += styleTotals[i];
    }

    // Print results
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nSales Summary:\n";
    for (int i = 0; i < NUM_STYLES; ++i) {
        std::cout << styles[i] << " chairs: $" << styleTotals[i] << std::endl;
    }
    std::cout << "\nTotal sales of all chairs: $" << grandTotal << std::endl;

    return 0;
}

