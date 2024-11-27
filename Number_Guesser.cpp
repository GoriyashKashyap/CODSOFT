#include <iostream>
#include <random> 
using namespace std;

int main() {
    // Step 1: Generate a random number
    random_device rd;               
    mt19937 gen(rd());              
    uniform_int_distribution<int> dist(1, 100); // Random number range: 1 to 100

    int randomNumber = dist(gen);   // Generate the random number
    int userGuess = 0;              // Variable to store the user's guess

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?" << endl;

    // Step 2: Loop until the user guesses the correct number
    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number correctly!" << endl;
        }
    }

    return 0;
}
