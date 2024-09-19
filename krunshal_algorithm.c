#include <stdio.h>

#define MAX 100

typedef struct {
    int u, v, w;
} Edge;

Edge edges[MAX];
int parent[MAX];

// Find the parent (or root) of a node
int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}

// Union of two sets
void unionSets(int i, int j) {
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}

// Kruskal's Algorithm
void kruskal(int n, int e) {
    Edge mst[MAX];  // Stores the edges of the minimum spanning tree
    int mstCost = 0;
    int mstEdges = 0;
    
    // Initialize the parent array (each vertex is its own parent initially)
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }

    // Sort edges by weight (simple bubble sort for demonstration)
    for (int i = 0; i < e - 1; i++) {
        for (int j = 0; j < e - i - 1; j++) {
            if (edges[j].w > edges[j + 1].w) {
                Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }

    // Main Kruskal's algorithm loop
    for (int i = 0; i < e && mstEdges < n - 1; i++) {
        int u = edges[i].u;
        int v = edges[i].v;
        int w = edges[i].w;

        if (find(u) != find(v)) {
            unionSets(u, v);
            mst[mstEdges++] = edges[i];
            mstCost += w;
        }
    }

    // Display the result
    printf("Minimum Spanning Tree Edges:\n");
    for (int i = 0; i < mstEdges; i++) {
        printf("%d -- %d == %d\n", mst[i].u, mst[i].v, mst[i].w);
    }
    printf("Total cost of MST: %d\n", mstCost);
}

int main() {
    int n, e;

    // Input the number of vertices and edges
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter number of edges: ");
    scanf("%d", &e);

    // Input the edges (u, v, w)
    for (int i = 0; i < e; i++) {
        printf("Enter edge %d (u v w): ", i + 1);
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
    }

    // Run Kruskal's algorithm
    kruskal(n, e);

    return 0;
}
