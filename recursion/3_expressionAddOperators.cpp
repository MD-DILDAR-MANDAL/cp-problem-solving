class Solution {
public:
    void expAdd(int i, long long sum, long long prevNum, string str,
                vector<string>& ans, string& num, int& target) {
        if (i == num.size()) {
            if (sum == target) {
                ans.push_back(str);
            }
            return;
        }
        for (int j = i; j < num.size(); j++) {
            if (j > i && num[i] == '0') {
                break;
            }

            string currStr = num.substr(i, j - i + 1);
            long long currNum = stoll(currStr);

            if (i == 0) {
                expAdd(j + 1, currNum, currNum, currStr, ans, num, target);
            } else {
                expAdd(j + 1, sum + currNum, currNum, str + "+" + currStr, ans,
                       num, target);
                expAdd(j + 1, sum - currNum, -currNum, str + "-" + currStr, ans,
                       num, target);
                expAdd(j + 1, sum - prevNum + (prevNum * currNum),
                       prevNum * currNum, str + "*" + currStr, ans, num,
                       target);
            }
        }
    }
    vector<string> addOperators(string num, int target) {
        vector<string> ans;
        expAdd(0, 0, 0, "", ans, num, target);
        return ans;
    }
};
