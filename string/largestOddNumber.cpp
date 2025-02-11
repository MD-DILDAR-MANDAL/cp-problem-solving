class Solution {
public:
    string largestOddNumber(string num) {
        int len = num.size();
        string ans = "";
        int flag = -1;
        for(int i = len-1;i >= 0; i--){
            if(num[i] == '1' || num[i] == '3'|| num[i] == '5'|| num[i] == '7'|| num[i] == '9'){
                flag = i;
                break;
            }
        }
        for(int i = 0;i <= flag;i++){
            ans += num[i];
        }
        return ans;
    }
};