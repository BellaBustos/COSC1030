//
// Bella Bustos
// 2/16/25
// University of Guiness Programming Project
// COSC 1030
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    string status, roomBoard;
    int tuition, housing, total;

    cout << "Enter your residential status (in-state or out-of-state): ";
    cin >> status;

    cout << "Do you require room and board? (Y/N): ";
    cin >> roomBoard;

    if (status == "in-state") {
        tuition = 3000;
        housing = (roomBoard == "Y" || roomBoard == "y") ? 2500 : 0;
    } else if (status == "out-of-state") {
        tuition = 4500;
        housing = (roomBoard == "Y" || roomBoard == "y") ? 3500 : 0;
    } else {
        cout << "Invalid residential status entered." << endl;
        return 1;
    }

    total = tuition + housing;

    cout << "\nYour bill for this semester:" << endl;
    cout << "Tuition: $" << tuition << endl;
    cout << "Room and Board: $" << housing << endl;
    cout << "Total: $" << total << endl;

    return 0;
}

