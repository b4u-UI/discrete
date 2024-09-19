#include <stdio.h>

// Function for NOT operation
int NOT(int a) {
    return !a;
}

// Function for AND operation
int AND(int a, int b) {
    return a && b;
}

// Function for OR operation
int OR(int a, int b) {
    return a || b;
}

// Function for implication (P -> Q)
int implies(int p, int q) {
    return OR(NOT(p), q);
}

int main() {
    int P, Q;  // Propositions P and Q
    
    // Print the truth table header
    printf("P | Q | P -> Q | P | Conclusion (Q) | Argument Valid?\n");
    printf("----------------------------------------------------\n");

    // Generate truth table
    for (P = 0; P <= 1; P++) {
        for (Q = 0; Q <= 1; Q++) {
            int premise1 = implies(P, Q);  // P -> Q
            int premise2 = P;              // P
            int conclusion = Q;            // Conclusion: Q
            int argumentValid = implies(AND(premise1, premise2), conclusion);

            // Print truth table rows
            printf("%d | %d |   %d    | %d |       %d        |       %d\n",
                   P, Q, premise1, premise2, conclusion, argumentValid);
        }
    }

    return 0;
}
