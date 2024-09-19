#include<stdio.h>

int main() {
    int a = 0;
    printf("A\t~A\n");
    printf("----------\n");
    for(int i=0; i<=1;i++) {
        if(i==0) {
            a = 1;
        }
        else if(i==1) {
            a = 0;
        }
        printf("%d\t %d\n",i,a);
    }
    return 0;
}