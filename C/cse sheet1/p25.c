#include <stdio.h>

void displayMatrix(int rows, int cols, int matrix[][cols]) {
    printf("Matrix elements:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, cols = 3;
    displayMatrix(rows, cols, matrix);
    return 0;
}
