#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

class Solution {
public:
	vector<int> NextPermute(vector<int>v) {
		int n = v.size();
		int index = -1;

		for (int i = n - 2; i >= 0; i--) {
			if (v[i] < v[i + 1]) {
				index = i;
				break;
			}
		}
		if (index == -1) {
			reverse(v.begin(), v.end());
			return v;
		}
		int minVal = INT_MAX;
		int minIndex = -1;
		for (int i = index + 1; i < n; i++ ) {
			if (v[i] >= v[index]) {
				minVal = min(v[i], minVal);
				minIndex = i;
			}
		}
		swap(v[index], v[minIndex]);
		reverse(v.begin() + index + 1, v.begin() + minIndex + 1);
		return v;
	}
};

int main() {
	vector<int> permute = {2, 2, 3, 3};
	Solution ans;
	vector<int> nextPermute  = ans.NextPermute(permute);
	for (auto it : nextPermute) {
		cout << it << " " ;
	}
	return 0;
}