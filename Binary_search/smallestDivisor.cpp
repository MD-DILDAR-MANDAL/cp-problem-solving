//https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int i=1;
        int j=*max_element(nums.begin(),nums.end());
        int sum=0;
        int mid=0;
        int ans=INT_MAX;
        while(i<=j){
            mid=i+(j-i)/2;
            sum=0;
            for(auto it:nums){
                sum+=ceil(it/(float)mid);
            }

            if(sum<=threshold){
                j=mid-1;
                ans=min(ans,mid);
            }
            else i=mid+1;
        }
        return ans;
    }
};