class Solution {
public:
    double myPow(double x, int n) {
        return solution(x,n);
    }
private:
    double solution(double x, long long int n){
        
        if(n == 0) return 1;
        if(n < 0) return 1/ solution(x, -1*n);

        if(n % 2 != 0) return x*solution(x*x,(n-1)/2);
        return solution(x*x,n/2);
    }
};