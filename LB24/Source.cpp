#include <iostream>
using namespace std;
int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 0; i <= number; ++i) {
        cout << i << " ";
    }

    cout << std::endl;

    return 0;
}
