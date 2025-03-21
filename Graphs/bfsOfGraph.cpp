//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        int V = adj.size();
        vector<int>ans;
        
        vector<int>visArr(V,0);
        visArr[0] = 1;
        
        queue<int>qu;
        qu.push(0);
        
        while(!qu.empty()){
            int tmp = qu.front();
            qu.pop();
            ans.push_back(tmp);
            
            for(int i = 0;i < adj[tmp].size();i++){
                int neighbor = adj[tmp][i]; 
                if( !visArr[ neighbor ] ){
                    visArr[ neighbor] = 1;
                    qu.push(neighbor);
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        // Now using vector of vectors instead of array of vectors
        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u); // For undirected graph, add both u->v and v->u
        }

        Solution obj;
        vector<int> ans = obj.bfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends