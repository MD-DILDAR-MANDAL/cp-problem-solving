class Solution {
public:
    int maxSubArray(vector<int>& nums){
        int maxSum = INT_MIN,tmp=0;
        for(auto it : nums){
            tmp=tmp+it;
            maxSum=max(tmp,maxSum);
            if(tmp<0)tmp=0;
            
        }
        return maxSum;
    }
};

/*used kadanes algorithm*/