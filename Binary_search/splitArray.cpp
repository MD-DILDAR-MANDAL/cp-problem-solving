class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        
        int low = *max_element(nums.begin(),nums.end());
        long long high = accumulate(nums.begin(),nums.end(),0);
        int partition = 1;

        while(low <= high){
            int mid = low + (high-low)/2;
            partition = maxSumPartition(nums, mid);
 
            if(partition <= k)high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }

private:
    int maxSumPartition(vector <int>&v,int maxPsum){
            
            int len = v.size();
            int partition = 1;
            int subarraySum = 0;

            for(int i = 0;i < len;i ++){
                if(subarraySum + v[i] <= maxPsum){
                    subarraySum += v[i];
                }
                else {
                    partition ++;
                    subarraySum = v[i];
                }
            }
        return partition;
    }
};