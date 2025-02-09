//
// Bella Bustos
// 2/9/2025
// Stadium Seating Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>

int main() {
    // Declare variables for ticket prices
    const double CLASS_A_PRICE = 15.00;
    const double CLASS_B_PRICE = 12.00;
    const double CLASS_C_PRICE = 9.00;

    // Declare variables for ticket quantities
    int classATickets, classBTickets, classCTickets;

    // Input ticket quantities
    std::cout << "Enter the number of Class A tickets sold: ";
    std::cin >> classATickets;

    std::cout << "Enter the number of Class B tickets sold: ";
    std::cin >> classBTickets;

    std::cout << "Enter the number of Class C tickets sold: ";
    std::cin >> classCTickets;

    // Calculate total income
    double totalIncome = (classATickets * CLASS_A_PRICE) +
                         (classBTickets * CLASS_B_PRICE) +
                         (classCTickets * CLASS_C_PRICE);

    // Display the result
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total income generated from ticket sales: $" << totalIncome << std::endl;

    return 0;
}

