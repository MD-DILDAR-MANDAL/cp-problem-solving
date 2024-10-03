//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        int mid=0;
        while(i<=j){
            mid=(i+j)/2;
            if(nums[mid]==target)return true;
            
            if(nums[i]==nums[mid] && nums[mid]==nums[j]){
                i=i+1;
                j=j-1;
            }
            else if(nums[i]<=nums[mid]){
                    if(target>=nums[i]&&target<=nums[mid])j=mid-1;
                    else i=mid+1;
            }
            else{
                if(target>=nums[mid]&&target<=nums[j])i=mid+1;
                else j=mid-1;
            }
        }
        return false;      
    }
};