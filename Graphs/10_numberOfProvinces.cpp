//dfs
class Solution {
private:
    void addProvince(vector<int>& visited, vector<vector<int>>& adj,
                     int current) {
        visited[current] = 1;
        for (auto node : adj[current]) {
            if (!visited[node]) {
                addProvince(visited, adj, node);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int len1 = isConnected.size();

        if (len1 == 1)
            return 1;

        int len2 = isConnected[0].size();
        vector<vector<int>> adj(len1);

        for (int i = 0; i < len1; i++) {
            for (int j = 0; j < len2; j++) {
                if (i != j && isConnected[i][j] == 1) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        vector<int> visited(len1, 0);
        int sum = 0;
        for (int i = 0; i < len1; i++) {
            if (!visited[i]) {
                addProvince(visited, adj, i);
                sum++;
            }
        }
        return sum;
    }
};