class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     
     int len = nums.size();
     if(len == 1) return nums[0];
     if(nums[0] != nums[1]) return nums[0];
     if(nums[len - 1 ] != nums[len - 2]) return nums[len - 1];

     int low = 1;
     int high = len - 1;
     
     while(low <= high){
        int mid = low + (high - low)/2;

        if(nums[mid - 1] != nums[mid] && nums[mid + 1] != nums[mid]){
            return nums[mid];
        }
        else if((mid) % 2 == 0){
            if(nums[mid]== nums[mid - 1]) high = mid - 1;
            else low = mid +1;
        }
        else{
            if(nums[mid]== nums[mid - 1]) low = mid + 1;
            else high = mid - 1;
        }
     }

     return -1;
    }
};