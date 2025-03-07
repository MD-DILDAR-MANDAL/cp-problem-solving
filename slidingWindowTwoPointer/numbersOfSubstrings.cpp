//https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/
class Solution {
public:
    int numberOfSubstrings(string s) {
        vector <int> v(3, -1);
        int count = 0;
        int l = 0;
        int r = 0;
        int minFreq;
        int size = s.size();
        while(r < size){
            v[ s[r] - 'a'] = r;
            minFreq = *min_element(v.begin(), v.end());
            if(minFreq != -1){
                count += minFreq + 1;
            }
            r++;
        }
        return count;
    }
};