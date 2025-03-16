//
// Bella
// 3/15/25
// Grades Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

// Function to calculate the average of grades
void calculateAverage(int sum, int numGrades, double &average) {
    average = static_cast<double>(sum) / numGrades;
}

// Function to determine the letter grade based on the average
char determineLetterGrade(double average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

int main() {
    int numGrades;
    cout << "Enter the number of grades: ";
    cin >> numGrades;

    if (numGrades <= 0) {
        cout << "Invalid number of grades. Exiting program." << endl;
        return 1;
    }

    int sum = 0;
    for (int i = 0; i < numGrades; i++) {
        int grade;
        cout << "Enter grade " << (i + 1) << ": ";
        cin >> grade;
        sum += grade;
    }

    double average;
    calculateAverage(sum, numGrades, average);

    char letterGrade = determineLetterGrade(average);

    cout << "The average of the grades is: " << average << endl;
    cout << "The corresponding letter grade is: " << letterGrade << endl;

    return 0;
}
