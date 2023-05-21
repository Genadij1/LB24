#include <iostream>
using namespace std;
int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int start = min(num1, num2);
    int end = max(num1, num2);

    cout << "All numbers in the range: ";
    for (int i = start; i <= end; ++i) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Even numbers in the range: ";
    for (int i = start; i <= end; ++i) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "Odd numbers in the range: ";
    for (int i = start; i <= end; ++i) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << std::endl;

    cout << "Numbers divisible by 7 in the range: ";
    for (int i = start; i <= end; ++i) {
        if (i % 7 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
