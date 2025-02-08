class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return countSubarray(&nums,goal) - countSubarray(&nums,goal-1);
    }

private:
    int countSubarray(vector<int>&nums,int goal){
        int len = nums.size();
        int l = 0;
        int r = 0; 
        int sum = 0;
        int cnt = 0;

        if(goal < 0) return 0;

        while(r < len){
            sum += nums[r];
            while(sum > goal){
                sum -= nums[l];
                l++;
            }
            cnt += l-r+1;
            r++;
        }
        return cnt;
    }
};