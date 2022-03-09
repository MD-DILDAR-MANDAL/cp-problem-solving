#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> A(n);
		for(int i = 0; i < n; i++) cin >> A[i];
		
		vector <int> ans(n,1);
		for(int i = n - 2; i >= 0; i-- ){
			if((A[i] > 0) != (A[i+1] > 0)) ans[i] = ans[i+1]+1;
			else ans[i] = 1;
		}
		for(int i = 0; i < n; i++) 
		cout << ans[i] << ( (i == n-1)? "\n" : " " );
	}
	return 0;
    
}