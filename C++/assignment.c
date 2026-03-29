#include <stdio.h>
#include <stdbool.h>

bool sudoku(int g[9][9]) {
    for (int i = 0; i < 9; i++) {
        int arrsatvik[10] = {0};
        for (int j = 0; j < 9; j++) {
            int x = g[i][j];
            if (x < 1 || x > 9 || arrsatvik[x]) return false;
            arrsatvik[x] = 1;
        }
    }
    for (int j = 0; j < 9; j++) {
        int arrsatvik[10] = {0};
        for (int i = 0; i < 9; i++) {
            int x = g[i][j];
            if (x < 1 || x > 9 || arrsatvik[x]) return false;
            arrsatvik[x] = 1;
        }
    }
    for (int r = 0; r < 9; r += 3) {
        for (int c = 0; c < 9; c += 3) {
            int arrsatvik[10] = {0};
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int x = g[r+i][c+j];
                    if (x < 1 || x > 9 || arrsatvik[x]) return false;
                    arrsatvik[x] = 1;
                }
            }
        }
    }
    return true;
}
int main() {
    int g[9][9];
    printf("Enter Sudoku (9 numbers each row):\n");
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &g[i][j]);
        }
    }
    if (sudoku(g)) {
        printf("Valid Sudoku\n");
    } else {
        printf("Invalid Sudoku\n");
    }
    return 0;
}