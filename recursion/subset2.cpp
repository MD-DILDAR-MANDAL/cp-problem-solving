class Solution
{
private:
    void generate(int curr, vector<int> &tmp, vector<vector<int>> &ans,
                  vector<int> &nums)
    {
        ans.push_back(tmp);
        for (int i = curr; i < nums.size(); i++)
        {
            if (i > curr && nums[i] == nums[i - 1])
                continue;
            tmp.push_back(nums[curr]);
            generate(curr + 1, tmp, ans, nums);
            tmp.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> tmp;
        sort(nums.begin(), nums.end());
        generate(0, tmp, ans, nums);
        return ans;
    }
};