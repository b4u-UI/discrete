#include<stdio.h>

void multiplication(int a[][3], int b[][3], int c[][3]) {
    int i, j, k;
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            int sum = 0;
            for(k=0; k < 3; k++) {
                sum = sum + a[i][k] * b[k][j];
                
            }
            c[i][j] = sum;
        }
    }
}
int main() {
    int a[3][3], b[3][3], c[3][3];
    int i,j;
    for(i=0; i<3; i++) {
        for(j=0; j<3 ; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    multiplication(a,b,c);

    printf("Multiplication:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}