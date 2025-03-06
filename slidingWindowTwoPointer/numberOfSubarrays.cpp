class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return (solve(nums, k) - solve(nums, k - 1));
    }
private:
    int solve(vector <int> &nums, int k){
        int cnt = 0;
        int size = nums.size();
        int l = 0;
        int r = 0;
        int sum = 0;
        while(r < size){
            sum += (nums[r] % 2);
            while(sum > k){
                sum -= (nums[l] % 2);
                l++;
            }
            cnt += r - l + 1;
            r++;
        }   
        return cnt;
    }
};