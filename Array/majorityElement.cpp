class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int el1 = INT_MIN;
        int el2 = INT_MIN;
        int cnt1 = 0;
        int cnt2 = 0;

        int size = nums.size();
        int limit = floor(size/3);
        
        for(int i = 0;i < size; i++){
            if(el2 != nums[i] && cnt1 == 0){
                el1 = nums[i];
                cnt1  = 1;
            }
            else if(el1 != nums[i] && cnt2 == 0){
                el2 = nums[i];
                cnt2 = 1;
            }
            else if(el1 == nums[i]){
                cnt1++;
            }
            else if(el2 == nums[i]){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }

        cnt1  = 0;
        cnt2  = 0;
        for(int i = 0; i< size; i ++){
            if(el1 == nums[i])cnt1 ++;
            if(el2 == nums[i])cnt2 ++;
        }
        vector <int>ans;       
        if(cnt1 > limit)ans.push_back(el1);
        if(cnt2 > limit)ans.push_back(el2);
        return ans;
    }
};