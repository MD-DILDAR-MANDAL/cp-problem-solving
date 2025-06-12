class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int len = nums.size();
     int pre = 1;
     int suff = 1;
     int maxProduct = INT_MIN;
     
     for(int i = 0;i < len;i++){
        if(pre == 0 )pre = 1;
        if(suff == 0)suff = 1;
        pre *= nums[i];
        suff *= nums[len - i - 1];
        maxProduct = max(maxProduct, max(pre,suff)); 
     }

     return maxProduct;
    }
};