#include<iostream>
#include<vector>
#include<climits>  // Include the climits library for using INT_MAX
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Create an adjacency matrix with weights initialized to INT_MAX
    vector<vector<int>> adjMatrix(n + 1, vector<int>(n + 1, INT_MAX));

    // Reading and adding weighted edges to the adjacency matrix
    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        // Update the weight of the edge (u, v) and (v, u) to 'w'
        adjMatrix[u][v] = w;
        adjMatrix[v][u] = w;
    }

    return 0;
}
