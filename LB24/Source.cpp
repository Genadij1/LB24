#include <iostream>
using namespace std;

int main() {

    int num;
    int sum = 0;

    cout << "Enter numbers (enter 0 to exit):" << endl;

    while (true) {
        cin >> num;

        if (num == 0) {
            break;
        }

        sum += num;
    }

    cout << "Sum of the numbers: " << sum << endl;

    return 0;
}
