#include <bits/stdc++.h>
using namespace std;

/*
int fact(int n){
    if(n == 0) return 1;
    return fact(n-1) * n;
    }
*/



// fibonacci series : - 0 1 1 2 3 5 8

int fibo(int n ,vector <int> &dp){ 
    /* & is used, so that same memory location is used otherwise 
     * everytime a function is called a new vector will 
     * be created of size 10^6 which will waste a lot of our memory  */
    if(n == 1) return 0;
    if(n == 2) return 1;
    
    if(dp[n] != -1) return dp[n];
    
    int ans = fibo(n - 1,dp) + fibo(n - 2,dp);
    dp[n] = ans;
    return ans;
    }


int main(){
    
    vector <int> dp(100,-1); //giving size & a value
    cout << fibo(7,dp);
	return 0;
}
