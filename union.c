#include<stdio.h>
int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[5] = {2, 4, 5, 7, 9};
    int i,j,k;
    j=0;
    int size_a = sizeof(a)/sizeof(a[0]);
    int size_b = sizeof(b)/sizeof(b[0]);
    int size_c = size_a + size_b;
    int c[size_c];
  
    for(i=0; i<size_a; i++) {
        c[j] = a[i];
        j++;
    }
    for(i=0;i<size_b; i++) {
        c[j] = b[i];
        j++;
    }
    int temp;
    for(i=0; i<size_c;i++) {
        for(j=i+1; j<size_c; j++) {
            if(c[i]==c[j]){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for(i=0; i<size_c; i++) {
        for(j=i+1; j<size_c; j++) {
            if(c[i] == c[j]) {
                for(k=j; k<size_c; k++) {
                    c[k] = c[k+1];
                }
                size_c--;
                j--;
            }
        }
    }
    printf("Union: ");
    for(i=0; i<size_c; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}