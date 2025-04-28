//
// Bella Bustos
// 4/22/25
// Sorting Benchmarks Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

// Bubble sort implementation with exchange counting
int bubbleSort(int arr[], int size) {
    int exchanges = 0;
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                exchanges++;
            }
        }
    }
    return exchanges;
}

// Selection sort implementation with exchange counting
int selectionSort(int arr[], int size) {
    int exchanges = 0;
    for (int i = 0; i < size-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            exchanges++;
        }
    }
    return exchanges;
}

int main() {
    const int SIZE = 20;
    // Initialize two identical arrays with unsorted values
    int array1[SIZE] = {34, 12, 7, 45, 23, 9, 18, 3, 56, 27, 
                       41, 5, 15, 38, 29, 2, 49, 31, 6, 17};
    int array2[SIZE];
    
    // Copy array1 to array2
    copy(begin(array1), end(array1), begin(array2));

    // Sort and count exchanges
    int bubbleCount = bubbleSort(array1, SIZE);
    int selectionCount = selectionSort(array2, SIZE);

    // Display results
    cout << "Sorting Algorithm Comparison\n";
    cout << "----------------------------\n";
    cout << "Bubble Sort Exchanges:    " << bubbleCount << endl;
    cout << "Selection Sort Exchanges: " << selectionCount << endl;

    return 0;
}

