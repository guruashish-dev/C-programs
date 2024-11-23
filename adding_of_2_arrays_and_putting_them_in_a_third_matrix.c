#include <stdio.h>

void insertelement(int x[][100], int r, int c);
void multiplymatrix(int A[][100], int B[][100], int C[][100], int r1, int c1, int c2);
void displaymatrix(int x[][100], int r, int c);

int main()
{
    int r1, c1, r2, c2, i, j;

    printf("Enter the size of the first matrix (rows columns): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the size of the second matrix (rows columns): ");
    scanf("%d %d", &r2, &c2);

    int A[r1][c1], B[r2][c2];

    if (c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
    } else {
        printf("Enter elements of matrix A:\n");
        insertelement(A, r1, c1);

        printf("Enter elements of matrix B:\n");
        insertelement(B, r2, c2);

        int C[r1][c2]; 
        multiplymatrix(A, B, C, r1, c1, c2);

        printf("Resultant matrix C:\n");
        displaymatrix(C, r1, c2);
    }

    return 0;
}

void insertelement(int x[][100], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &x[i][j]);
        }
    }
}

void multiplymatrix(int A[][100], int B[][100], int C[][100], int r1, int c1, int c2) {
    int i, j, k;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void displaymatrix(int x[][100], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}
