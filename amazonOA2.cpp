#include<bits/stdc++.h>
using namespace std;

class solution {
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

        unordered_map<int,int>freq;
        int maxVal = INT_MIN;
        int ans = 1;

        for(int i = 0;i<len;i++){
            freq[arr[i]]++;
            maxVal = max(arr[i],maxVal);
        }

        for (int i = 2; i <=maxVal*2; i++) {
            int cnt = 0;
            unordered_map<int, int>f=freq;

            for(int j = 0;j<len;j++){
                int x = arr[j];
                if(f[x] > 0){
                    int need = i - arr[j];
                    if(x == need){
                        if(f[x]>=2){
                            f[x] -=2;
                            cnt++;
                        }
                    }
                    else if(f[need] >0){
                        f[x]--;
                        f[need]--;
                        cnt++;
                    }
                }
            }
            ans = max(ans,cnt);
        }
        cout << ans << endl;
    }
};

int main() {
    init_code();
    int t;
    cin >> t;
    while (t--) {
        solution ans;
        ans.solve();
    }
    return 0;
}