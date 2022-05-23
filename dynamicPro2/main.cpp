#include <bits/stdc++.h>
using namespace std;

//ways to reach top of stairs

int ways(int i, int n,vector <int> &dp){
    if(i == n) return 1;
    if(i > n) return 0;
    if(dp[i] != -1) return dp[i] ;
    
    int hop = ways(i+1,n,dp) + ways(i+2,n,dp);
    dp[i] = hop; 
    return hop;
    }
int main(){
    vector <int> dp(100,-1);
	cout << ways(0,4,dp);
    return 0;
}
