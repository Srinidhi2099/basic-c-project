#include <stdio.h>

// Function to print the Tic Tac Toe board
void printBoard(char board[3][3]) {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Function to check if the current player has won
int checkWin(char board[3][3], char player) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return 1; // Player wins
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return 1; // Player wins
    }

    return 0; // No winner yet
}

// Function to check if the board is full (a tie)
int isBoardFull(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0; // Board is not full
            }
        }
    }
    return 1; // Board is full
}

int main() {
    // Initialize the game board
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int row, col;
    char currentPlayer = 'X';

    printf("Welcome to Tic Tac Toe!\n");

    do {
        // Print the current state of the board
        printBoard(board);

        // Get the player's move
        printf("Player %c, enter your move (row and column): ", currentPlayer);
        scanf("%d %d", &row, &col);

        // Check if the move is valid
        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            printf("Invalid move! Try again.\n");
            continue;
        }

        // Make the move on the board
        board[row - 1][col - 1] = currentPlayer;

        // Check for a win or a tie
        if (checkWin(board, currentPlayer)) {
            printBoard(board);
            printf("Player %c wins!\n", currentPlayer);
            break;
        } else if (isBoardFull(board)) {
            printBoard(board);
            printf("It's a tie!\n");
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';

    } while (1);

    return 0;
}