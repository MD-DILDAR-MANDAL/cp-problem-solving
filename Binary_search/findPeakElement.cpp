//https://leetcode.com/problems/find-peak-element/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int mid=0;
        
        while(i<=j){
            if(i==j)return i;
            else if(j-i==1){
                if(nums[i]>nums[j])return i;
                else return j;
            }

            mid=(i+j)/2;

            if(nums[mid-1]<nums[mid]){
                if(nums[mid]>nums[mid+1])return mid;
                else i=mid+1;
            }
            else j=mid-1;
        }
        return 0;
    }
};