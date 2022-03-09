#include <bits/stdc++.h>
using namespace std;


int main(){
    int t,n,m,k;
    cin >> t;
    int mn[51],mx[51];
    mn[0] = mx[0] = 0;
    
    for(int i = 1; i < 51;i ++){
        k = i / 2;
        mn[i] = mn[k] + mn[i - k - 1] + i + 1;
        mx[i] = mx[i - 1] + mx[0] + i + 1;
        }
        
    while(t--){
        int n, m;
        cin >> n >> m;
        if(m < mn[n]) cout << "-1" << "\n";
        else 
        if(m <= mx[n]) cout << "0" << "\n";
        else cout << m - mx[n] << "\n";
        }
    return 0;
    }
    