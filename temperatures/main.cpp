//
// Bella Bustos
// 3/17/25
// Temperatures
// COSC 1030
//

#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

typedef int TempArray[50]; // Define array type using typedef

// Function to input temperatures
void inputTemperatures(TempArray temps, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter temperature for day " << (i + 1) << ": ";
        cin >> temps[i];
    }
}

// Function to calculate average temperature
double calculateAverage(TempArray temps, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += temps[i];
    }
    return sum / size;
}

// Function to find the highest temperature
int findHighest(TempArray temps, int size) {
    int highest = temps[0];
    for (int i = 1; i < size; i++) {
        if (temps[i] > highest) {
            highest = temps[i];
        }
    }
    return highest;
}

// Function to find the lowest temperature
int findLowest(TempArray temps, int size) {
    int lowest = temps[0];
    for (int i = 1; i < size; i++) {
        if (temps[i] < lowest) {
            lowest = temps[i];
        }
    }
    return lowest;
}

int main() {
    TempArray temperatures;
    int numTemps;

    cout << "Enter the number of temperatures (max 50): ";
    cin >> numTemps;

    if (numTemps > 50) {
        cout << "Number of temperatures cannot exceed 50." << endl;
        return 1;
    }

    inputTemperatures(temperatures, numTemps);

    double average = calculateAverage(temperatures, numTemps);
    int highest = findHighest(temperatures, numTemps);
    int lowest = findLowest(temperatures, numTemps);

    cout << fixed << setprecision(2); // Set precision for average
    cout << "Average temperature: " << average << endl;
    cout << "Highest temperature: " << highest << endl;
    cout << "Lowest temperature: " << lowest << endl;

    return 0;
}
