class Solution {
public:
    int maxAmount(int start, int end, vector<int>& nums) {
        int len = end - start + 1;
        vector<int> dp(len, 0);

        dp[0] = nums[start];
        for (int i = 1; i < len; i++) {
            int pick = nums[i + start];
            if (i >= 2) {
                pick += dp[i - 2];
            }
            int nonPick = dp[i - 1];
            dp[i] = max(pick, nonPick);
        }

        return dp[len - 1];
    }
    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len == 1) return nums[0];
        int first = maxAmount(0, len - 2, nums);
        int second = maxAmount(1, len - 1, nums);

        return max(first, second);
    }
};