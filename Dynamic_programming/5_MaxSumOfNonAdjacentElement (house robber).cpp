class Solution {
public:
    int sum(vector<int>& nums, vector<int>& dp) {
        int len = nums.size();
        int notPick = 0;
        int pick = 0;

        dp[0] = nums[0];
        for (int i = 1; i < len; i++) {
            pick = nums[i];
            if (i >= 2) {
                pick += dp[i - 2];
            }
            notPick = dp[i - 1];
            dp[i] = max(pick, notPick);
        }
        return dp[len - 1];
    }

    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return sum(nums, dp);
    }
};