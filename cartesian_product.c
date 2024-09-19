#include<stdio.h>
int main() {
    int a[5] = {1,2,3,4,5};
    int b[3] = {7,8,9};
    int i, j;
    for(i=0; i<5; i++) {
        for(j=0; j<3; j++) {
            printf("(%d, %d) ", a[i], b[j]);
        }
    }
    return 0;
}