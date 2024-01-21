#include<iostream>
#include<vector>
using namespace std;

// Structure to represent an edge with weight
struct Edge {
    int destination;
    int weight;
};

int main() {
    int n, m;
    cin >> n >> m;

    // Create an adjacency list with vectors of Edge
    vector<vector<Edge>> adjList(n + 1);

    // Reading and adding weighted edges to the adjacency list
    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        // Create an Edge structure for the edge (u, v) with weight 'w'
        Edge edge1 = {v, w};
        Edge edge2 = {u, w};

        // Add the edges to the adjacency list
        adjList[u].push_back(edge1);
        adjList[v].push_back(edge2);
    }

    return 0;
}
