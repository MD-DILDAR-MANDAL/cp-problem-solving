//https://leetcode.com/problems/minimum-number-of-seconds-to-make-mountain-height-zero/description/?envType=problem-list-v2&envId=an9r476j
class Solution {
public:
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        long long i = *min_element(workerTimes.begin(),workerTimes.end());
        long long j= *max_element(workerTimes.begin(),workerTimes.end());
        j = j*((long long)mountainHeight*(mountainHeight+1)/2);
        long long ans=0;
        
        while(i<=j){
            long long mid = i+(j-i)/2;
            int cnt = mountainHeight;

            for(auto it:workerTimes){
                //we want a h which satisfies it*h(h+1)/2 <= mid rather than using loop
                long long h = (-1 + sqrt(1 + 8 * (mid/it))) / 2;
                cnt = cnt-h;
            }
            if(cnt<=0 ){
                 ans =mid;
                 j=mid-1;
            }
            else if(cnt>0){
                i = mid+1;
            }
        }
        return ans;
    }
};