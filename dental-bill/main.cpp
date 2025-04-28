//
// Bella Bustos
// 4/20/25
// Dental Bill Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

// Overloaded function for members
float calculateTotal(float serviceCharge, float testFees) {
    return serviceCharge + testFees;
}

// Overloaded function for non-members
float calculateTotal(float serviceCharge, float testFees, float medicine) {
    return serviceCharge + testFees + medicine;
}

int main() {
    char isMember;
    float serviceCharge, testFees, medicine = 0.0;

    cout << "Is the patient a member of the dental plan? (Y/N): ";
    cin >> isMember;

    cout << "Enter the service charge: ";
    cin >> serviceCharge;

    cout << "Enter the test fees: ";
    cin >> testFees;

    if (isMember == 'N' || isMember == 'n') {
        cout << "Enter the medicine charges: ";
        cin >> medicine;
        cout << "Total bill: $" << calculateTotal(serviceCharge, testFees, medicine) << endl;
    } else {
        cout << "Total bill: $" << calculateTotal(serviceCharge, testFees) << endl;
    }

    return 0;
}

