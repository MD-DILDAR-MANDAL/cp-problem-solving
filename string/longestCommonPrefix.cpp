class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int arrLength = strs.size();

        string tester = strs[0];
        string testing = "";
        
        for(int i = 1;i < arrLength;i ++){
            testing = strs[i];
            int r = 0;

            while(r < testing.size() && r < tester.size()){
                if(tester[r] == testing[r]) r++;
                else  break;
            }
            tester = tester.substr(0,r);
        }
        return tester; 
    }
};