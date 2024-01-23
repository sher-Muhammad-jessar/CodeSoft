#include <iostream>
#include <cstdlib> 

using namespace std;

const int SIZE = 3;


void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}


void displayBoard(char board[SIZE][SIZE]) {
    clearScreen();
    cout << "   1   2   3  \n";
    cout << " +---+---+---+\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << i + 1 << "| ";
        for (int j = 0; j < SIZE; ++j) {
            cout << board[i][j] << " | ";
        }
        cout << endl;
        cout << " +---+---+---+\n";
    }
}


bool checkWin(char board[SIZE][SIZE], char player) {
    
    for (int i = 0; i < SIZE; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }

   
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}


bool isBoardFull(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

int main() {
    char board[SIZE][SIZE] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int row, col;
    char currentPlayer = 'X';

    cout << "Welcome to Tic Tac Toe!\n";

    do {
       
        displayBoard(board);

        
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        
        if (row < 1 || row > SIZE || col < 1 || col > SIZE || board[row - 1][col - 1] != ' ') {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        board[row - 1][col - 1] = currentPlayer;

       
        if (checkWin(board, currentPlayer)) {
            displayBoard(board);
            cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        
        if (isBoardFull(board)) {
            displayBoard(board);
            cout << "It's a draw!\n";
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';

    } while (true);

    return 0;
}

