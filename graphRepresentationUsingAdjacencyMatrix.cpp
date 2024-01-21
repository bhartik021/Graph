#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    // Size of the adjacency matrix
    int adj[n+1][n+1];  

    // Initializing the matrix
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            adj[i][j] = 0;
        }
    }

    // Adding edges to the matrix
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    return 0;
}
