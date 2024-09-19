#include<stdio.h>
int main() {
    int m,n,i,j;
    printf("Enter the size of first set: ");
    scanf("%d", &m);
    printf("Enter the size of second set: ");
    scanf("%d", &n);
    int a[m], b[n];
    int size_a = sizeof(a)/sizeof(a[0]);
    int size_b = sizeof(b)/sizeof(b[0]);

    printf("Enter any %d elements in set1: \n", m);
    for(i=0; i<size_a; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter any %d elements in set2: \n", n);
    for(i=0; i<size_b; i++) {
        scanf("%d", &b[i]);
    }
    printf("[A-B]: ");
    for(i=0; i<size_a; i++) {
        int flag = 0;
        for(j=0; j<size_b; j++) {
            if(a[i] == b[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}