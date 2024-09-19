#include <stdio.h>

// Function to generate truth table for A XOR B
void truthTableXOR() {
    printf("A\tB\tA XOR B\n");
    printf("------------------------\n");

    // Generate all possible truth values for A and B
    for (int A = 0; A <= 1; A++) {
        for (int B = 0; B <= 1; B++) {
            printf("%d\t%d\t%d\n", A, B, A ^ B);
        }
    }
}

int main() {
    truthTableXOR(); // Generate the truth table
    return 0;
}
