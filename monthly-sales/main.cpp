//
// Bella Bustos
// 4/13/24
// Monthly Sales Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
double calculateYearlySum(const double* sales, int size);
double calculateAverage(const double* sales, int size);

int main() {
    int numMonths;
    
    // Get number of months from user
    cout << "Enter number of months: ";
    cin >> numMonths;
    
    // Validate input
    if (numMonths <= 0) {
        cerr << "Error: Please enter a positive number of months.\n";
        return 1;
    }
    
    // Dynamically allocate array
    double* monthlySales = new double[numMonths];
    
    // Get sales data
    for (int i = 0; i < numMonths; ++i) {
        cout << "Enter sales for month " << (i + 1) << ": $";
        cin >> monthlySales[i];
    }
    
    // Calculate and display results
    double total = calculateYearlySum(monthlySales, numMonths);
    double avg = calculateAverage(monthlySales, numMonths);
    
    cout << fixed << setprecision(2);
    cout << "\nRESULTS:\n";
    cout << "========\n";
    cout << "Total yearly sales: $" << total << endl;
    cout << "Average monthly sales: $" << avg << endl;
    
    // Clean up memory
    delete[] monthlySales;
    return 0;
}

double calculateYearlySum(const double* sales, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += sales[i];
    }
    return sum;
}

double calculateAverage(const double* sales, int size) {
    if (size == 0) return 0.0; // Prevent division by zero
    return calculateYearlySum(sales, size) / size;
}

