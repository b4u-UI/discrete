#include <stdio.h>

#define SIZE 10

void booleanProduct(int a[][SIZE], int b[][SIZE], int c[][SIZE], int n) {
    int i, j, k;

    // Initialize result matrix to 0
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = 0;
        }
    }

    // Perform Boolean matrix multiplication
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                c[i][j] = c[i][j] || (a[i][k] && b[k][j]);
            }
        }
    }
}

void printMatrix(int mat[][SIZE], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, i, j;
    int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE];

    // Input matrix size
    printf("Enter the size of the matrices (n x n): ");
    scanf("%d", &n);

    // Input the first matrix
    printf("Enter the elements of the first matrix (only 0 or 1):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input the second matrix
    printf("Enter the elements of the second matrix (only 0 or 1):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Perform Boolean product
    booleanProduct(a, b, c, n);

    // Print the result matrix
    printf("Boolean Product of the matrices:\n");
    printMatrix(c, n);

    return 0;
}
