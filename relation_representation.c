#include <stdio.h>
#define N 100

int relation[N][N];

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

    // Print the adjacency matrix
    printf("Adjacency Matrix representing the relation:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", relation[i][j]);
        }
        printf("\n");
    }

    return 0;
}
