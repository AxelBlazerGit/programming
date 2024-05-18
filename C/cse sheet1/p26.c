#include <stdio.h>

void matrixMultiplication(int m1, int n1, int mat1[][n1], int m2, int n2, int mat2[][n2]) {
    if (n1 != m2) {
        printf("Multiplication not possible!\n");
        return;
    }
    int result[m1][n2];
    for (int i = 0; i < m1; ++i) {
        for (int j = 0; j < n2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < n1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < m1; ++i) {
        for (int j = 0; j < n2; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    int m1 = 2, n1 = 2, m2 = 2, n2 = 2;
    matrixMultiplication(m1, n1, mat1, m2, n2, mat2);
    return 0;
}
