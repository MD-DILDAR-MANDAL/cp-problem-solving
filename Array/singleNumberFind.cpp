//https://leetcode.com/problems/single-number/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size();
        int r = 0;
        int xor_result = 0;
        while(r < len){
            xor_result = xor_result xor nums[r];
            r++;
        }
        return xor_result;
    }
};