//
// Bella Bustos
// 2/25/2025
// Pennies for Pay Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int days;
    double daily_salary, total_pay = 0;

    // Input with validation
    do {
        std::cout << "Enter the number of days worked: ";
        std::cin >> days;
        if (days < 1) {
            std::cout << "Please enter a number of days greater than or equal to 1.\n";
        }
    } while (days < 1);

    // Set up table header
    std::cout << "\nDay\tSalary for the Day\n";
    std::cout << "---\t------------------\n";

    // Calculate and display daily salary
    for (int day = 1; day <= days; day++) {
        daily_salary = std::pow(2, day - 1) / 100.0; // Convert pennies to dollars
        total_pay += daily_salary;

        std::cout << day << "\t$" << std::fixed << std::setprecision(2) << daily_salary << std::endl;
    }

    // Display total pay
    std::cout << "\nTotal pay over " << days << " days: $" << std::fixed << std::setprecision(2) << total_pay << std::endl;

    return 0;
}


