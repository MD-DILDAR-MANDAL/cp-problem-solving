class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums){
        int l = 0;
        int r = 0;
        int len = nums.size();
        int cnt = 0;

        while(r < len){
            if(nums[r] != 1){
                l = r + 1;
            }
            else if(nums[r] == 1){
                cnt = max(cnt,r - l + 1); 
            }
            r++;
        }

        return cnt;
        
    }
};