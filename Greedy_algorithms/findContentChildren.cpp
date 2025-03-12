class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cnt = 0;
        int gLen = g.size();
        int sLen = s.size();

        sort(g.begin(), g.end(), greater<>());
        sort(s.begin(),s.end(), greater<>());
        int k = 0;
        for(int i = 0;i < gLen;i ++){
                if(cnt == sLen)break;
                if(g[i]<=s[cnt]){
                    cnt++;
                }
        }
        return cnt;
    }
};