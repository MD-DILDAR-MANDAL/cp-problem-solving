class Solution {
  public:
    int minCost(vector<int>& height) {
        int size = height.size();
        vector<int> dp(size, -1 );
        
        return cost(height, size - 1, dp);
    }

 private:
    int cost(vector<int> &height, int i, vector<int>&dp){
        if(i == 0)return 0;
        if(dp[i] != -1) return dp[i];
        
        int val = 0;
        int minm = INT_MAX;

        for(int  j = 0; j < k;j++){
            if(i - j >= 0){
                val = cost(height, i - j, dp) + abs(height[i] - height[i-1]);
            }
            minm = min(minm, val);
        }
        dp[i] = minm;
        return dp[i];
    }
};
