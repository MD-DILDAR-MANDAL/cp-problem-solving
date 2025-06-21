class Solution {
public:
    
    bool detect(int curr, vector<int>&visit, vector<vector<int>> &adj){
        if(visit[curr] == 1){
            return true;
        }
        if(visit[curr] == -1) return false;
        
        visit[curr] = 1;
        for(auto neighbour : adj[curr]){
            if(detect(neighbour, visit, adj)){
                return true;
            }
        }
        visit[curr] = -1;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int>visit(numCourses, 0);
        int len = prerequisites.size();
        
        for (int i = 0; i < numCourses; i++) {
            adj[i] = {};  
        }
        for(auto it: prerequisites){
            adj[it[0]].push_back(it[1]);
        }
        
        for(int i = 0; i < numCourses;i++){
            if(visit[i] != -1 && detect(i, visit, adj)){
                return true;
            }
        }
        return false;
    }
};