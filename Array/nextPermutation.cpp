class Solution {

public:
    void nextPermutation(vector<int>& nums) {
        int size =  nums.size();
        int flag = -1;
        for(int i = size -1;i > 0;i-- ){
            if(nums[i-1] < nums[i]){
                flag = i-1;
                break;
            }
        }
        if(flag == -1){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(int i = size - 1;i >flag ;i--){
                if(nums[i] > nums[flag]){
                    swap(nums[i] ,nums[flag]);
                    break;
                }
            }
            reverse(nums.begin()+ flag + 1,nums.end());
        }
    }
};