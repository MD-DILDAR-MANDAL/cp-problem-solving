class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector <vector <int> >ans;
      vector <int> temp;
      generate(0, target, candidates, ans, temp);
      return ans;
    }
private:
    void generate(int ind, int target, vector <int>&candidates, vector <vector <int> >&ans, vector <int> &temp){ 
      
      if(ind > candidates.size() - 1){
        if(target == 0) ans.push_back(temp);
        return;
      }
      
      if(candidates[ind] <= target){
        temp.push_back(candidates[ind]);
        generate(ind, target - candidates[ind], candidates, ans, temp);
        temp.pop_back();
      }
      generate(ind + 1, target, candidates, ans, temp);
    }
};