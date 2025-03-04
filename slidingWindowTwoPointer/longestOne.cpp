class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int zeroes = 0;
        int size = nums.size();
        int maxL = 0;
        while(r < size){
            if(nums[r] == 0) zeroes++;
            if(zeroes <= k){
                maxL = max(maxL, r - l + 1);
            }
            else if(zeroes > k){
                l++;
                if(nums[l-1] == 0)zeroes--;
            }
            r++;
        }
        return maxL;
    }
};