//https://leetcode.com/problems/koko-eating-bananas/
class Solution {
public:

    int minEatingSpeed(vector<int>& piles, int h) {
        
        double sum=0;
        int ans=INT_MAX;
        int i=1;
        int j=*max_element(piles.begin(),piles.end());
        int len=piles.size();

        //if(len==1)return ceil_(piles[0],h);
        while(i<=j){
            int mid=i+(j-i)/2;
            sum=0;
            for(int ind=0;ind<len;ind++){
                sum+=ceil_(piles[ind],mid);
            }
            if(sum<=h){
                ans=min(mid,ans);
                j=mid-1;
            }
            else if(sum > h){
                i=mid+1;
            }
        }
        return ans;
    }
    private:         
     int ceil_(int a,int b){
            int rem=a%b;
            int q=a/b;
            if(rem!=0)return q+1;
            else return q;    
        }
};