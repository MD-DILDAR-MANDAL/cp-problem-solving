//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
class Solution {
public:
    int findMin(vector<int>& nums) {
        int i =0;
        int j=nums.size()-1;
        int mid=0;
        int ans=INT_MAX;
        while(i<=j){
            mid=(i+j)/2;
            if(nums[i]<=nums[mid]){
                ans=min(nums[i],ans);
                i=mid+1;
            }
            else{
                ans=min(ans,nums[mid]);
                j=mid-1;
            }
        }
    return ans;
    }
};