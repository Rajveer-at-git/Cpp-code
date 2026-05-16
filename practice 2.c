#include <stdio.h>
#include <stdlib.h>

#define N 8  // Define board size as 8

int board[N], count = 0;

// Function to check if a queen can be placed
int isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        
        if (board[i] == col || abs(board[i] - col) == abs(i - row))
            return 0;
    }
    return 1;
}

// Function to place queens using backtracking
void solve(int row) {
    if (row == N) {
        count++;
        printf("Solution %d: ", count);
        for (int i = 0; i < N; i++)
            printf("%d ", board[i]);
        printf("\n");
        return;
    }

    for (int col = 0; col < N; col++) {
        if (isSafe(row, col)) {
            board[row] = col;
            solve(row + 1);
        }
    }
}

int main() {
    printf("Finding solutions for %d-Queens...\n", N);
    solve(0);
    printf("\nTotal solutions found: %d\n", count);
    return 0;
}