#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const string symbols[] = {"1", "2", "3", "4", "5"};

void spinSlotMachine(string &s1, string &s2, string &s3) {
    s1 = symbols[rand() % 5];
    s2 = symbols[rand() % 5];
    s3 = symbols[rand() % 5];
}

void playRound(int roundNumber) {
    string slot1, slot2, slot3;
    string guess1, guess2, guess3;

    // Ask the player to make guesses
    cout << "\n--- Round " << roundNumber << " ---" << endl;
    cout << "Guess the three numbers (1, 2, 3, 4, 5): " << endl;
    
    cout << "(don't use space)Enter your first guess: ";
    cin >> guess1;
    cout << "(don't use space)Enter your second guess: ";
    cin >> guess2;
    cout << "(don't use space)Enter your third guess: ";
    cin >> guess3;

    cout << "\nSpinning the slot machine... 🎰" << endl;

    // Spin the slot machine
    spinSlotMachine(slot1, slot2, slot3);

    // Show the result of the spin
    cout << "The result is: " << slot1 << " | " << slot2 << " | " << slot3 << endl;

    // Check if the player's guesses match the result
    if (guess1 == slot1 && guess2 == slot2 && guess3 == slot3) {
        cout << "Congratulations! You guessed it right! 🎉" << endl;
    } else {
        cout << "Oops! Better luck next time! 🍀" << endl;
    }
}

int main() {
    srand(time(0));

    // Start with Round 1
    playRound(1);

    char continueGame;
    cout << "\nDo you want to continue to Round 2? (y/n): ";
    cin >> continueGame;

    if (continueGame == 'y' || continueGame == 'Y') {
        // Start Round 2 if the player chooses to continue
        playRound(2);
    } else {
        cout << "\nThanks for playing! Goodbye! 👋" << endl;
    }

    return 0;
}