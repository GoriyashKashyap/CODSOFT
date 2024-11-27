#include <iostream>
using namespace std;

// Tic-Tac-Toe board
char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

// Function to display the current state of the game board
void drawBoard() {
    cout << "\n   0   1   2\n";
    for (int i = 0; i < 3; ++i) {
        cout << i << " ";
        for (int j = 0; j < 3; ++j) {
            cout << " " << board[i][j];
            if (j < 2) cout << " |";
        }
        if (i < 2) cout << "\n  ---+---+---\n";
    }
    cout << "\n";
}

// Function to check if a player has won
bool checkWinner(char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

// Function to check if the game is a draw
bool checkDraw() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') return false; // Empty spaces remain
        }
    }
    return true;
}

// Main function for Tic-Tac-Toe
int main() {
    char currentPlayer = 'X'; // Player X starts first
    int row, col;

    cout << "Welcome to Tic-Tac-Toe!\n";
    cout << "Players take turns entering the row and column (0, 1, or 2) to place their mark.\n";
    cout << "Player X and Player O alternate turns.\n";

    while (true) {
        drawBoard(); // Display the board

        // Get player input
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        // Validate input
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        // Place the player's mark
        board[row][col] = currentPlayer;

        // Check for a winner
        if (checkWinner(currentPlayer)) {
            drawBoard();
            cout << "Player " << currentPlayer << " wins! Congratulations!\n";
            break;
        }

        // Check for a draw
        if (checkDraw()) {
            drawBoard();
            cout << "It's a draw! Well played both players.\n";
            break;
        }

        // Switch players
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
