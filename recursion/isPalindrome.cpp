class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.size();
        string str= "";
        for(int i = 0;i < len;i++){
            if(s[i] >='A' && s[i] <= 'Z') str += 'a' + s[i] - 'A';
            else if((s[i] >='a' && s[i] <='z') || (s[i] >= '0' && s[i]<='9')) str += s[i];
        }
         return isPal(str,0,str.size()-1);
    }

private:
    bool isPal(string &str,int first, int last){
        if(first > last) return true;
        else if(str[first] == str[last]) return isPal(str,first+1,last-1);
        else return false;
    }
};