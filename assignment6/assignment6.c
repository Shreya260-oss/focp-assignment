#include <stdio.h>

char board[3][3] = { {'1', '2', '3'},
                     {'4', '5', '6'},
                     {'7', '8', '9'} };

int checkWinner() {
    
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1; // Row
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1; // Column
    }
    
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1;

    return 0; 
}

void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
}

void makeMove(int player) {
    int choice;
    char mark = (player == 1) ? 'X' : 'O';
    printf("Player %d (%c), enter your move (1-9): ", player, mark);
    scanf("%d", &choice);

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if (choice >= 1 && choice <= 9 && board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = mark;
    } else {
        printf("Invalid move! Try again.\n");
        makeMove(player);
    }
}

int main() {
    int winner = 0, moves = 0;
    printf("Welcome to Tic-Tac-Toe!\n");
    displayBoard();

    while (!winner && moves < 9) {
        makeMove((moves % 2) + 1); 
        displayBoard();
        winner = checkWinner();
        moves++;
    }

    if (winner) {
        printf("Player %d wins!\n", (moves - 1) % 2 + 1);
    } else {
        printf("It's a draw!\n");
    }

    return 0;
}
