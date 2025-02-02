//
// Bella Bustos
// 2/2/25
// Restaurant Bill Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>

int main() {
    // Constants for the tax rate and tip percentage
    const double TAX_RATE = 0.0675;  // 6.75%
    const double TIP_PERCENTAGE = 0.20;  // 20%

    // Get the amount of the purchase
    double meal_cost = 88.67;

    // Calculate the sales tax
    double tax_amount = meal_cost * TAX_RATE;

    // Calculate the tip
    double tip_amount = meal_cost * TIP_PERCENTAGE;

    // Calculate the total of the sale
    double total_bill = meal_cost + tax_amount + tip_amount;

    // Print information about the sale
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Meal cost: $" << meal_cost << std::endl;
    std::cout << "Tax amount: $" << tax_amount << std::endl;
    std::cout << "Tip amount: $" << tip_amount << std::endl;
    std::cout << "Total bill: $" << total_bill << std::endl;

    return 0;
}


