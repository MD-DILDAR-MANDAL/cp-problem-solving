class Solution {
public:
    int myAtoi(string s) {
        int len = s.size();
        int i = 0;
        while(s[i] == ' ' && i < len){
            ++i;
        }
        int sign = 1;
        if(s[i] == '-'){
            sign = -1;
            ++i;
        }
        else if(s[i] == '+')++i;

        return solve(s ,i ,sign ,0);
    }

private: 
    long solve(string s,int i, int sign, long long result){
        if(sign*result >= INT_MAX) return INT_MAX;
        if(sign*result <= INT_MIN) return INT_MIN;
        if(i >= s.size() || s[i] < '0' || s[i] > '9') return sign * result;
        return solve(s,i+1,sign, result *10 + (s[i]-'0'));
    }
};