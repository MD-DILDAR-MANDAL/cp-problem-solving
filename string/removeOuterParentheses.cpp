//https://leetcode.com/problems/remove-outermost-parentheses/description/
class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        int len = s.size();
        string str ="";

        for(int i = 0;i < len; i++){
            
            if(cnt == 0 && s[i] =='(') cnt++;
            else if(cnt > 0 && s[i] == '('){
                str += s[i];
                cnt++;
            }
            else if(s[i] == ')'){
                 cnt--;
                 if(cnt > 0 ) str += s[i];
            } 
        }
        return str;     
    }
};