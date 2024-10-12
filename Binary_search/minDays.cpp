class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int min_ = *min_element(bloomDay.begin(),bloomDay.end());
        int max_ = *max_element(bloomDay.begin(),bloomDay.end());
        int bou=0;
        int cnt=0;
        int ans=-1;
        int len=bloomDay.size();
        if(m>len/k)return -1;
        
        while(min_<=max_){
            cnt=0;
            bou=0;
            int mid=min_+(max_-min_)/2;

            for (int j=0;j<len;j++){
                if(bloomDay[j] <= mid)cnt++;
                else{
                    bou += (cnt/k);
                    cnt=0;
                }
            }
            bou+=(cnt/k);

            if(bou>=m){
                ans = mid;
                max_ = mid-1;
            }
            else min_ = mid+1;
        }
        return ans;       
    }
};