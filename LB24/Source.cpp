#include <iostream>

using namespace std;

int main() {
    int start, end;

    cout << "Enter the first number: ";
    cin >> start;

    cout << "Enter the second number: ";
    cin >> end;

    int sum = 0;

    for (int i = start; i <= end; ++i) {
        sum += i;
    }

    cout << "Sum of numbers in the range: " << sum << endl;

    return 0;
}
