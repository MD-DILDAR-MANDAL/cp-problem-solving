class Solution {
  public:
    const long long int MOD = 1e9 + 7;
    
    long long int fib(int n,vector<int>&dp){
        dp[0] = 0;
        dp[1] = 1;
        if(dp[n] != -1)return dp[n];
        
        dp[n] = (fib(n - 1, dp) + fib(n - 2, dp)) % MOD;
        return dp[n];
        
    }

    //top- down
    long long int topDown(int n) {
        vector<int> dp(n + 1, -1);
        return fib(n, dp);    
    }

    //bottom-up
    long long int bottomUp(int n) {
        vector <int> dp(n + 1, -1);
        
        dp[0] = 0;
        dp[1] = 1;
        
        for(int i = 2;i <= n;i++){
            dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
        }
        return dp[n];
    }
};