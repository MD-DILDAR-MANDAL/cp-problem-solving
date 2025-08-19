class Solution
{
private:
    void generate(int curr, vector<int> &tmp, vector<vector<int>> &ans,
                  int target, vector<int> &candidates)
    {
        if (target == 0)
        {
            ans.push_back(tmp);
            return;
        }
        for (int i = curr; i < candidates.size(); i++)
        {
            if (i > curr && candidates[i] == candidates[i - 1])
            {
                continue;
            }
            if (candidates[i] > target)
                break;
            tmp.push_back(candidates[i]);
            generate(i + 1, tmp, ans, target - candidates[i], candidates);
            tmp.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> tmp;
        int sum = 0;
        sort(candidates.begin(), candidates.end());
        generate(0, tmp, ans, target, candidates);
        return ans;
    }
};