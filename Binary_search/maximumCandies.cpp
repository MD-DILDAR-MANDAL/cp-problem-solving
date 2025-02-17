class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int low = 1;
        int high = *max_element(candies.begin(),candies.end());
        long long cntk = 0;
        int len = candies.size();
        int mid = 0;
        int ans = 0;

        while(low <= high){
            mid = low + (high - low)/2;
            cntk = 0;
            for(int i = 0;i < len;i++){
                cntk += candies[i]/mid;
            }
            
            if(cntk >= k){
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return ans;        
    }
};