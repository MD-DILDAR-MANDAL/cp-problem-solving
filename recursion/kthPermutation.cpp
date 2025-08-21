class Solution
{
public:
    string getPermutation(int n, int k)
    {
        string s;
        vector<char> str;
        vector<int> fact = {1};
        k = k - 1;

        for (int i = 1; i <= n; i++)
        {
            str.push_back('0' + i);
        }
        for (int i = 1; i <= n; i++)
        {
            fact.push_back(fact[i - 1] * i);
        }

        for (int i = 0; i < n; i++)
        {
            int currInd = k / (fact[n - i] / (n - i));
            s += str[currInd];
            str.erase(str.begin() + currInd);
            k = k % (fact[n - i] / (n - i));
        }
        return s;
    }
};