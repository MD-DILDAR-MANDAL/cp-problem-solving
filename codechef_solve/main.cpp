#include <bits/stdc++.h> 
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        
        int cnt = 0;
        if(a < b){
            cnt = a;
            b = b - a;
            if(c <=b)cnt += c;
            else if(c >b && b != 0) cnt += b;
            }
        else if(a > b && b != 0) cnt = b;
        else cnt = b;
        
        if(cnt >= n) cout << "YES" << "\n";
        else cout << "NO" << "\n";
        
    }
	return 0;
}