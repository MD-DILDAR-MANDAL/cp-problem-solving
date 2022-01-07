/*Program for picking up half a pile from many piles of stone 
 * Can pick up k times .
 * Find the maximum num of stones we can collect*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue <int> q;
    int n,k;
    cin >> n >> k;
    for(int i = 0;i < n;i++){
        int x;    //stones in one pile
        cin >> x;
        q.push(x);
    }
    int ans = 0;
    while(k--){
        int a1 = q.top() / 2;
        int b1 = q.top() - a1;
        q.pop();
        q.push(b1);
        ans += a1;
        
    }
    cout << '\n' << ans;
	return 0;
}
