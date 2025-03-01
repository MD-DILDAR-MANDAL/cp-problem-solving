class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;
        if(dividend == INT_MAX && divisor == -1) return -INT_MAX;

        int sign = 0;
        if(dividend <= 0 && divisor > 0) sign = 1;
        if(dividend >= 0 && divisor < 0) sign = 1;

        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);
        int cnt = 0;
        long long ans = 0;
        while(n >= d){
            cnt = 0;
            while(n >= (d << cnt)){
                cnt++;
            }
            ans = ans + (1 << (cnt-1));
            n = n - (d << (cnt - 1));
        }

        if(ans >= INT_MAX && sign == 0) return INT_MAX;
        else if(ans >= INT_MAX && sign == 1) return INT_MIN;
        else if (ans < INT_MAX && sign == 1) return -ans;
        else return ans;
    }
};