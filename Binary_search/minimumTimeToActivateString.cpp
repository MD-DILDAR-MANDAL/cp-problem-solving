class Solution {
public:
    long long calculatePerm(vector<int>& order, int mid) {
        set<int> st;
        for (int i = 0; i <= mid; i++) {
            st.insert(order[i]);
        }

        int prev = -1;
        long long cnt = 0;
        int n = order.size();
        for (auto it : st) {
            cnt += (long long)(it - prev) * (n - it);
            prev = it;
        }
        return cnt;
    }

    int minTime(string s, vector<int>& order, int k) {
        int ans = -1;
        int len = s.length();
        long long all = (len * (len + 1LL)) / 2;
        int l = 0;
        int h = len - 1;

        if (k > all) {
            return -1;
        }

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (calculatePerm(order, mid) >= k) {
                ans = mid;
                h = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        return ans;
    }
};