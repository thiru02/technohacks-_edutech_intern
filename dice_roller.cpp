#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice() {
    return rand() % 6 + 1; // Generate a random number between 1 and 6
}

int main() {
    srand(time(0)); // Seed the random number generator with current time

    cout << "Welcome to the Dice Roller!" << endl;

    while (true) {
        cout << "Press Enter to roll the dice (or q to quit): ";
        string input;
        getline(cin, input);

        if (input == "q" || input == "Q") {
            break;
        }

        int diceValue = rollDice();
        cout << "You rolled a " << diceValue << endl;
    }

    return 0;
}