class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long long sum = 0;
        int l = 0;
        int r = 0;
        int len = nums.size();
        long long freq = 1;
        long long reqSum = 0;
        sort(nums.begin(), nums.end());

        while(l <= r && r < len){
            reqSum = nums[r] * (long long)(r - l + 1);
            sum += nums[r];
            while(sum + k < reqSum && l <= r){
                sum -=nums[l];
                l++;
                reqSum = nums[r] * (long long)(r - l + 1);
            }

            if(freq < (r - l + 1))freq = r - l + 1;
            r++;
        }
        return freq;
    }
};