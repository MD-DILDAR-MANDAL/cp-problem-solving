#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int num;
        map <int,int> mp;
        for(int i = 0;i < n;i ++){
            cin >> num;
            mp[num]++;
        }
        if(mp.size() == 1){
            cout << 0 << "\n";
         }else
        if(mp.size() == n){
            cout << -1 << "\n";
        }
        int ans = n + 5;
        for(auto it : mp){
            if(it.second > 1) ans = min(ans,n - it.second + 1);
        }
        cout << ans << "\n";
    }
    return 0;
}