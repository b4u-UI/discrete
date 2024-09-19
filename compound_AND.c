#include <stdio.h>

// Function to generate truth table for A AND B
void truthTableAND() {
    printf("A\tB\tA AND B\n");
    printf("------------------------\n");

    // Generate all possible truth values for A and B
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            printf("%d\t%d\t%d\n", i, j, i && j);
        }
    }
}

int main() {
    truthTableAND(); // Generate the truth table
    return 0;
}
