class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int sum1 = (len * (len + 1))/2;
        int sum2 = 0;
  
        for(int i = 0;i < len; i++){
            sum2 += nums[i];
        }
  
        return sum1-sum2;
    }
};