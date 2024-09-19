#include<stdio.h>
// P(n,r) = n!/(n-r)! 
int factorial(int);

int main() {
    int n, r;
    printf("Enter the total no. of objects(n): ");
    scanf("%d", &n);
    printf("Enter the no. of objects taken at a time(r): ");
    scanf("%d", &r);

    if (n < 0 || r < 0 || r > n) {
        printf("Invalid input: Ensure that n >= r and both are non-negative.\n");
        return 1; 
    }

    int N = factorial(n);
    int R = factorial(n-r);
    printf("P(%d,%d): %.3lf", n, r, (double)N/R);
    return 0;
}
int factorial (int num) {
    int fact = 1;
    int i;
    for(i=2; i<=num; i++) {
        fact*=i;
    }
    return fact;
}