class Solution {

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int len = strs.size();
        unordered_map<string,vector<string>>mp;

        for (int i = 0; i < len; i++) {
            string tmp  = strs[i];
            sort(tmp.begin(),tmp.end());
            mp[tmp].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(vector<string> it: mp){
            ans.push_back(it);
        }
        return ans;
    }
};