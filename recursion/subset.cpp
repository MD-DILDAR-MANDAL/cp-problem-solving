class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int len =  nums.size();
        int i = 0;
        vector <vector<int>>ans;
        vector <int> temp;
        getSubset(ans,nums,temp,i);
        return ans;      
    }
private:
    void getSubset(vector<vector<int>>&ans, vector<int>&nums,vector <int> temp, int i){
        vector <int> temp1 = temp;
        temp.push_back(nums[i]);

        if(i == nums.size()-1){
            ans.push_back(temp);
            ans.push_back(temp1);
            return;
        }
        getSubset(ans,nums,temp, i+1);
        getSubset(ans,nums,temp1,i+1);

    }
};