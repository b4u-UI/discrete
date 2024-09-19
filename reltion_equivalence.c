#include <stdio.h>
#define N 100

int relation[N][N];

// Function to check reflexivity
int isReflexive(int n) {
    for (int i = 0; i < n; i++) {
        if (relation[i][i] == 0) {
            return 0;  // Not reflexive
        }
    }
    return 1;  // Reflexive
}

// Function to check symmetry
int isSymmetric(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (relation[i][j] == 1 && relation[j][i] == 0) {
                return 0;  // Not symmetric
            }
        }
    }
    return 1;  // Symmetric
}

// Function to check transitivity
int isTransitive(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (relation[i][j] == 1) {
                for (int k = 0; k < n; k++) {
                    if (relation[j][k] == 1 && relation[i][k] == 0) {
                        return 0;  // Not transitive
                    }
                }
            }
        }
    }
    return 1;  // Transitive
}

// Function to check equivalence relation
int isEquivalence(int n) {
    return isReflexive(n) && isSymmetric(n) && isTransitive(n);
}

int main() {
    int n, m, i, j;

    // Input the number of elements in the set
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    // Initialize the adjacency matrix to 0
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            relation[i][j] = 0;
        }
    }

    // Input the number of relations and the relations themselves
    printf("Enter the number of relations: ");
    scanf("%d", &m);

    int x, y;
    for (i = 0; i < m; i++) {
        printf("Enter a pair (x y) representing the relation xRy: ");
        scanf("%d %d", &x, &y);
        relation[x][y] = 1;  // Mark relation (x, y)
    }

    // Check if the relation is an equivalence relation
    if (isEquivalence(n)) {
        printf("The relation is an equivalence relation.\n");
    } else {
        printf("The relation is not an equivalence relation.\n");
    }

    return 0;
}
