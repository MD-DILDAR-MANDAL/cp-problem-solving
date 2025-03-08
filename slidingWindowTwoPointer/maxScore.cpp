class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l = 0;
        int r = 0;
        int cnt = 0;
        int size = cardPoints.size();
        int kNotTake = size - k;
        int tSum = accumulate(cardPoints.begin(), cardPoints.end(), 0);
        int ans = 0;

        while( r < size){
            tSum = tSum - cardPoints[r];
            cnt++;
            if(cnt > kNotTake){
                tSum += cardPoints[l];
                l++;
                cnt--;
            }
            if(cnt == kNotTake) ans = max(ans, tSum);
            r++;
        }
        return ans;
    }
};

/*intuitive and most efficient
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0;
        int rsum = 0;
        int cnt = 0;
        int n = cardPoints.size();
        int kNotTake = n - k;
        int ans = 0;

        for(int i = 0; i< k; i++){
            lsum += cardPoints[i]; 
        }
        ans = lsum;
        for(int i  = n - 1; i > n - k - 1;i --){
            rsum += cardPoints[i];
            lsum -= cardPoints[i - (n - k)];
            ans = max(ans, rsum + lsum);
        }
        return ans;
    }
};
*/