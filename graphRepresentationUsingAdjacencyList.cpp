#include<iostream>
#include<vector> 
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Create an array of vectors to represent the adjacency list
    vector<int> adj[n+1];

    // Reading and adding edges to the adjacency list
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        // Add v to the adjacency list of u, and u to the adjacency list of v
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    return 0;
}
