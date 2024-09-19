#include<stdio.h>

void booleanJoin(int a[][10], int b[][10], int c[][10]) {
    int i, j;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            c[i][j] = a[i][j] + b[i][j];
            if(c[i][j] == 2) {
                c[i][j] = c[i][j] % 2;
            }
        }
    }
}

int main() {
    int a[10][10], b[10][10], c[10][10];
    int i, j;
    
    printf("Enter 3x3 boolean matrix: \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j] != 0 && a[i][j] != 1) {
                printf("Please enter 1 or 0 element.\n");
                return 1;
            }
        }
    }

    printf("Enter 3x3 boolean matrix: \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &b[i][j]);
            if(b[i][j] != 0 && b[i][j] != 1) {
                printf("Please enter 1 or 0 element.\n");
                return 1;
            }
        }
    }

    printf("Join of two boolean matrices: \n");
    booleanJoin(a, b, c); // Function for Boolean Join Operation.

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
