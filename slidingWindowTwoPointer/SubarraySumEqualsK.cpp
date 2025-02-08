class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int len = nums.size();
        int diff = 0;
        int r = 0; 
        int sum = 0;
        int cnt = 0;
        unordered_map<int,int>umap;
        umap[0] = 1;

        while(r < len){
            sum += nums[r];
            diff = sum - k;
            if(umap.find(diff) != umap.end()){
                cnt += umap[diff];
            }
            umap[sum]++;
            r++;
        }
        return cnt;    
    }
};