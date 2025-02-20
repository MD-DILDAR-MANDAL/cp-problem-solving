class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str ="";
        int open = n,close = n; 
        generate(ans,str,open,close);
        return ans;
    }
private:
    void generate(vector <string> &ans,string str, int open,int close){
        if(open == 0 && close == 0){
            ans.push_back(str);
            return;
        }
        
        if(open > 0)generate(ans ,str + "(" ,open-1 ,close);
        if(close > open) generate(ans ,str + ")" ,open ,close - 1);
    }
};