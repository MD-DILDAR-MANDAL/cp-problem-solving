class Solution {
public:
    int mySqrt(int x) {
        if(x == 1) return x;
        int low = 1;
        int high = x/2;
        int mid = 0;
        while(low <= high){
            mid = low + (high -low)/2;
            if(mid > x / mid )high = mid - 1;
            else if(mid < x / mid)low = mid + 1;
            else return mid;
        }
        return min(low,high);
    }
};