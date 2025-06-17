class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        stack<int>st;
        vector<int>ans;
        int V = adj.size();
        vector<int>vis(V,0);
        
        st.push(0);
        while(!st.empty()){
            int tmp = st.top();
            
            st.pop();
            if(!vis[tmp])ans.push_back(tmp);
            vis[tmp] = 1;

            for(int i = adj[tmp].size() - 1;i >= 0;i--){
                int neighbor = adj[tmp][i];
                
                if(!vis[neighbor]){
                    st.push(neighbor);
                }
                
            }
        }
        return ans;
    }
};

/*
//Recursion

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int>ans;
        vector<int>vis(V,0);
        int start = 0;
        
        dfs(start, adj, ans,  vis); 
        return ans;
    }
    
  private:
    void dfs(int start, vector<vector<int>> &adj, vector<int> &ans, vector<int> &vis){
        vis[start] = 1;
        ans.push_back(start);
        int size = adj[start].size();
        
        for(int i = 0;i < size ;i++){
            int neighbor = adj[start][i];
            
            if(!vis[neighbor]){
                dfs(neighbor, adj, ans,vis);
            }
                
        }
        
    }
};

*/