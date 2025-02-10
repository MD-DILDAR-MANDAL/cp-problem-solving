class Solution {
public:
    string reverseWords(string s){
        string tmp = "";
        string ans = "";
        int len =  s.size();

        for(int i = 0; i < len; i++){
            if(s[i] != ' '){
                tmp += s[i];
            }
            else if(s[i] == ' '){
                if(tmp != ""){
                    if(ans != "")ans = tmp + " " + ans;
                    else ans = tmp;
                    tmp = "";
               }
            }
        }

        if(tmp != ""){
            if(ans != "")ans = tmp + " " + ans;
            else ans = tmp;
        }

        return ans;
    }
};