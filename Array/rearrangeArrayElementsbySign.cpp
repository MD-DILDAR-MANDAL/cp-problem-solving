class Solution {
public:
	vector<int> rearrangeArray(vector<int>& nums) {
		int len = nums.size();
		int pos[len / 2];
		int neg[len / 2];
		int j = 0;
		int k = 1;

		vector<int> ans(len, 0);
		for (int i = 0; i < len; i++) {
			if (nums[i] >= 0) {
				ans[j] = nums[i];
				j += 2;
			} else {
				ans[k] = nums[i];
				k += 2;
			}
		}
		return ans;
	}
};