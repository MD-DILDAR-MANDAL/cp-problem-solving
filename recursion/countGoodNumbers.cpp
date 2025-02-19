class Solution {
public:
    int countGoodNumbers(long long n) {
        if(n==1)return 5;
        long long even = (n + 1) / 2;
        long long odd = n / 2;
        return (powCal(5,even) * powCal(4,odd)) % (powCal(10,9) + 7); 
    }
private:
    long long powCal(long long a, long long exp){
        long long mod = 1e9 +7;
        if(exp == 0)return 1;

        if(exp % 2 != 0)return ( a * powCal( (a * a) % mod, (exp-1) / 2) ) % mod;
        return powCal( (a*a) % mod ,exp / 2);
    }
};