//
// Bella Bustos
// 2/22/25
// Calories Burned Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>

int main() {
    const double CALORIES_PER_MINUTE = 3.6;
    const int MAX_MINUTES = 30;
    const int INTERVAL = 5;

    std::cout << "Calories burned on the treadmill:\n";
    std::cout << "--------------------------------\n";
    std::cout << "Minutes\tCalories Burned\n";
    std::cout << "-------\t---------------\n";

    for (int minutes = INTERVAL; minutes <= MAX_MINUTES; minutes += INTERVAL) {
        double caloriesBurned = minutes * CALORIES_PER_MINUTE;
        std::cout << std::setw(7) << minutes << "\t" 
                  << std::fixed << std::setprecision(1) 
                  << std::setw(15) << caloriesBurned << std::endl;
    }

    return 0;
}

