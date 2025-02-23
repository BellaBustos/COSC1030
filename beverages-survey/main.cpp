//
// Bella
// 2/21/2025
// Beverages Survey Programming Project
// COSC 1030
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> beverages = {"Coffee", "Tea", "Coke", "Orange Juice"};
    vector<int> tally(beverages.size(), 0);
    int choice;
    
    cout << "Beverage Survey\n";
    cout << "---------------\n";
    
    while (true) {
        cout << "\nPlease choose your favorite beverage:\n";
        for (int i = 0; i < beverages.size(); i++) {
            cout << i + 1 << ". " << beverages[i] << endl;
        }
        cout << "\nEnter the number of your choice (or -1 to end the survey): ";
        cin >> choice;
        
        if (choice == -1) {
            break;
        }
        
        if (choice >= 1 && choice <= beverages.size()) {
            tally[choice - 1]++;
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    }
    
    cout << "\nSurvey Results:\n";
    cout << "---------------\n";
    for (int i = 0; i < beverages.size(); i++) {
        cout << beverages[i] << ": " << tally[i] << " votes\n";
    }
    
    int max_votes = *max_element(tally.begin(), tally.end());
    cout << "\nMost popular beverage(s):\n";
    for (int i = 0; i < beverages.size(); i++) {
        if (tally[i] == max_votes) {
            cout << beverages[i] << endl;
        }
    }
    
    return 0;
}
