//
// Bella Bustos
// 2/2/24
// Ocean Levels Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>

int main() {
    // Constant for the annual rise in millimeters
    const double ANNUAL_RISE = 1.5;

    // Calculate rise for 5, 7, and 10 years
    double rise_5_years = ANNUAL_RISE * 5;
    double rise_7_years = ANNUAL_RISE * 7;
    double rise_10_years = ANNUAL_RISE * 10;

    // Set output formatting
    std::cout << std::fixed << std::setprecision(1);

    // Display results
    std::cout << "Ocean level rise predictions:" << std::endl;
    std::cout << "In 5 years: " << rise_5_years << " millimeters" << std::endl;
    std::cout << "In 7 years: " << rise_7_years << " millimeters" << std::endl;
    std::cout << "In 10 years: " << rise_10_years << " millimeters" << std::endl;

    return 0;
}


