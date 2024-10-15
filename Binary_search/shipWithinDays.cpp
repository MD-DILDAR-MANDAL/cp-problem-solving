//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int i = *max_element(weights.begin(),weights.end());
        int j=accumulate(weights.begin(),weights.end(),0);
        int mid=0;
        int ans=INT_MAX;
        int cntDay=0;
        while(i<=j){
            mid=i+(j-i)/2;
            cntDay = daysCalc(weights,mid);
        
            if(cntDay <= days){
                ans = min(ans,mid);
                j = mid-1;
            }
            else i = mid + 1;
        }
        return ans;
    }
private:
    int daysCalc(vector<int>&weights,int mid){
            int cnt =1;
            int sum=0;
            int len=weights.size();
            for(int k=0; k<len;k++){
                if(sum+weights[k]>mid){
                    cnt++;
                    sum=weights[k];
                }
                else sum+=weights[k];
            }
        return cnt;
    }
};