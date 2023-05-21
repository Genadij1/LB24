#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 500 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number game!" << endl;

    while (true) {
        cout << "Enter your guess (or 0 to quit): ";
        cin >> guess;

        if (guess == 0) {
            cout << "Quitting the game. Goodbye!" << endl;
            break;
        }

        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        }
        else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            break;
        }
    }

    return 0;
}
