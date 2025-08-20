class Solution
{
private:
    bool checkPal(int i, int j, string &s)
    {
        while (i <= j)
        {
            if (s[i++] != s[j--])
            {
                return false;
            }
        }
        return true;
    }
    void generate(int curr, vector<string> tmp, vector<vector<string>> &ans,
                  string &s)
    {
        if (curr == s.size())
        {
            ans.push_back(tmp);
            return;
        }
        for (int i = curr; i < s.size(); i++)
        {
            if (checkPal(curr, i, s))
            {
                tmp.push_back(s.substr(curr, i - curr + 1));
                generate(i + 1, tmp, ans, s);
                tmp.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> ans;
        vector<string> tmp;
        generate(0, tmp, ans, s);
        return ans;
    }
};