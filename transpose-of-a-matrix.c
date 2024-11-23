#include <stdio.h>

int main() {
    int r, c;
    printf("Enter the size of the matrix rows columns: ");
    scanf("%d%d", &r, &c);

    int A[r][c];

    printf("Enter the elements into matrix A: \n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int B[c][r];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            B[j][i] = A[i][j];
        }
    }

    printf("Matrix A:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Transposed matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", B[i] [j]);
        }
        printf("\n");
    }

    return 0;
}