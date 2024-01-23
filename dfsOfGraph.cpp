//{ Driver Code Starts
#include<iostream>
#include<vector>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
    void depthFirstSearch(int node, vector<int> adj[], int visited[], vector<int>&dfs) {
        visited[node] = 1;
        dfs.push_back(node);
        // traverse all its neighbours
        for(auto it : adj[node]) {
            if(!visited[it]) {
                depthFirstSearch(it, adj, visited, dfs);
            }
        }
    }

  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int* visited = new int[V];
        for(int i= 0; i < V; i++) {
            visited[i] = 0;
        }
        int start = 0;
        vector<int>dfs;
        depthFirstSearch(start, adj, visited, dfs);
        return dfs;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends