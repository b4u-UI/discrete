#include <stdio.h>
#define N 100

int graph[N][N];

int main() {
    int n, m, i, j;
    
    // Input the number of vertices and edges
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the number of edges: ");
    scanf("%d", &m);
    
    // Initialize the adjacency matrix to 0
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }
    
    // Input the edges and fill the adjacency matrix
    int v1, v2;
    for (i = 0; i < m; i++) {
        printf("Enter the vertices for edge %d (v1 v2): ", i+1);
        scanf("%d %d", &v1, &v2);
        
        // Since it's an undirected graph, mark both [v1][v2] and [v2][v1]
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
    
    // Print the adjacency matrix
    printf("Adjacency matrix of the graph:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
