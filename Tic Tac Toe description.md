Header Inclusion (#include <stdio.h>):

This line includes the standard input-output library, which is necessary for functions like printf and scanf.
Board Printing Function (printBoard):

This function is responsible for displaying the current state of the Tic Tac Toe board.
Winning Check Function (checkWin):

This function checks if the current player has won by examining the rows, columns, and diagonals of the board.
Board Full Check Function (isBoardFull):

This function checks if the board is full, indicating a tie.
Main Function (main):

The program starts executing from this function.
The game board is initialized with empty spaces, and variables for row, column, and the current player are declared.
A welcome message is displayed.
Game Loop (do-while):

The game runs inside a do-while loop, allowing players to take turns until the game is won or ends in a tie.
Printing the Board and Getting Player's Move:

The current state of the board is printed, and the player is prompted to enter their move (row and column).
Move Validation:

The program checks if the entered move is valid. If not, an error message is displayed, and the player is prompted to enter the move again.
Updating the Board:

If the move is valid, it updates the board with the player's symbol.
Win or Tie Check:

The program checks if the current player has won or if the game is a tie. If so, it prints the result and breaks out of the loop.
Switching Players:

If no win or tie has occurred, the player is switched to the other player (X to O or vice versa).
End of the Program:

The program ends when a winner is determined or when the game ends in a tie. The main function returns 0, indicating successful execution.
This program provides a basic structure for a console-based Tic Tac Toe game in C.

