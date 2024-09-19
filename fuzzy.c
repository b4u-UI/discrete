#include <stdio.h>

#define SIZE 100

// Function to perform union of two fuzzy sets
void fuzzyUnion(float A[], float B[], float C[], int n) {
    for (int i = 0; i < n; i++) {
        C[i] = (A[i] > B[i]) ? A[i] : B[i];  // Max(A[i], B[i])
    }
}

// Function to perform intersection of two fuzzy sets
void fuzzyIntersection(float A[], float B[], float C[], int n) {
    for (int i = 0; i < n; i++) {
        C[i] = (A[i] < B[i]) ? A[i] : B[i];  // Min(A[i], B[i])
    }
}

// Function to perform complement of a fuzzy set
void fuzzyComplement(float A[], float C[], int n) {
    for (int i = 0; i < n; i++) {
        C[i] = 1 - A[i];  // 1 - A[i]
    }
}

// Function to input a fuzzy set
void inputSet(float A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter membership value for element %d: ", i + 1);
        scanf("%f", &A[i]);

        // Ensure that membership values are between 0 and 1
        if (A[i] < 0 || A[i] > 1) {
            printf("Error: Membership values should be between 0 and 1. Please re-enter.\n");
            i--;  // Re-input for the current element
        }
    }
}

// Function to print a fuzzy set
void printSet(float A[], int n) {
    printf("{ ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", A[i]);
    }
    printf("}\n");
}

int main() {
    int n;
    float A[SIZE], B[SIZE], C[SIZE];

    // Input the number of elements in the fuzzy sets
    printf("Enter the number of elements in the fuzzy sets: ");
    scanf("%d", &n);

    // Input fuzzy set A
    printf("Enter the elements of fuzzy set A:\n");
    inputSet(A, n);

    // Input fuzzy set B
    printf("Enter the elements of fuzzy set B:\n");
    inputSet(B, n);

    // Perform union
    fuzzyUnion(A, B, C, n);
    printf("Union of A and B: ");
    printSet(C, n);

    // Perform intersection
    fuzzyIntersection(A, B, C, n);
    printf("Intersection of A and B: ");
    printSet(C, n);

    // Perform complement of A
    fuzzyComplement(A, C, n);
    printf("Complement of A: ");
    printSet(C, n);

    // Perform complement of B
    fuzzyComplement(B, C, n);
    printf("Complement of B: ");
    printSet(C, n);

    return 0;
}
