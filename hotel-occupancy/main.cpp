//
// Bella
// 3/2/2025
// Hotel Occupancy Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>

int main() {
    int floors, rooms, occupied;
    int totalRooms = 0, totalOccupied = 0;
    double occupancyRate;

    // Input number of floors
    do {
        std::cout << "Enter the number of floors in the hotel: ";
        std::cin >> floors;
        if (floors < 1) {
            std::cout << "Invalid input. Number of floors must be at least 1.\n";
        }
    } while (floors < 1);

    // Iterate through each floor
    for (int i = 1; i <= floors; i++) {
        // Skip 13th floor
        if (i == 13) {
            continue;
        }

        // Input number of rooms on the floor
        do {
            std::cout << "Enter the number of rooms on floor " << i << ": ";
            std::cin >> rooms;
            if (rooms < 10) {
                std::cout << "Invalid input. Number of rooms must be at least 10.\n";
            }
        } while (rooms < 10);

        // Input number of occupied rooms
        do {
            std::cout << "Enter the number of occupied rooms on floor " << i << ": ";
            std::cin >> occupied;
            if (occupied < 0 || occupied > rooms) {
                std::cout << "Invalid input. Occupied rooms must be between 0 and " << rooms << ".\n";
            }
        } while (occupied < 0 || occupied > rooms);

        totalRooms += rooms;
        totalOccupied += occupied;
    }

    // Calculate occupancy rate
    occupancyRate = static_cast<double>(totalOccupied) / totalRooms * 100;

    // Display results
    std::cout << "\nHotel Occupancy Report:\n";
    std::cout << "Total number of rooms: " << totalRooms << std::endl;
    std::cout << "Total number of occupied rooms: " << totalOccupied << std::endl;
    std::cout << "Total number of unoccupied rooms: " << (totalRooms - totalOccupied) << std::endl;
    std::cout << "Occupancy rate: " << std::fixed << std::setprecision(2) << occupancyRate << "%" << std::endl;

    return 0;
}

