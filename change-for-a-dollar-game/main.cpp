//
// Bella Bustos
// 2/26/2025
// Change for a Dollar Game Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>

int main() {
    int pennies, nickels, dimes, quarters;
    const int CENTS_IN_DOLLAR = 100;
    
    std::cout << "Welcome to the Change Counting Game!\n";
    std::cout << "Enter the number of coins to make exactly one dollar.\n\n";
    
    std::cout << "Enter the number of pennies: ";
    std::cin >> pennies;
    
    std::cout << "Enter the number of nickels: ";
    std::cin >> nickels;
    
    std::cout << "Enter the number of dimes: ";
    std::cin >> dimes;
    
    std::cout << "Enter the number of quarters: ";
    std::cin >> quarters;
    
    int total_cents = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25);
    
    std::cout << "\nYou entered " << pennies << " pennies, " << nickels << " nickels, "
              << dimes << " dimes, and " << quarters << " quarters.\n";
    
    std::cout << "The total value is $" << std::fixed << std::setprecision(2) 
              << static_cast<double>(total_cents) / 100 << "\n\n";
    
    if (total_cents == CENTS_IN_DOLLAR) {
        std::cout << "Congratulations! You've won the game!\n";
        std::cout << "Your coins add up to exactly one dollar.\n";
    } else if (total_cents < CENTS_IN_DOLLAR) {
        std::cout << "Sorry, your amount is less than one dollar.\n";
        std::cout << "You are short by $" << std::fixed << std::setprecision(2)
                  << static_cast<double>(CENTS_IN_DOLLAR - total_cents) / 100 << "\n";
    } else {
        std::cout << "Sorry, your amount is more than one dollar.\n";
        std::cout << "You are over by $" << std::fixed << std::setprecision(2)
                  << static_cast<double>(total_cents - CENTS_IN_DOLLAR) / 100 << "\n";
    }
    
    return 0;
}


