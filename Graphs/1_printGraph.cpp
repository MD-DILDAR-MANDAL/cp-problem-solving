
class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        vector <vector<int> >ans(V);
        int size = edges.size();
        
        for(int j = 0;j < size;j++){
            int a = edges[j].first;
            int b =  edges[j].second;
            ans[a].push_back(b);
            ans[b].push_back(a);
        }
        return ans;
    }
};
