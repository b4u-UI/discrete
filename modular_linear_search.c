#include <stdio.h>

// Recursive function for modular exponentiation: (a^n) % m
int modExp(int a, int n, int m) {
    if (n == 0) {
        return 1;  // Base case: a^0 = 1
    }
    
    int half = modExp(a, n / 2, m);
    half = (half * half) % m;  // Modular reduction at each step

    if (n % 2 != 0) {  // If exponent is odd, multiply by 'a'
        half = (half * a) % m;
    }

    return half;
}

int main() {
    int a, n, m;
    printf("Enter a base number: ");
    scanf("%d", &a);
    printf("Enter an exponent number: ");
    scanf("%d", &n);
    printf("Enter modular number: ");
    scanf("%d", &m);

    int result = modExp(a, n, m);
    printf("Result of (%d^%d) %% %d = %d\n", a, n, m, result);

    return 0;
}
