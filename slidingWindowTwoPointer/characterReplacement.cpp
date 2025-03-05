class Solution {
public:
    int characterReplacement(string s, int k) {
        vector <int> vec(26,0);
        int l = 0;
        int r = 0;
        int size =  s.size();
        int maxFreq = 0;
        int ans = 0;       
        while(r < size){
            vec[ s[r] - 'A' ]++;
            maxFreq = max(maxFreq, vec[ s[r] - 'A' ]);
            if( (r - l + 1) - maxFreq > k){
                vec[ s[l] - 'A' ]--;
                l++;
            }
            ans = max(ans, r - l + 1);
            r++;
        }
        return ans;
    }
};