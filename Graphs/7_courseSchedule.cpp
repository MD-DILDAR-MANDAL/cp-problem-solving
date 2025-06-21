class Solution {
public:
    
    bool dfs(int curr, vector<int>&visit, unordered_map<int,vector<int>>&preMap){
        if(visit[curr] == 1){
            return false;
        }
        if(visit[curr] == -1) return true;
        
        visit[curr] = 1;
        for(auto neighbour : preMap[curr]){
            if(!dfs(neighbour, visit, preMap)){
                return false;
            }
        }
        visit[curr] = -1;
        return true;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>preMap;
        vector<int>visit(numCourses,0);
        int len = prerequisites.size();
        
        for (int i = 0; i < numCourses; i++) {
            preMap[i] = {};  
        }
        for(auto it: prerequisites){
            preMap[it[0]].push_back(it[1]);
        }
        
        for(int i = 0; i < numCourses;i++){
            if(!dfs(i, visit, preMap)){
                return false;
            }
        }
        return true;
    }
};