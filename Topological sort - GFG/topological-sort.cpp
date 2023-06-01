//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void dfs(vector<int>adj[], vector<int>& visited, stack<int>& stk, int node) {
    visited[node] = 1;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(adj, visited, stk, neighbor);
        }
    }
   
    stk.push(node);
}
 
vector<int> topoSort(int V, vector<int> adj[]) 
{  //int numNodes = adj.size();
  
    vector<int>visited(V, 0);
    stack<int> stk;
  
 
    for (int node = 0; node <V; node++) {
        if (!visited[node]) {
            dfs(adj, visited, stk, node);
        }
    }
 
    vector<int> sortedNodes;
    //Pop nodes from the stack to get the sorted order
    while (!stk.empty()) {
        sortedNodes.push_back(stk.top());
        stk.pop();
    }
 
    return sortedNodes;
  
}
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends