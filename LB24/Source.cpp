#include <iostream>
using namespace std;

double convertToDollars(double amount) {
    return amount / 36.5;
}

double convertToHryvnia(double amount) {
    return amount * 36.5;
}

int main() {
    int choice;
    double amount;

    cout << "Currency Converter" << endl;
    cout << "1. Convert Hryvnia to Dollars" << endl;
    cout << "2. Convert Dollars to Hryvnia" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Enter the amount in Hryvnia: ";
        cin >> amount;
        cout << "Equivalent amount in Dollars: " << convertToDollars(amount) << endl;
        break;
    case 2:
        cout << "Enter the amount in Dollars: ";
        cin >> amount;
        cout << "Equivalent amount in Hryvnia: " << convertToHryvnia(amount) << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}
