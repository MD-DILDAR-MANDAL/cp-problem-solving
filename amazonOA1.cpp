#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {

        int len ;
        cin >> len;
        vector<int>arr;
        int x;
        for (int i = 0; i < len; i++) {
            cin >> x;
            arr.push_back(x);
        }

        int l = 0;
        int r = 1;
        int first = arr[l];
        int second = arr[r];
        int diff = abs(first - second);
        while (l < r && r < len - 1 ) {
            r++;
            if (first > second) {
                if (first > arr[r]) {
                    first = arr[r];
                    diff = min(abs(first - second), diff);
                }
            }
            else {
                if (second > arr[r]) {
                    second = arr[r];
                    diff = min(abs(first - second), diff);
                }
            }

            if (r == len - 1) {
                ++l;
                r = l + 1;
                first = arr[l];
                second = arr[r];
                diff = min(abs(first - second), diff);
            }
        }
        cout << diff << endl;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution ans;
        ans.solve();
    }
    return 0;
}