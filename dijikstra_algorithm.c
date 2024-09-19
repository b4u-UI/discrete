#include<stdio.h>
#define INFINITY 99
#define MAX 10
#define startNode 0

void dijkstra(int cost[MAX][MAX], int n);

int main() {
    int cost[MAX][MAX], i, j, n;
    
    printf("Enter no. of vertices: ");
    scanf("%d", &n);
    
    printf("Enter the cost matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
        }
    }
    
    dijkstra(cost, n);  // Call Dijkstra after reading the matrix
    
    return 0;
}

void dijkstra(int cost[MAX][MAX], int n) {
    int distance[MAX], pred[MAX];
    int visited[MAX], count, minDistance, nextNode, i, j;
    
    // Initialize the distance array, predecessor array, and visited array
    for(i = 0; i < n; i++) {
        distance[i] = cost[startNode][i];
        pred[i] = startNode;
        visited[i] = 0;
    }
    
    distance[startNode] = 0;
    visited[startNode] = 1;
    count = 1;
    
    while(count < n) {
        minDistance = INFINITY;
        
        // Find the node with the minimum distance from the start node
        for(i = 0; i < n; i++) {
            if(distance[i] < minDistance && !visited[i]) {
                minDistance = distance[i];
                nextNode = i;
            }
        }
        
        // Mark the selected node as visited
        visited[nextNode] = 1;
        
        // Update the distances of the neighbors of the selected node
        for(i = 0; i < n; i++) {
            if(!visited[i]) {
                if(minDistance + cost[nextNode][i] < distance[i]) {
                    distance[i] = minDistance + cost[nextNode][i];
                    pred[i] = nextNode; 
                }
            }
        }
        
        count++;
    }
    
    // Print the shortest distance and path for each node in a simpler format
    printf("\nNode\tDistance from Start\tPath");
    for(i = 1; i < n; i++) {  // Start from 1 since node 0 is the start node
        printf("\n%d\t%d\t\t\t%d", i, distance[i], i);
        
        j = i;
        while(j != startNode) {
            j = pred[j];
            printf(" <- %d", j);
        }
    }
    printf("\n");
}
