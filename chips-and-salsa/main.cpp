//
// Bella Bustos
// 3/17/25
// Chips and Salsa Programming Project
// COSC 1030
//
#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main() {
    const int NUM_TYPES = 5;
    string salsaNames[NUM_TYPES] = {"mild", "medium", "sweet", "hot", "zesty"};
    int jarsSold[NUM_TYPES];
    int totalSales = 0;
    
    // Input sales data
    for (int i = 0; i < NUM_TYPES; i++) {
        cout << "Enter number of jars sold for " << salsaNames[i] << ": ";
        cin >> jarsSold[i];
        
        // Input validation
        while (jarsSold[i] < 0) {
            cout << "Please enter a non-negative number: ";
            cin >> jarsSold[i];
        }
        
        totalSales += jarsSold[i];
    }

    // Generate sales report
    cout << "\nSalsa Sales Report\n";
    cout << "------------------\n";
    for (int i = 0; i < NUM_TYPES; i++) {
        cout << salsaNames[i] << ": " << jarsSold[i] << " jars\n";
    }

    // Find highest and lowest selling
    int maxIndex = 0, minIndex = 0;
    int maxSales = jarsSold[0];
    int minSales = jarsSold[0];

    for (int i = 1; i < NUM_TYPES; i++) {
        if (jarsSold[i] > maxSales) {
            maxSales = jarsSold[i];
            maxIndex = i;
        }
        if (jarsSold[i] < minSales) {
            minSales = jarsSold[i];
            minIndex = i;
        }
    }

    cout << "\nTotal Sales: " << totalSales << " jars\n";
    cout << "Highest Seller: " << salsaNames[maxIndex] << " (" << maxSales << " jars)\n";
    cout << "Lowest Seller: " << salsaNames[minIndex] << " (" << minSales << " jars)\n";

    return 0;
}



  
