//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = 0;
        int last = nums.size() - 1;
        int mid  = 0;
        int start = -1;
        int end = -1;

        while(first <= last){
            mid = first + (last - first)/2;
            
            if(nums[mid] > target)last = mid - 1;
            else if(nums[mid] < target) first = mid + 1;
            else if(nums[mid] == target){
                start = mid;
                last = mid-1;
            }
        }
        
        first = 0;
        last = nums.size() - 1;
        mid  = 0;
        while(first <= last){
            mid = first + (last - first)/2;    
            if(nums[mid] > target)last = mid - 1;
            else if(nums[mid] < target) first = mid + 1;
            else if(nums[mid] == target){
                end = mid;
                first = mid+1;
            }
        }
        return {start,end};
    }

};