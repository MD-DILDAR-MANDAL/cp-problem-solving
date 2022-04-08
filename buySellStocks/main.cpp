#include <bits/stdc++.h>
using namespace std;

int maxProfit()
int main(){
    int n,maxs = INT_MIN,minb = INT_MAX ;
    cin >> n;
	vector <int> v;
    for(int i = 0;i < n;i ++){
        int x;
        cin >> x;
        v.push_back(x);
        }
    for(int i = 0;i < n; i++){
        maxs = max(maxs,v[i]);
        minb = min(minb,v[i]);
    
    }
    return 0;
}
