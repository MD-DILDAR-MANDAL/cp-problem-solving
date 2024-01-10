#include <bits/stdc++.h>
using namespace std;
int main(){
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
         }
        if(mp.size() == n){
            cout << -1 << "\n";
        }
        int ans = n + 5;
        for(auto it : mp){
            int x = it.second;
            if(x > 1) 
                ans = min(ans,n - x + 1);
        }
        cout << ans << "\n";
    }
    return 0;
}