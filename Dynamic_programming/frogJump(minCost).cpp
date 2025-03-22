
//memoization
class Solution {
  public:
    int minCost(vector<int>& height) {
        int size = height.size();
        vector<int>dp(size, -1 );
        
        return cost(height, size-1, dp);
    }
 private:
    int cost(vector<int> &height, int i, vector<int>&dp){
        if(i == 0)return 0;
        if(dp[i] != -1) return dp[i];
        
        int val2 = INT_MAX;
        int val1 = cost(height, i-1, dp) + abs(height[i] - height[i-1]);
        if(i > 1)
        val2 = cost(height, i-2, dp) + abs(height[i] - height[i-2]);
            
        dp[i] = min(val1, val2);
        return dp[i];
    }
};

//tabulation
/*
class Solution {
  public:
    int minCost(vector<int>& height) {
        int size = height.size();
        vector<int>dp(size, -1 );
        
        return cost(height,dp);
    }
 private:
    int cost(vector<int> &height, vector<int>&dp){
        int size =  height.size();
        int val1;
        int val2;
        dp[0] = 0;
        
        for(int i = 1;i < size;i ++){
            val1 = dp[i-1] + abs(height[i] - height[i-1]);
            
            if(i > 1) val2 = dp[i - 2] + abs(height[i] - height[i-2]);
            else val2 = INT_MAX;
            
            dp[i] = min(val1, val2);
        }
        return dp[size - 1];
    }
};
*/

//space optimization
/*
class Solution {
  public:
    int minCost(vector<int>& height) {
        int size =  height.size();
        int val1;
        int val2;
        int prev = 0;
        int prev2 = 0;
        int curr = 0;
        
        for(int i = 1;i < size;i ++){
            
            val1 = prev + abs(height[i] - height[i-1]);
            if(i > 1) val2 = prev2 + abs(height[i] - height[i-2]);
            else val2 = INT_MAX;
            
            curr = min(val1, val2);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};

*/