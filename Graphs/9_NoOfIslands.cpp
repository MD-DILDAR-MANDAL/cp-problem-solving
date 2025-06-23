class Solution {
public:
void dfs(int base_i, int base_j, pair<int,int>curr, vector<vector<char>> &grid, vector<vector<int>> &visit,set<vector<pair<int,int>>> &island, vector<pair<int,int>> &v){
        int i = curr.first; 
        int j = curr.second;
        int row = grid.size();
        int column = grid[0].size();
        
        if(i < 0|| j < 0 || i >= row || j >= column || grid[i][j] == '0' || visit[i][j]){
            return ;
        }
        visit[i][j] = 1;

        //to get distinct
        //v.push_back({i - base_i, j - base_j});
        
        //not distinct
        v.push_back({i, j});
        int deltaRow[] = {-1, 0, +1, 0};
        int deltaCol[] = {0, -1, 0, +1};
        for(int k = 0; k < 4;k++){
            dfs(base_i, base_j, {i + deltaRow[k], j + deltaCol[k]}, grid, visit, island, v);
        }
        return;
    }

    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int column = grid[0].size();
        vector <vector<int>> visit(row,vector<int>(column,0));
        set< vector< pair<int,int> > > island;
        vector<pair<int,int>> v;
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                if(!visit[i][j] && grid[i][j] == '1'){
                    dfs(i, j, {i,j}, grid, visit, island, v);
                    island.insert(v);
                    v.clear();
                }
            }
        }
        return island.size();
    }
};