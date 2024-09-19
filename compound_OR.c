#include <stdio.h>

// Function to generate truth table for A OR B
void truthTableOR() {
    printf("A\tB\tA OR B\n");
    printf("------------------------\n");

    // Generate all possible truth values for A and B
    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            printf("%d\t%d\t%d\n", A, B, A || B);
        }
    }
}

int main() {
    truthTableOR(); // Generate the truth table
    return 0;
}
